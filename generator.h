#ifndef GENERATOR_H
#define GENERATOR_H
#include <stdint.h>
#include "basics.h"
#include "chain.h"
#include "fifo.h"
class IO_manip;
/** @class Generator
 * @brief Ve své podstatě DDS.
 * 
 * Generuje harmonický signál.
 */
class Generator : public AbstractChain {
  FIFO<char, 64> ring;
  IO_manip     * m_io;
  unsigned phase, increment, counter, old_tone;
  public:
    /** @brief Konstruktor
     */
    explicit constexpr Generator () noexcept : AbstractChain(), ring(), m_io (nullptr),
    phase(0), increment(0), counter(0), old_tone(16u) {};
    /** @brief Inicializace
     * @param io nadřazená třída, ze které je to v zásadě voláno (nechci čarovat s friend)
     */
    void     init     (IO_manip & io);
    /** @brief Nastavení vstupního řetězce jako zdroj tónů.
     * Opakovač E se vkládá automaticky (stejně tak v dekodéru odstraňuje)
     * @param str ASCII řetězec - povolené znaky jsou 0-9,[CR],[LF]
     * @param len jeho délka
     * @return skutečně zpracováno
     */
    unsigned setData  (const char * str, const unsigned len);
    /** @brief přetížení send()
     * @param data ukazatel na data
     * @param len  a jejich délka
     * @return skutečně zpracováno
     */
    int      send     (short * data,     const int      len) override;
  protected:
    void change   ();
};
#endif // GENERATOR_H
