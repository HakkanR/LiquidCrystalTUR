/*
  LiquidCrystalTUR Kütüphanesi - setCursor

 16x2 LCD ekran üzerinde denenmiştir LiquidCrystalTUR
 kütüphanesi HD44780 sürücülü ekranlarda çalışır.
 Türkçe karakter desteği HD44780 A00 Rom Code üzerine
 tasarlanmıştır.
 Kütüphanenin adım adım düzenlenmesiyle alakalı videoları izlemek için
 http://youtube.com/HakkanR kanalımı ziyaret edebilirsiniz. 


 This sketch prints to all the positions of the LCD using the
 setCursor() method:

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

 http://www.arduino.cc/en/Tutorial/LiquidCrystalSetCursor

*/

// include the library code:
#include <LiquidCrystalTUR.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// these constants won't change.  But you can change the size of
// your LCD using them:
const int numRows = 2;
const int numCols = 16;

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(numCols, numRows);
}

void loop() {
  // loop from ASCII 'a' to ASCII 'z':
  for (int thisLetter = 'a'; thisLetter <= 'z'; thisLetter++) {
    // loop over the columns:
    for (int  thisRow = 0; thisRow < numRows; thisRow++) {
      // loop over the rows:
      for (int thisCol = 0; thisCol < numCols; thisCol++) {
        // set the cursor position:
        lcd.setCursor(thisCol, thisRow);
        // print the letter:
        lcd.write(thisLetter);
        delay(200);
      }
    }
  }
}
