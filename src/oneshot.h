#ifndef ONESHOT_H
#define ONESHOT_H

#include <Kaleidoscope.h>

#include <Kaleidoscope-OneShot.h>

namespace benji {
  namespace oneshot {
    inline void setup()
    {
      Kaleidoscope.use(&OneShot);

      /* defaults
	 OneShot.double_tap_sticky = true;
	 OneShot.time_out = 2500; // millis
	 OneShot.hold_time_out = 200; // millis
      */
    }
  }
}

#endif /* ONESHOT_H */
