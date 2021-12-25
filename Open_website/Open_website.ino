#include "DigiKeyboard.h"

void setup() {}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT,KEY_F2);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT,44);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT,44);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT,44);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT,KEY_R);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(42);
  DigiKeyboard.sendKeyStroke(42);
  DigiKeyboard.sendKeyStroke(42);
  DigiKeyboard.sendKeyStroke(42);
  DigiKeyboard.sendKeyStroke(42);
  DigiKeyboard.print("http://hilinkz.com/");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
