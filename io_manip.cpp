#include "io_manip.h"
#include "generator.h"
#include "goertzel.h"

void IO_manip::init (Generator & g, Decoder & s) {
  m_g = & g; m_s = & s;
  g.init (* this);      // zpětné nastavení this pro případné použití v třídě Generator
  s.init (* this);      // zpětné nastavení this pro případné použití v třídě GoertzelSet
}
uint32_t IO_manip::Up (const char * data, const uint32_t len) {
  if (m_g) return m_g->setData (data, len);
  else     return len;
}
