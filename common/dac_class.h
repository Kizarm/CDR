#ifndef DAC_CLASS_H
#define DAC_CLASS_H
#include <stdint.h>
#include "../basics.h"
#include "chain.h"

/** @class DAC_class
 * @brief DA převodník
 */
class DAC_class : public AbstractChain {
  int16_t m_buffer [PERIOD << 1];
  int16_t * const ptr_l, * const ptr_h;
  int16_t * current;
  public:
    explicit DAC_class() noexcept;
#ifdef __arm__
    void irq (void);
#else
    int16_t * get_buf ();
    int outs (const short * data, const int len);
    virtual ~DAC_class();
#endif
};
#endif // DAC_CLASS_H
