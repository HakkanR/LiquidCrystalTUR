/*
  LiquidCrystalTUR Kütüphanesi - Serial Ekranından giriş

 16x2 LCD ekran üzerinde denenmiştir LiquidCrystalTUR
 kütüphanesi HD44780 sürücülü ekranlarda çalışır.
 Türkçe karakter desteği HD44780 A00 Rom Code üzerine
 tasarlanmıştır.
 Kütüphanenin adım adım düzenlenmesiyle alakalı videoları izlemek için
 http://youtube.com/HakkanR kanalımı ziyaret edebilirsiniz. 

 This sketch displays text sent over the serial port
 (e.g. from the Serial Monitor) on an attached LCD.

 The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe
 modified 7 Nov 2016
 by Arturo Guadalupi
 modified 19 Apr 2021
 by HakkanR ( www.devrelerim.com )
 Added Turkish Char support
 adjustable contrast and backlight level
 downloaded at: http://github.com/HakkanR/LiquidCrytalTUR
 
 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystalSerialDisplay

*/

// include the library code:
#include <LiquidCrystalTUR.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // initialize the serial communications:
  Serial.begin(9600);
}

void loop() {
  // when characters arrive over the serial port...
  if (Serial.available()) {
    // wait a bit for the entire message to arrive
    delay(100);
    // clear the screen
    lcd.clear();
    // read all the available characters
    while (Serial.available() > 0) {
      // display each character to the LCD
      lcd.write(Serial.read());
    }
  }
}
