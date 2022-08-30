#ifndef IO_MANIP_H
#define IO_MANIP_H
#include "baselayer.h"
/** @class IO_manip
 * @brief Ve své postatě jen kontejner pro spolupráci s BaseLayer.
 */
class Generator;
class Decoder;
class IO_manip : public BaseLayer {
  Generator* m_g;
  Decoder  * m_s;
  public:
    /** @brief Konstruktor
     */
    explicit constexpr IO_manip () noexcept : m_g (nullptr), m_s(nullptr) {};
    /** @brief Inicializace volá inicializaci podřízených tříd. 
     * @param g odkaz na Generator
     * @param s odkaz na Decoder
     */
    void     init (Generator & g, Decoder & s);
    /** @brief Přetížení
     * @param data ukazatel na data
     * @param len  jejich délka
     * @return skutečně zpracováno
     */
    uint32_t Up   (const char * data, const uint32_t len) override;
};
#endif // IO_MANIP_H
