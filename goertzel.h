#ifndef GOERTZEL_H
#define GOERTZEL_H
#include <stdint.h>
#include "basics.h"
#include "cmath.h"
#include "chain.h"
/** @class Goertzel
 * @brief Goertzelův algoritmus
 */
class Goertzel {
  real coeff;       //!< koeficient
  real q1,q2;
  public:
    /** @brief Konstruktor
     */
    explicit constexpr Goertzel () noexcept : coeff(0),q1(0),q2(0) {};
    /** @brief Inicializace koeficientu
     * se provádí z tabulky, která je počítána za překladu.
     * Není to v konstruktoru kvůli zapouzdření více instancí této třídy do třídy Decoder.
     * @param n koeficient vzatý z konstantní tabulky
     */
    void init  (const int n) {
      coeff = n;
    }
    /** @brief Vyhodnocení celého rámce
     * @param p ukazatel na data rámce
     * @param l jeho délka
     * @return kvadrát hodnoty příslušné frekvence
     */
    int  frame (const int16_t * p, const int l);
  protected:
    /** @brief Vlastní algoritmus.
     * @param x jeden vzorek
     */
    void calculate (const int16_t x);
};
static const int CLEN = 16;
class IO_manip;

/** @class Decoder
 * @brief Dekodér tónové volby.
 * Ve své podstatě kontejner na Goertzel plus potřebné vyhodnocení rámce.
 */
class Decoder : public AbstractChain {
  IO_manip * m_io;
  int frames_count, old_tone, old_detected, flag;
  Goertzel goertzel [TLEN];
  int  consequences [CLEN];
  public:
    /** @brief Konstruktor
     */
    explicit constexpr Decoder () noexcept : AbstractChain(), m_io(nullptr),
    frames_count(0), old_tone(0), old_detected(0), flag(0), consequences{0} {}
    /** @brief Inicializace
     * @param io nadřazená třída, ze které je to v zásadě voláno (nechci čarovat s friend)
     */
    void init   (IO_manip & io);
    /** @brief přetížení send()
     * Dekódování používá změnu frekvence tónu - nalezne ve frame
     * tón s největší intenzitou, inkrementuje v consequences[]
     * příslušnou hodnotu a při změně vyhodnotí validitu na základě
     * předchozího počtu konsekvencí. Nejde to pomocí nějaké trigger
     * hodnoty, změny amplitudy jsou velké, využití změn je efektivnější.
     * @param data ukazatel na data
     * @param len  a jejich délka
     * @return skutečně zpracováno
     */
    int  send   (short * data, const int len) override;
  protected:
    void clear  () {
      for (int n=0; n<CLEN; n++) consequences [n] = 0;
    }
    bool is_valid (int & n);
};
#endif // GOERTZEL_H
