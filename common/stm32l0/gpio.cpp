#include "stm32f05x.h"
#include "gpio.h"

static const uint32_t TRCC_AHBENR_GPIOAEN = 0x00020000u;        /*!< GPIOA clock enable */
static const uint32_t TRCC_AHBENR_GPIOBEN = 0x00040000u;        /*!< GPIOB clock enable */
static const uint32_t TRCC_AHBENR_GPIOCEN = 0x00080000u;        /*!< GPIOC clock enable */
static const uint32_t TRCC_AHBENR_GPIODEN = 0x00100000u;        /*!< GPIOD clock enable */
static const uint32_t TRCC_AHBENR_GPIOFEN = 0x00400000u;        /*!< GPIOF clock enable */

static GPIO_Type * const PGPIOA = reinterpret_cast<GPIO_Type * const> (0x48000000u); /*!< General-purpose I/Os */
static GPIO_Type * const PGPIOB = reinterpret_cast<GPIO_Type * const> (0x48000400u); /*!< General-purpose I/Os */
static GPIO_Type * const PGPIOC = reinterpret_cast<GPIO_Type * const> (0x48000800u); /*!< General-purpose I/Os */
static GPIO_Type * const PGPIOD = reinterpret_cast<GPIO_Type * const> (0x48000C00u); /*!< General-purpose I/Os */
static GPIO_Type * const PGPIOF = reinterpret_cast<GPIO_Type * const> (0x48001400u); /*!< General-purpose I/Os */

// Tabulka 40 bytu ve flash, kód to zkrátí i zrychlí.
static const GpioAssocPort cPortTab[] = {
  {PGPIOA, TRCC_AHBENR_GPIOAEN},
  {PGPIOB, TRCC_AHBENR_GPIOBEN},
  {PGPIOC, TRCC_AHBENR_GPIOCEN},
  {PGPIOD, TRCC_AHBENR_GPIODEN},
  {PGPIOF, TRCC_AHBENR_GPIOFEN},
};

GpioClass::GpioClass (GpioPortNum const port, const uint32_t no, const GPIOMode_TypeDef type) :
  io(cPortTab[port].portAdr), pos(1UL << no), num(no) {
  // Povol hodiny
  RCC.AHBENR.R |= cPortTab[port].clkMask;
  // A nastav pin (pořadí dle ST knihovny).
  setSpeed (GPIO_Speed_Level_3);
  setOType (GPIO_OType_PP);
  setMode  (type);
  setPuPd  (GPIO_PuPd_NOPULL);
}


