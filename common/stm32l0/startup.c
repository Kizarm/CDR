#include <stdint.h>
#include "sys_l051.h"

#if defined (__cplusplus)
extern "C" {
#endif

/// V linker skriptu
extern void (*__init_array_start)();
extern void (*__init_array_end)  ();
/// Inicializace statických konstruktorů - použít explicitně po celkové inicializaci systému
/*static inline */void static_init() {
  void (**p)();
  // Tohle je sice konstrukce značně nepřehledná (nalezená na webu), leč funguje.
  for (p = &__init_array_start; p < &__init_array_end; p++) (*p)();
}


#define WEAK     __attribute__ ((weak))
#define ALIAS(f) __attribute__ ((weak, alias (#f)))

extern unsigned int _estack;
/* start address for the initialization values of the .data section.
defined in linker script */
extern unsigned int _sidata;
/* start address for the .data section. defined in linker script */
extern unsigned int _sdata;
/* end address for the .data section. defined in linker script */
extern unsigned int _edata;
/* start address for the .bss section. defined in linker script */
extern unsigned int _sbss;
/* end address for the .bss section. defined in linker script */
extern unsigned int _ebss;

#define BootRAM ((void (*)(void))0xF108F85F)

WEAK void Reset_Handler     (void);
WEAK void DefaultHandler    (void);

void NMI_Handler                    (void) ALIAS(Default_Handler);
void HardFault_Handler              (void) ALIAS(Default_Handler);
void SVC_Handler                    (void) ALIAS(Default_Handler);
void PendSV_Handler                 (void) ALIAS(Default_Handler);
void SysTick_Handler                (void) ALIAS(Default_Handler);

void WWDG_IRQHandler                (void) ALIAS(Default_Handler);
void PVD_IRQHandler                 (void) ALIAS(Default_Handler);
void RTC_IRQHandler                 (void) ALIAS(Default_Handler);
void FLASH_IRQHandler               (void) ALIAS(Default_Handler);
void RCC_IRQHandler                 (void) ALIAS(Default_Handler);
void EXTI0_1_IRQHandler             (void) ALIAS(Default_Handler);
void EXTI2_3_IRQHandler             (void) ALIAS(Default_Handler);
void EXTI4_15_IRQHandler            (void) ALIAS(Default_Handler);
void TS_IRQHandler                  (void) ALIAS(Default_Handler);
void DMA1_Channel1_IRQHandler       (void) ALIAS(Default_Handler);
void DMA1_Channel2_3_IRQHandler     (void) ALIAS(Default_Handler);
void DMA1_Channel4_5_IRQHandler     (void) ALIAS(Default_Handler);
void ADC1_COMP_IRQHandler           (void) ALIAS(Default_Handler);
void TIM1_BRK_UP_TRG_COM_IRQHandler (void) ALIAS(Default_Handler);
void TIM1_CC_IRQHandler             (void) ALIAS(Default_Handler);
void TIM2_IRQHandler                (void) ALIAS(Default_Handler);
void TIM3_IRQHandler                (void) ALIAS(Default_Handler);
void TIM6_DAC_IRQHandler            (void) ALIAS(Default_Handler);
void TIM14_IRQHandler               (void) ALIAS(Default_Handler);
void TIM15_IRQHandler               (void) ALIAS(Default_Handler);
void TIM16_IRQHandler               (void) ALIAS(Default_Handler);
void TIM17_IRQHandler               (void) ALIAS(Default_Handler);
void I2C1_IRQHandler                (void) ALIAS(Default_Handler);
void I2C2_IRQHandler                (void) ALIAS(Default_Handler);
void SPI1_IRQHandler                (void) ALIAS(Default_Handler);
void SPI2_IRQHandler                (void) ALIAS(Default_Handler);
void USART1_IRQHandler              (void) ALIAS(Default_Handler);
void USART2_IRQHandler              (void) ALIAS(Default_Handler);
void CEC_IRQHandler                 (void) ALIAS(Default_Handler);

extern int main(void);
extern void SystemInit (void);

#if defined (__cplusplus)
} // extern "C"
#endif

__attribute__ ((section(".isr_vector")))
void (* const Vectors[])(void) = {
  (void (*)(void))&_estack,
  Reset_Handler,                    // The reset handler
  NMI_Handler,                      // The NMI handler
  HardFault_Handler,                // The hard fault handler
  0,                                // Reserved
  0,                                // Reserved
  0,                                // Reserved
  0,                                // Reserved
  0,                                // Reserved
  0,                                // Reserved
  0,                                // Reserved
  SVC_Handler,                      // SVCall handler
  0,                                // Reserved
  0,                                // Reserved
  PendSV_Handler,                   // The PendSV handler
  SysTick_Handler,                  // The SysTick handler

  WWDG_IRQHandler,
  PVD_IRQHandler,
  RTC_IRQHandler,
  FLASH_IRQHandler,
  RCC_IRQHandler,
  EXTI0_1_IRQHandler,
  EXTI2_3_IRQHandler,
  EXTI4_15_IRQHandler,
  TS_IRQHandler,
  DMA1_Channel1_IRQHandler,
  DMA1_Channel2_3_IRQHandler,
  DMA1_Channel4_5_IRQHandler,
  ADC1_COMP_IRQHandler, 
  TIM1_BRK_UP_TRG_COM_IRQHandler,
  TIM1_CC_IRQHandler,
  TIM2_IRQHandler,
  TIM3_IRQHandler,
  TIM6_DAC_IRQHandler,
  0,  
  TIM14_IRQHandler,
  TIM15_IRQHandler,
  TIM16_IRQHandler,
  TIM17_IRQHandler,
  I2C1_IRQHandler,
  I2C2_IRQHandler,
  SPI1_IRQHandler,
  SPI2_IRQHandler,
  USART1_IRQHandler,
  USART2_IRQHandler,
  0,
  CEC_IRQHandler,
  0,
  BootRAM          /* @0x108. This is for boot in RAM mode for 
                            STM32F0xx devices. */
};
#pragma GCC diagnostic ignored "-Warray-bounds"
static inline void fillStack (void) {
  register unsigned int *dst, *end;
  // One fill the stack area (test only)
  dst = &_ebss;
  end = &_estack - 0x4;
  while (dst < end)  *dst++ = 0xDEADBEEFU;
}

void Reset_Handler(void) {
  register unsigned int *src, *dst, *end;

  fillStack();
  /* Zero fill the bss section */
  dst = &_sbss;
  end = &_ebss;
  while (dst < end)  *dst++ = 0U;

  /* Copy data section from flash to RAM */
  src = &_sidata;
  dst = &_sdata;
  end = &_edata;
  while (dst < end) *dst++ = *src++;

  SystemInit();
  SystemCoreClockUpdate();          // Potřebné pro USART
  static_init();                    // Zde zavolám globální konstruktory

  main();
  
  for (;;);
}


void Default_Handler (void) {
  asm volatile ("bkpt 1");
}

