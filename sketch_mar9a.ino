#include "DigiKeyboard.h"
//Additional Boards Manager URLs: https://raw.githubusercontent.com/digistump/arduino-boards-index/master/package_digistump_index.json
void setup() {
  // تاخیر 2 ثانیه تا برنامه مرورگر را باز کنیم
  //delay for openning browser
  DigiKeyboard.delay(2000);

  // ارسال کلید Windows + R برای باز کردن پنجره Run
  //Opening Windows+R Menu
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);

  // ارسال آدرس وبسایت
  //Enter The WebsiteAddress
  DigiKeyboard.print("www.rubikcomputer.com");
  DigiKeyboard.delay(100);

  // ارسال کلید Enter برای باز کردن آدرس در مرورگر
  //Press Enter For Opening Address
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
  //we dont have loop
}
