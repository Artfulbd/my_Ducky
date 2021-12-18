#include "DigiKeyboard.h"
int i = 0;
void setup() {
  // don't need to set anything up to use DigiKeyboard
}


void loop() {
  // start cmd
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1500);

  // open chrome
  DigiKeyboard.println("chrome");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  
  DigiKeyboard.println("\t\t\t\t\t\t\t\t\t\t");
  DigiKeyboard.println("nsu");
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  // It's better to use DigiKeyboard.delay() over the regular Arduino delay()
  // if doing keyboard stuff because it keeps talking to the computer to make
  // sure the computer knows the keyboard is alive and connected
  DigiKeyboard.delay(5000);
  
  for(;;);
}
