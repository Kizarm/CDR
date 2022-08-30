#include "stm32f05x.h"
#include "common.h"
#include "cmsis/core_cm0.h"
#include "gpio.h"
#include "adc_class.h"
#include "../basics.h"

static GpioClass led (GpioPortA, 1);
static constexpr uint32_t AdcChanel = 2u;
static constexpr uint32_t AdcPin    = 2u;

static inline void EnableClock (void) {
  RCC.APB2ENR.B.ADCEN  = SET;
  RCC.AHBENR.B.DMA1EN  = SET;
  RCC.APB1ENR.B.TIM3EN = SET;
}
static inline void Timer3Init (uint32_t us) {
  TIM3.PSC.R  = 47u;
  TIM3.ARR.R  = us - 1u;
  TIM3.RCR.R  = 0u;
  // Preload, enable
  TIM3.CR1.B.ARPE = SET;
  // TRGO update for ADC
  TIM3.CR2.B.MMS  = 2;
}
static inline void Dma1Ch1Init (int16_t * ptr) {
  // Enable DMA transfer on ADC and circular mode
  ADC.CFGR1.B.DMAEN  = SET;
  ADC.CFGR1.B.DMACFG = SET;
  // Configure the peripheral data register address
  DMA1.CPAR1.R = reinterpret_cast<uint32_t> (&(ADC.DR));
  // Configure the memory address
  DMA1.CMAR1.R = reinterpret_cast<uint32_t> (ptr);
  // Configure the number of DMA tranfer to be performs on DMA channel 1
  DMA1.CNDTR1.R = 2 * PERIOD;
  // Configure increment, size, interrupts and circular mode
  DMA1.CCR1.modify([] (auto & r) -> auto {
    r.B.MINC  = SET;
    r.B.MSIZE = 1u;
    r.B.PSIZE = 1u;
    r.B.HTIE  = SET;
    r.B.TCIE  = SET;
    r.B.CIRC  = SET;
    return r.R;
  });
  // Enable DMA Channel 1
  DMA1.CCR1.B.EN = SET;

}
static inline void AdcCalibrate (void) {
  // Ensure that ADEN = 0
  // Clear ADEN
  if (ADC.CR.B.ADEN != RESET) {
    ADC.CR.B.ADEN = RESET;
  }
  // Launch the calibration by setting ADCAL
  ADC.CR.B.ADCAL = SET;
  // Wait until ADCAL=0
  while (ADC.CR.B.ADCAL != RESET);
  //__NOP();
  //__NOP();   // This 2 NOPs are to ensure 2 ADC Cycles  before setting ADEN bit
}
static inline void AdcInit (void) {
  // PCLK / 2 - jitter
  ADC.CFGR2.B.JITOFF_D2 = 1u;
  // Select TRG TIM3
  ADC.CFGR1.modify([] (auto & r) -> auto {
    r.B.EXTEN  = 1u;
    r.B.EXTSEL = 3u;
    return r.R;
  });
  // Select CHSELx
  ADC.CHSELR.R = (1 << AdcChanel);
  // Select a sampling mode of 000
  ADC.SMPR.R   = 1u;
}
static inline void AdcStart (void) {
  ADC.CR.B.ADEN    = SET;
  TIM3.CR1.B.CEN   = SET;
  ADC.CR.B.ADSTART = SET;
}
static ADC_class * Instance = nullptr;

ADC_class::ADC_class() noexcept : AbstractChain(), m_buffer {0},
ptr_l(m_buffer), ptr_h (m_buffer + PERIOD), current (m_buffer) {
  Instance = this;
  EnableClock ();
  AdcCalibrate();
  GpioClass in   (GpioPortA, AdcPin, GPIO_Mode_AN);
  Timer3Init     (125);
  NVIC_EnableIRQ (DMA1_Channel1_IRQn);
  Dma1Ch1Init (m_buffer);
  AdcInit     ();
  AdcStart    ();
}
void ADC_class::dmaIrq (void) {
  volatile DMA_ISR_s  status (DMA1.ISR);
  current = nullptr;
  if (status.B.HTIF1) current = ptr_l;
  if (status.B.TCIF1) current = ptr_h;
  // znuluj příznaky
  DMA1.IFCR.R = status.R;
  if (!current) return;
  // zpracuj data, pokud je potřeba
  send (current, PERIOD);
  ~led;
}
extern "C" void DMA1_Channel1_IRQHandler (void) {
  if (Instance) Instance->dmaIrq();
}
