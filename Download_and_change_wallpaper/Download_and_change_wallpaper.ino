#include "DigiKeyboard.h"

void setup() {}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(5000);
  DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT,41);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("iexplore http://targetimage.jpg");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(4000);
  DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT,KEY_S);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT,41);
  DigiKeyboard.delay(300);
  
  DigiKeyboard.print("%USERPROFILE%\\Documents\\target.jpg");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(43);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(81);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(81);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(81);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(81);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(81);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(81);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
}
