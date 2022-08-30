#ifndef _COMMON_H
#define _COMMON_H

#include <stdint.h>
#include "irq.h"

#ifndef __IO
#define __IO volatile
#endif // __IO

#define PACKSTRUCT __attribute__((packed))

typedef enum {
  RESET = 0, SET
} ONEBIT;

#endif // _COMMON_H
