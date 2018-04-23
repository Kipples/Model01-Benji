// -*- mode: c++ -*-
#include <Kaleidoscope.h>

#include "led.h"
#include "macros.h"
#include "mousekeys.h"
#include "dualuse.h"
#include "oneshot.h"

#include "keymap.h"

void setup()
{
  Serial.begin(9600);

  Kaleidoscope.setup();

  benji::led::setup();
  benji::mousekeys::setup();
  benji::macros::setup();
  benji::dualuse::setup();
  benji::oneshot::setup();

  Layer.defaultLayer(layers::BASE);
}

void loop()
{
  Kaleidoscope.loop();
}
