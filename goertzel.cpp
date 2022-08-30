#include "io_manip.h"
#include "goertzel.h"
// Kraviny
  #define SRED   "\x1B[31;1m"
  #define SGREEN "\x1B[32;1m"
  #define SBLUE  "\x1B[34;1m"
  #define SDEFC  "\x1B[0m"
// pomocná konstanta  
static constexpr double IFSAMP = D_PI / FSAMPL;
/** @brief Výpočet int koeficientů Goertzelova algoritmu.
 * @param freq Vstupní frekvence v Hz
 * @return koeficient, int
 */
static constexpr int calc_coeff (const double freq) {
  return i_round (static_cast<double>(2UL << RSHIFT) * sincos (IFSAMP * freq, false));
}
/** @class ARRAY
 * @brief Prototyp třídy pro statické vytvoření konstantní tabulky int koeficientů Goertzelova algoritmu z tabulky freqs.
 */
template<class T, const int N> class ARRAY {
  T data [N];
  public:
    explicit constexpr ARRAY () noexcept {
      for (int n=0; n<N; n++) data [n] = calc_coeff(freqs[n]);
    }
    const T & operator[] (const int index) const {
      return data [index];
    }
};
// statická instance třídy ARRAY
static const ARRAY<int, TLEN> goertzel_coeffs;
//////////////////////////////////////////////
void Goertzel::calculate (const int16_t data) {
  const real sample (data >> 2);  // TODO : shift podle dat - tady rozsah 12-bit
  real q0 (coeff);
  // Vlastní Goertzelův algoritmus.
  q0  *= q1;
  q0  += sample;
  q0  +=-q2;                            // vlastní výpočet
  q2   = q1;                            // posuv o vzorek
  q1   = q0;                            // (rekurze)
}
int Goertzel::frame (const int16_t * p, const int l) {
  for (int i=0; i<l; i++) {
#ifdef __arm__
    const int16_t sample = p [i] - 2048;
#else
    const int16_t sample = p [i];
#endif
    calculate (sample);
  }
  real rv (-coeff);
  rv  *= q1 * q2;
  rv  += q1 * q1;
  rv  += q2 * q2;
  q1 = 0; q2 = 0;
  return rv.abs(); // výkon by byl sqrt (rv), není nutné počítat, napětí stačí
}
////////////////////////////////////
void Decoder::init (IO_manip & io) {
  m_io = & io;
  for (unsigned n=0; n<TLEN; n++) {
    goertzel[n].init (goertzel_coeffs[n]);
  }
}
int Decoder::send (short * data, const int len) {
  int result [TLEN], maxv = -1, maxi = 0;
  for (unsigned i=0; i<TLEN; i++) {
    Goertzel & g = goertzel [i];
    result [i] = g.frame (data, len);
    if (result[i] > maxv) {
      maxv = result [i]; maxi = i;
    }
  }
  frames_count += 1;
  if ((frames_count > 20) and flag) {
    if (m_io) m_io->Down ("\r\n", 2u);
    // printf(SBLUE " END\n" SDEFC);
    flag = 0; old_detected = 0xD;
  }
  if (maxv < 10) {
    return len;
  }
  if (old_tone != maxi) {
    int & cc = consequences [old_tone];
    // printf("zmena %X -> %X [%d], count=%d\n", old_tone, maxi, cc, frames_count);
    if (cc < 6) {
      // nedetekovano - nedelej nic
    } else if (cc < 10) {
      // detekovano
      if (is_valid (old_tone)) {
        const char * hexdec = "0123456789ABCDEF";
        if (m_io) m_io->Down (hexdec + old_tone, 1u);
        //printf(SRED "%X" SDEFC, old_tone);
        //fflush(stdout);
        frames_count = 0; flag = 1; clear();
      }
    } else {
      // moc dlouhe
      frames_count = 0; clear();
    }
    old_tone = maxi;
  }
  consequences [maxi] += 1;
#if DEBUG
  printf("%3d: ", frames_count);
  for (unsigned i=0; i<TLEN; i++) {
    const char * c = ((int) i == maxi) ? SGREEN : SDEFC;
    printf("%s%6d ", c, (int) result [i]);
  }
  printf(SDEFC " : %d\n", maxi);
#endif
  return len;
}
bool Decoder::is_valid (int & n) {
  if (n < 0) return false;
  if (n == 14) {
    n = old_detected;
    return true;   // E - opakovač
  }
  // TODO: D je použité pro pagery, bohužel ty D-čka vylejzaj ven a ruší to.
  // Nicméně při příjmu je to celkem jedno, je to nutné jen odvysílat
  if ((n > 9)/* and (n != 0xD)*/) return false;
  old_detected = n;
  return true;
}
