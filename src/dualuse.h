#ifndef DUALUSE_H
#define DUALUSE_H

#include <Kaleidoscope.h>
#include <Kaleidoscope-DualUse.h>

namespace benji {
  namespace dualuse {
    inline void setup()
    {
      Kaleidoscope.use(&DualUse);
      
      /* defaults
      DualUse.time_out = 1000;
      */
    }
  }
}

#endif /* DUALUSE_H */


