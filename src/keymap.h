#include <Kaleidoscope.h>
#include <Kaleidoscope-MouseKeys.h>
#include <Kaleidoscope-LEDControl.h>
#include <Kaleidoscope-Macros.h>
#include <Kaleidoscope-DualUse.h>
#include <Kaleidoscope-OneShot.h>

#include "layers.h"
#include "macros.h"


#define Key_AT LSHIFT(Key_2)
#define Key_LT LSHIFT(Key_Comma)
#define Key_GT LSHIFT(Key_Period)
#define Key_Add LSHIFT(Key_Equals)
#define Key_Exclamation LSHIFT(Key_1)
#define Key_Caret LSHIFT(Key_6)
#define Key_Ampersand LSHIFT(Key_7)
#define Key_Hash LSHIFT(Key_3)
#define Key_Dollar LSHIFT(Key_4)
#define Key_Percent LSHIFT(Key_5)
#define Key_Tilde LSHIFT(Key_Backtick)

#define Key_CV LGUI(Key_V)
#define Key_CC LGUI(Key_C)
#define Key_CZ LGUI(Key_Z)
#define Key_CBacktick LGUI(Key_Backtick)

#define Key_CLB LGUI(Key_LeftBracket)
#define Key_CRB LGUI(Key_RightBracket)

#define Key_CE LGUI(Key_E)
#define Key_CA LGUI(Key_A)
#define Key_CO LGUI(Key_O)
#define Key_CW LGUI(Key_W)
#define Key_CK LGUI(Key_K)
#define Key_CX LGUI(Key_X)
#define Key_CF LGUI(Key_F)
#define Key_CL LGUI(Key_L)
#define Key_CT LGUI(Key_T)
#define Key_CS LGUI(Key_S)
#define Key_CR LGUI(Key_R)

#define Key_SCF LSHIFT(Key_CF)
#define Key_SCO LSHIFT(Key_CO)
#define Key_SCLB LSHIFT(Key_CLB)
#define Key_SCRB LSHIFT(Key_CRB)

#define Key_ACLArrow LALT(LGUI(Key_LeftArrow)))
#define Key_ACRArrow LALT(LGUI(Key_RightArrow)))

#define Key_SCUArrow LSHIFT(LCTRL(Key_UpArrow))
#define Key_SCDArrow LSHIFT(LCTRL(Key_DownArrow))

#define Key_CALB LALT(Key_CLB)
#define Key_CARB LALT(Key_CRB)
  
namespace layers = benji::layers;
namespace macros = benji::macros;

const Key keymaps[][ROWS][COLS] PROGMEM = {
  [layers::BASE] = KEYMAP_STACKED
  (Key_Backtick, Key_LeftCurlyBracket, Key_LeftBracket, Key_LeftParen, Key_AT, Key_LT, Key_CV,
   Key_Tab, Key_Semicolon, Key_Comma, Key_Period, Key_P, Key_Y, Key_CC,
   Key_LeftShift, LT(layers::ARROWS, A), Key_O, LT(layers::SHORTCUTS, E), LT(layers::NUMBER, U), Key_I,
   Key_UpArrow, Key_Quote, Key_Q, Key_J, Key_K, Key_X, Key_LeftGui,
   Key_LeftControl, Key_LeftAlt, Key_Backspace, Key_Escape,
   OSL(layers::NUMBER),

   Key_CZ, Key_GT, Key_Add, Key_RightParen, Key_RightBracket, Key_RightCurlyBracket, Key_Exclamation,
   Key_RightAlt, Key_F, Key_G, Key_C, Key_R, Key_L, Key_Backslash,
   Key_D, LT(layers::NUMBER, H), LT(layers::SHORTCUTS, T), LT(layers::ARROWS, N), Key_S, Key_LeftShift,
   Key_LeftControl, Key_B, Key_M, Key_W, Key_V, Key_Z, Key_Equals,
   OSL(layers::ARROWS), Key_LeftGui, Key_Enter, Key_Spacebar,
   OSL(layers::SHORTCUTS)),
  
  [layers::NUMBER] = KEYMAP_STACKED
  (___, Key_1, Key_2, Key_3, Key_4, Key_5, ___,
   ___, Key_Caret, Key_Ampersand, Key_Hash, Key_Dollar, Key_Add, ___,
   ___, Key_Percent, Key_Dollar, Key_LeftParen, ___, Key_Equals,
   ___, Key_Pipe, Key_Tilde, Key_LeftBracket, Key_RightBracket, Key_Tilde, ___,
   ___, ___, ___, ___,
   ___,

   ___, ___, Key_7, Key_8, Key_9, Key_0, ___,
   ___, ___, Key_7, Key_8, Key_9, Key_0, ___,
   Key_0, ___, Key_5, Key_6, Key_Period, ___,
   ___, Key_Backtick, Key_1, Key_2, Key_3, Key_4, ___,
   ___, ___, ___, ___,
   ___),
  
  [layers::SHORTCUTS] = KEYMAP_STACKED
  (Key_CBacktick, ___, ___, ___, ___, ___, ___,
   ___, Key_CLB, Key_CE, Key_CRB, ___, Key_CV, ___,
   ___, Key_CA, Key_CO, ___, ___, Key_CC,
   Key_Home, Key_End, Key_CW, ___, Key_CK, Key_CX, ___,
   ___, ___, ___, ___,
   ___,

   ___, ___, ___, ___, ___, ___, Consumer_VolumeIncrement,
   ___, Key_CF, Key_SCF, LCTRL(Key_V), LALT(Key_F11), Key_CL, Consumer_VolumeDecrement,
   Key_SCO, ___, ___, Key_CT, Key_CS, Key_F15,
   ___, LCTRL(Key_A), LCTRL(Key_E), Key_LShift, ___, Key_LEDEffectNext, Key_F14,
   ___, ___, ___, ___,
   ___),
  
  [layers::ARROWS] = KEYMAP_STACKED
  (___, ___, ___, ___, ___, ___, ___,
   ___, Key_CLB, Key_SCLB, Key_UpArrow, Key_SCRB, Key_CRB, ___,
   ___, ___, Key_LeftArrow, Key_DownArrow, Key_RightArrow, ___,
   ___, ___, Key_CALB, Key_CE, Key_CARB, ___, ___,
   ___, ___, ___, ___,
   ___,

   ___, ___, ___, ___, ___, ___, Consumer_VolumeIncrement,
   ___, Key_SCUArrow, Key_Home, Key_End, ___, ___, Consumer_VolumeDecrement,
   Key_SCDArrow, Key_CALB, Key_CARB, ___, ___, Key_F15,
   ___, ___, Consumer_AC_Back, Consumer_AC_Forward, Key_CR, Key_LEDEffectNext, Key_F14,
   ___, ___, ___, ___,
   ___)
  
};
