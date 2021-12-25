#include "DigiKeyboard.h"

void setup() {}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT,KEY_R);
  DigiKeyboard.delay(300);
  DigiKeyboard.print("notepad");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(300);
  DigiKeyboard.print("You forgot to lock your PC.");
  DigiKeyboard.delay(3000);
  // Lock the PC
  DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT,KEY_L);
}
