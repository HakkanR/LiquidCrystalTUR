/*
  LiquidCrystalTUR Kütüphanesi - scrollDisplayLeft() ve scrollDisplayRight()

 16x2 LCD ekran üzerinde denenmiştir LiquidCrystalTUR
 kütüphanesi HD44780 sürücülü ekranlarda çalışır.
 Türkçe karakter desteği HD44780 A00 Rom Code üzerine
 tasarlanmıştır.
 Kütüphanenin adım adım düzenlenmesiyle alakalı videoları izlemek için
 http://youtube.com/HakkanR kanalımı ziyaret edebilirsiniz. 

 This sketch prints "Hello World!" to the LCD and uses the
 scrollDisplayLeft() and scrollDisplayRight() methods to scroll
 the text.

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
 http://www.arduino.cc/en/Tutorial/LiquidCrystalHelloWorld
 
 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystalScroll

*/

// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
  delay(1000);
}

void loop() {
  // scroll 13 positions (string length) to the left
  // to move it offscreen left:
  for (int positionCounter = 0; positionCounter < 13; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(150);
  }

  // scroll 29 positions (string length + display length) to the right
  // to move it offscreen right:
  for (int positionCounter = 0; positionCounter < 29; positionCounter++) {
    // scroll one position right:
    lcd.scrollDisplayRight();
    // wait a bit:
    delay(150);
  }

  // scroll 16 positions (display length + string length) to the left
  // to move it back to center:
  for (int positionCounter = 0; positionCounter < 16; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(150);
  }

  // delay at the end of the full loop:
  delay(1000);

}
