#ifndef _CHAIN_H
#define _CHAIN_H

/** @class AbstractChain
 * @brief Abstakce pro přenos audio dat.
 */
class AbstractChain {
  AbstractChain * next;
  public:
    /** @brief Konstruktor
     */
    explicit constexpr AbstractChain () noexcept : next (nullptr) {}
    /** @brief Nastavení dalšího členu v řetězci.
     * @param p dalšího člen v řetězci
     */
    void attach (AbstractChain & p) {
      next = & p;
    }
    /** @brief Přenos dat
     * Data nejsou konstantní, lze sem i zapisovat.
     * Používá to Generátor, zapíše generovaná data, která pak použije DAC
     * @param data ukazatel na data
     * @param len  jejich délka
     * @return skutečně zpracováno
     */
    virtual int send (short * data, const int len) {
      if (next) return next->send (data, len);
      return 0;
    }
};

#endif // _CHAIN_H
