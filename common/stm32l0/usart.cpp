#include "irq.h"
#include "stm32f05x.h"
#include "cmsis/core_cm0.h"
#include "common.h"
#include "gpio.h"
#include "usart.h"

extern "C" uint32_t SystemCoreClock;
static Usart * Instance = nullptr;

static constexpr unsigned maxbuf = 64u;
static char     rx_buffer [maxbuf];
static unsigned rx_index = 0u;

void Usart::irq (void) {
  volatile USART_ISR_s status (USART1.ISR);   // načti status přerušení
  char rdata, tdata;
  
  if (status.B.TXE) {                         // od vysílače
    if (tx_ring.Read (tdata)) {               // pokud máme data
      USART1.TDR.R = (uint32_t) tdata & 0xFFu;// zapíšeme do výstupu
    } else {                                  // pokud ne
      rdata = (USART1.RDR.R) & 0xFFu;         // dummy read
      USART1.CR1.B.RE    = SET;               // povol prijem
      USART1.CR1.B.TXEIE = RESET;             // je nutné zakázat přerušení od vysílače
    }
  }
  if (status.B.RXNE) {                        // od přijímače
    rdata = (USART1.RDR.R) & 0xFFu;           // načteme data
    if (rdata == '\r') rdata = '\n';
    rx_buffer [rx_index++] = rdata;
    if ((rx_index > 60) or (rdata == '\n')) {
      Up (rx_buffer, rx_index);
      rx_index = 0u;
    }
  }
}
/// Voláno z čistého C - startup.c
extern "C" void USART1_IRQHandler (void) {
  if (Instance) Instance->irq();
};

Usart::Usart(const uint32_t baud) noexcept : tx_ring() {
  if (Instance) return;     // Chyba - jedina instance
  Instance = this;
  // 1. Clock Enable
  RCC.APB2ENR.B.USART1EN = SET;
  // 2. GPIO Alternate Config
  GpioClass txp (GpioPortA,  9, GPIO_Mode_AF);
  GpioClass rxp (GpioPortA, 10, GPIO_Mode_AF);
  txp.setAF (1);
  rxp.setAF (1);
  // 4. NVIC
  NVIC_EnableIRQ (USART1_IRQn);
  uint32_t tmp = 0;
  // 5. USART registry 8.bit bez parity
  USART1.CR1.modify([] (auto & r) -> auto {
    r.B.RE      = SET;
    r.B.TE      = SET;
    r.B.RXNEIE  = SET;
    return r.R;
  });
  USART1.CR2.R = 0;
  USART1.CR3.B.OVRDIS = SET;
  // Tuhle část už vezmeme přímo z knihovny, jen ty hodiny zjednodušíme na SystemCoreClock
  uint32_t apbclock = SystemCoreClock;
  uint32_t integerdivider, fractionaldivider;
  /* Determine the integer part */
  if (USART1.CR1.B.OVER8 != RESET) {
    /* Integer part computing in case Oversampling mode is 8 Samples */
    integerdivider = ((25u * apbclock) / (2u * (baud)));    
  } else  {
    /* Integer part computing in case Oversampling mode is 16 Samples */
    integerdivider = ((25u * apbclock) / (4u * (baud)));    
  }
  tmp = (integerdivider / 100u) << 4;
  /* Determine the fractional part */
  fractionaldivider = integerdivider - (100u * (tmp >> 4));
  /* Implement the fractional part in the register */
  if (USART1.CR1.B.OVER8 != RESET) {
    tmp |= ((((fractionaldivider * 8u ) + 50u) / 100u)) & ((uint8_t)0x07u);
  } else {
    tmp |= ((((fractionaldivider * 16u) + 50u) / 100u)) & ((uint8_t)0x0Fu);
  } 
  /* Write to USART BRR */
  USART1.BRR.R = (uint16_t)tmp;
  SetRS485 (false);
  USART1.CR1.B.UE = SET;        // nakonec povolit globálně
}

uint32_t Usart::Down (const char * data, const uint32_t len) {
  uint32_t res;
  for (res=0; res<len; res++) if (!tx_ring.Write(data[res])) break;
  USART1.CR1.B.RE    = RESET;
  USART1.CR1.B.TXEIE = SET;      // po povolení přerušení okamžitě přeruší
  return res; // Je naspodu - Bottom, takže dál už není třeba nikam předávat
}

void Usart::SetHalfDuplex (const bool on) const {
  USART1.CR1.B.UE = RESET;       // zakázat, jinak nelze nastavovat
  if (on)  USART1.CR3.B.HDSEL = SET;    // poloduplex on
  else     USART1.CR3.B.HDSEL = RESET;  // poloduplex off
  USART1.CR1.B.UE = SET;         // nakonec povolit globálně
}
void Usart::SetRS485 (const bool polarity) const {
  USART1.CR1.B.UE  = RESET;       // zakázat, jinak nelze nastavovat
  // Nastavit pin DE (RTS)
  GpioClass de (GpioPortA,  12u, GPIO_Mode_AF);
  de.setAF (1u);
  // Nastavení driveru
  USART1.CR3.B.DEM  = SET;       // povolit DE v USARTu
  if (polarity) USART1.CR3.B.DEP = SET;
  else          USART1.CR3.B.DEP = RESET;
  // A nakonec doby vybavení (přesah) - to je hodně užitečné
  USART1.CR1.modify([] (auto & r) -> auto {
    r.B.DEAT   = 1u;       // doba vybavení před start bitem - 16 ~= 1 bit, 0..31
    r.B.DEDT   = 1u;       // doba vybavení po stop bitu     - 16 ~= 1 bit, 0..31
  //r.B.UE     = SET;
    return r.R;
  });
}
