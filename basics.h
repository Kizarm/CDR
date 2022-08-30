#ifndef _BASICS_H_
#define _BASICS_H_
typedef __SIZE_TYPE__ size_t;
#ifdef __arm__
#define printf(...)
 // jediná externí funkce, která je zde (možná) použita
 extern "C" size_t strlen(const char *s);
#else
 #include <stdio.h>
 #include <string.h>
#endif
// Zjištění počtu prvků statického pole.
template<class T, size_t N>constexpr size_t array_size (T (&) [N]) { return N; }

static constexpr double FSAMPL = 8000.0;  // Hz
static constexpr int    PERIOD = 80;      // 80 vzorků je 10 ms

// ZVEI 1
static constexpr double freqs [] = {
  2400.0, 1060.0, 1160.0, 1270.0,
  1400.0, 1530.0, 1670.0, 1830.0,
  2000.0, 2200.0, 2800.0,  810.0,
   970.0,  885.0, 2600.0,  680.0,
};
static constexpr size_t TLEN = array_size(freqs);
static constexpr const char * alsa_dev_name = "default";

#endif // _BASICS_H_
