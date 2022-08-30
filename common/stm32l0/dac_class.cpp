#include "stm32f05x.h"
#include "common.h"
#include "cmsis/core_cm0.h"
#include "gpio.h"
#include "dac_class.h"
#include "../basics.h"

static GpioClass led (GpioPortA, 0);
static DAC_class * Instance = nullptr;

static inline void EnableClock (void) {
  RCC.AHBENR.modify ([](RCC_AHBENR_s & r) -> auto {
    r.B.DMA1EN = 1u;
    r.B.IOPAEN = 1u;
    return r.R;
  });
  RCC.APB1ENR.modify([](RCC_APB1ENR_s & r) -> auto {
    r.B.TIM2EN = 1u;
    r.B.DACEN  = 1u;
    return r.R;
  });
}
static inline void Timer2Init (const uint32_t us) {
  TIM2.PSC.R = 47;  // 1 MHz
  TIM2.ARR.R = us - 1u;
  // Preload, enable
  TIM2.CR1.B.ARPE = 1u;
  // TRGO update for DAC
  TIM2.CR2.B.MMS  = 2u;
  TIM2.CR1.B.CEN  = 1u;
}
// DAC mapped DMA1 channel 3
static inline void Dma1Init (int16_t * const ptr) {
  // Configure the peripheral data register address
  DMA1.CPAR3.R  = reinterpret_cast<uint32_t> (&DAC.DHR12R1);
  // Configure the memory address
  DMA1.CMAR3.R  = reinterpret_cast<uint32_t> (ptr);
  // Configure the number of DMA tranfer to be performs on DMA channel
  DMA1.CNDTR3.R = 2 * PERIOD;
  // configure increment, size, interrupts and circular mode
  DMA1.CCR3.modify([](DMA_CCR3_s & r) -> auto {
    r.B.MINC  = 1u;
    r.B.PSIZE = 1u;
    r.B.MSIZE = 1u;
    r.B.HTIE  = 1u;
    r.B.TCIE  = 1u;
    r.B.CIRC  = 1u;
    r.B.DIR   = 1u;
    return r.R;
  });
  // Enable DMA Stream
  DMA1.CCR3.B.EN  = 1u;
  // Enable DMA transfer on DAC and circular mode
  DAC.CR.B.DMAEN1 = 1u;
}
static inline void Dac_Init (void) {
  DAC.CR.modify([](DAC_CR_s & r) -> auto {
    r.B.TSEL1  = 4u;    // timer 2
    r.B.TEN1   = 1u;
    r.B.EN1    = 1u;
    return r.R;
  });
}

DAC_class::DAC_class() noexcept : AbstractChain(), m_buffer {0},
ptr_l(m_buffer), ptr_h (m_buffer + PERIOD), current (m_buffer) {
  if (Instance) return;
  Instance = this;
  EnableClock();
  Timer2Init (125);
  NVIC_EnableIRQ (DMA1_Channel2_3_IRQn);
  Dma1Init   (m_buffer);
  Dac_Init   ();
}
inline void DAC_class::irq (void) {
  DMA_ISR_s status (DMA1.ISR);
  current = nullptr;
  if (status.B.HTIF3) current = ptr_l;
  if (status.B.TCIF3) current = ptr_h;
  // znuluj příznaky
  DMA1.IFCR.R = status.R;
  if (!current) return;
  // zpracuj data, pokud je potřeba
  send (current, PERIOD);    // Svrchní vrstva (Generator) naplní buffer
  ~led;
}
extern "C" void DMA1_Channel2_3_IRQHandler (void) {
  if (Instance) Instance->irq();
}
