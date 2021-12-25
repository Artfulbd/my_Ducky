#include "DigiKeyboard.h"

void setup() {}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);
  DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT,KEY_R);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("iexplore http://mysiteimage.jpg");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT,KEY_F);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("a");
  DigiKeyboard.delay(100);
  DigiKeyboard.print("%USERPROFILE%\\mysiteimage.jpg");
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT,KEY_W);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT,41);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("paint");
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT,KEY_O);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("%USERPROFILE%\\mysiteimage.jpg");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT,KEY_F);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("k");
  DigiKeyboard.delay(100);
  DigiKeyboard.print("f");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT,KEY_F);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("x");
}
