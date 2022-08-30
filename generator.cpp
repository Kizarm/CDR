#include "io_manip.h"
#include "generator.h"
#include "cmath.h"
#include "system.h"

static constexpr unsigned calc_tones (const double tone) {
  return static_cast<unsigned>((double)(1ULL << 32) * tone / FSAMPL);
}
/** @class TONES
 * @brief Prototyp třídy pro statické vytvoření konstantní tabulky unsigned DDS inkrementů z tabulky freqs.
 */
template<class T, const int N> class TONES {
  T data [N];
  public:
    explicit constexpr TONES () noexcept {
      for (int n=0; n<N; n++) data [n] = calc_tones(freqs[n]);
    }
    const T & operator[] (const int index) const {
      return data [index];
    }
};
static constexpr double   AMPL = 2000.0;
static constexpr unsigned ULEN = 1u << 8;
static constexpr int  TONE_LEN = PERIOD * 7;
static constexpr int16_t i16_sin (const int x) {
  const double a = (double (x) * D_PI) / double (ULEN);
  const double s = AMPL * sincos (a, true);
  return i_round (s);
}
static const TABLE<int16_t,  ULEN> sin_tab (i16_sin);
static const TONES<unsigned, TLEN> tones_table;

void Generator::init (IO_manip & io) {
  m_io = & io;
}
unsigned Generator::setData (const char * str, const unsigned int len) {
  // Zápis vysílané sekvence do fronty
  for (unsigned n=0; n<len; n++) ring.Write (str[n]);
  return len;
}
int Generator::send (short * data, const int len) {
  for (int n=0; n<len; n++) {
    if (counter++ >= TONE_LEN) {
      change ();
    }
#ifdef __arm__
    data [n] = sin_tab [(phase >> 24) & 0xFF] + 2048;   // DAC s offsetem
#else
    data [n] = sin_tab [(phase >> 24) & 0xFF];
#endif
    phase += increment;
  }
  return AbstractChain::send (data, len);
}
void Generator::change() {
  counter = 0;
  char  c;
  if (!ring.Read (c)) { // výběr z fronty, pokud tam něco je
    increment = 0u;     // není - bude ticho
    phase     = 0u;
    return;
  }
  if (c == '\n') {
  /* V reálu squelch vygeneruje na konci šum, který sekvenci
    * korektně ukončí - pro detekci je třeba změna tónu, třeba jen krátká.
    * */
    increment = tones_table [11];
    old_tone  = 16u;
  } else {
    int i = 0;
    if (c == 'D' or c == 'd') {
      i = 13; // pro pager
    } else {
      i = c - '0';
      if (i < 0) i = 0;
      if (i > 9) i = 9;
    }
    if ((int) old_tone == i) i = 14;
    old_tone  = i;
    increment = tones_table [i];
  }
#if DEBUG
  printf ("i=%d, increment=0x%08X, tone=%f (%c)\n",
          i, increment, freqs [i], c);
#endif
}
