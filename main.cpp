#include "main.h"

static Usart       ser;
static IO_manip    iom;

static ADC_class   adc;
static DAC_class   dac;
static Decoder     dcd;
static Generator   gen;

int main() {
  PlatformInit();
  iom += ser;        // něco jako attach, jen používá přetížený operátor +=
  iom.init    (gen, dcd);
  dac.attach  (gen);
//gen.attach  (dcd); // test - loopback pro dekodér na úrovni generovaných dat
  adc.attach  (dcd);
  
  while (loop_running) {
    wait ();
  }
  return 0;
}
