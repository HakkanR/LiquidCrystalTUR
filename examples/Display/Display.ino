/*
  LiquidCrystalTUR Kütüphanesi - display() ve noDisplay()

 16x2 LCD ekran üzerinde denenmiştir LiquidCrystalTUR
 kütüphanesi HD44780 sürücülü ekranlarda çalışır.
 Türkçe karakter desteği HD44780 A00 Rom Code üzerine
 tasarlanmıştır.
 Kütüphanenin adım adım düzenlenmesiyle alakalı videoları izlemek için
 http://youtube.com/HakkanR kanalımı ziyaret edebilirsiniz. 

 Bu skeç ekrana "Türkçe Yazın" yazar, noDisplay() fonksiyonuyla
 ekranı ve ekran ışıklarını kapatır, display() fonksiyonuyla
 ekranı ve daha önce belirlediyseniz, belirlediğiniz seviyede,
 belirlemediyseniz 20 seviyesinde ışıkları açar.
 contrastLevel(91) ile ekran kontratını 91 seviyeye ayarlar
 setBacklight(20) fonksiyonu ekranışığı parlaklığını 20 seviyede ayarlar
 bu seviye 1 ile 30 arasında olabilir. 

 The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
  * - Ekran ışığını ve kontrastı kod tarafında kontrol etmek için
 * LCD (A) pinini digital pin 10 'a
 * LCD (VO) pinini digital pin 9 'a bağlayın
 * -LCD (A) bl, ya da LCD(VO) pinleri için farklı bir bağlantı belirleyecekseniz
 * -PWM pinlerinden seçtiğinize emin olun. ~ işaretleri pinler kullanılabilir.
 * const int bl = 10, cr = 9, rs = 12, en = 11,d4 = 5, d5 = 4, d6 = 3, d7 = 2; //değişken setini ve
 * LiquidCrystal lcd(rs, en, bl, cr, d4, d5, d6, d7); //başlatıcısını kullanın.
 * - Ekran ışığını ve kontrasto kod tarafında kontrol etmeyecekseniz
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

 http://www.arduino.cc/en/Tutorial/LiquidCrystalDisplay

*/

// include the library code:
#include <LiquidCrystalTUR.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int bl = 10, cr = 9, rs = 12, en = 11,d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, bl, cr, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Türkçe Yazın");
  contrastLevel(91);
  setBacklight(20);
}

void loop() {
  // Turn off the display:
  lcd.noDisplay();
  delay(500);
  // Turn on the display:
  lcd.display();
  delay(500);
}
