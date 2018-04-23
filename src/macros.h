#ifndef MACROS_H
#define MACROS_H

#include "config.h"

#include <Kaleidoscope-Macros.h>

namespace benji {
  namespace macros {
    enum {

    };

    inline void setup()
    {
      Kaleidoscope.use(&Macros);
    }
  }
}

const macro_t *macroAction(uint8_t macroIndex, uint8_t keyState)
{
  switch(macroIndex) {
  }
  return MACRO_NONE;
}
#endif /* MACROS_H */
