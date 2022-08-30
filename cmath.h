#ifndef _CMATH_H
#define _CMATH_H
static constexpr double dabs (const double a) { return a < 0.0 ? -a : +a; }
static constexpr int i_round (const double a) { return a < 0.0 ? int (a - 0.5) : int (a + 0.5); }
static constexpr double D_PI = 2.0 * 3.14159265358979323846;
/**
 * @brief sinus nebo kosinus
 * @param x úhel v radiánech
 * @param even počítá sinus, pokud even=true i kosinus, pokud even=false
 * @return double výsledek
 */
static constexpr double sincos (const double x, const bool even) {
  double result (0.0), element(1.0), divider(0.0);
  if (even) { element *= x; divider += 1.0; }
  constexpr double eps = 1.0e-9;      // maximální chyba výpočtu
  const double aa = - (x * x);
  for (;;) {
    result  += element;
    if (dabs  (element) < eps) break;
    divider += 1.0;
    double fact = divider;
    divider += 1.0;
    fact    *= divider;
    element *= aa / fact;
  }
  return result;
}
static constexpr int RSHIFT = 16;
#ifdef __arm__
/** @brief násobení v pevné řádové čárce
 * @param l 1. operand
 * @param r 2. operand
 * @return const int32_t výsledek
 */
static inline const int32_t fixed_multiply (const int32_t l, const int32_t r) {
  return (l * r) >> RSHIFT;
}
#else
//extern unsigned overflow_count;
static inline const int32_t fixed_multiply (const int32_t l, const int32_t r) {
  int64_t rv = (int64_t) l * (int64_t) r;
  // const int64_t xx = rv > 0 ? rv : -rv;;
  // if (xx >> 32) overflow_count += 1u;
  return rv >> RSHIFT;
}
#endif

/** @class real
 *  @brief Celocíselná aritmetika.
 * Celé je to napsáno tak, aby kód využíval co nejméně operátorů,
 * kompatibilních s reálnou aritmetikou. Proto je to dost divné.
 * */
class real {
  int32_t value;  //!< data holder
  public:
    constexpr explicit real (const int n)    noexcept : value (n)       {};
    constexpr          real (const real & r) noexcept : value (r.value) {};
    operator  int ()            const { return value;          }
    constexpr real operator- () const { return real (-value);  }
    real & operator*= (const real & r) {
      value = fixed_multiply (value, r.value);
      return * this;
    }
    const real operator* (const real & r) const {
      const int32_t rv = fixed_multiply (value, r.value);
      return real  (rv);
    }
    real & operator+= (const real & r) { value += r.value; return * this; }
    real & operator=  (const real & r) { value  = r.value; return * this; }
    real & operator=  (const int n)    { value  = n;       return * this; }
    int abs () const { return value > 0 ? value : -value; }
};
/** @class TABLE
 *  @brief Konstantní look-up tabulka
 * 
 * Pokud se použije pro překlad clang, pak je možné předhodit
 * konstruktoru tt. třídy constexpr funkci, která inicializuje
 * všechna data a lze tak vytvořit konstantní pole, umístěné
 * v sekci .rodata. Není tak nutné používat k vytvoření tabulky
 * externí nástroj.
 * */
template<class T, const int N> class TABLE {
  T data [N];
  public:
    /** @brief Konstruktor.
     *  @param f Ukazatel na constexpr funkci, která pak vytvoří tabulku,
     *           funkce nemusí být příliš efektivní, spouští se jen při překladu.
     *           Bohužel většinou nelze použít funkce z cmath, nejsou constexpr.
     *           V C++17 lze používat i lambda výraz (nebo callable objekt).
     * */
    template<typename F> explicit constexpr TABLE (F f) noexcept {
      for (int n=0; n<N; n++) data [n] = f (n);
    }
    /** operator[] vrátí konstantní odkaz na prvek pole, protože se předpokládá,
     *  že instance této třídy bude jako taková též konstantní
     */
    const T & operator[] (const int index) const {
      return data [index];
    }
    /** @class iterator
     *  @brief range-based for () */
    class iterator {
      const T * ptr;
      public:
        iterator(const T * _ptr) : ptr (_ptr) {}
        iterator  operator++ ()                             { ++ptr;   return * this;    }
        bool      operator!= (const iterator & other) const { return   ptr != other.ptr; }
        const T & operator*  ()                       const { return * ptr;              }
    };
    iterator begin () const { return iterator (data    ); }
    iterator end   () const { return iterator (data + N); }
  protected:
};
#endif // _CMATH_H
