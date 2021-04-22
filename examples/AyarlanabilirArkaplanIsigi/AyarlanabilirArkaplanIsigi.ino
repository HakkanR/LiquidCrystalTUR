// Kütüphaneyi dahil edelim
#include <LiquidCrystalTUR.h>

/*const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
 *LiquidCrystal lcd(rs, en, d4, d5, d6, d7); 
 *
 * Kontrastı ve arkaplan ışığını kod tarafında kontrol etmek için
 * LiquidCrystal lcd(rs, en, bl, cr, d4, d5, d6, d7); kullanın
 * 
 * bu durumda noDisplay() fonksiyonu ekran ışığını da kapatır
 * display() fonksiyonuyla da arkaplan ışığı için belirlediğiniz seviyede
 * yeniden açar, ekran ışığı için maksimum pwm seviyesi 30 olarak belirlenmiştir
 * direnç kullanmadan kullanabilirsiniz.
 * Kütüphanenin adım adım düzenlenmesiyle alakalı videoları izlemek için
 * http://youtube.com/HakkanR  kanalımı ziyaret edebilirsiniz.
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
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
 * 
 */
const int bl = 10, cr = 9, rs = 12, en = 11,d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, bl, cr, d4, d5, d6, d7);

void setup() {
 
  Serial.begin(115200);
  lcd.begin(16, 2);
  lcd.setCursor(0, 1);
  lcd.print("Türkçe Yazın");
  lcd.setBacklight(20);
  lcd.contrastLevel(91);
  delay(2000);
  lcd.noDisplay();
  delay(2000);
  lcd.display();
}

void loop() {

}
