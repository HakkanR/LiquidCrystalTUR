= Arduino için Türkçe Liquid Crystal Kütüphanesi =

Bu kütüphane Arduino LiquidCrystal kütüphanesi düzenlenerek hazırlanmıştır.
orijinal hali : http://www.arduino.cc/en/Reference/LiquidCrystal

düzenlemenin tüm adımları youtube kanalımda mevcuttur
http://youtube.com/HakkanR

16x2 karakter LCD 'lerin HD44780 chipsetli ve üzerine A00 Romu yüklü 
Charmap'inde Türkçe karakter bulunmayan sürümüne özgüdür.

Ekranın 8 adet olan custom karakter alanınının 6 sı kullanılmıştır.
Diğer iki tanesi boşta ve kullanılabilir durumdadır. İlk 6 tanenin skeç
tarafında createChar() fonksiyonu kullanılarak eklenmesi engellenmiştir.
karakter eklemeniz gerekirse 6 ve 7. indisleri kullanabilirsiniz.

Dilerseniz LCD nin arkaplan ışığını ve kontrast seviyesini kod tarafında 
kontrol edebilirsiniz:
* - Ekran ışığını ve kontrastı kod tarafında kontrol etmek için
 * LCD (A) pinini digital pin 10 'a
 * LCD (VO) pinini digital pin 9 'a bağlayın
 * -LCD (A) bl, ya da LCD(VO) pinleri için farklı bir bağlantı belirleyecekseniz
 * -PWM pinlerinden seçtiğinize emin olun. ~ işaretleri pinler kullanılabilir.
 * const int bl = 10, cr = 9, rs = 12, en = 11,d4 = 5, d5 = 4, d6 = 3, d7 = 2;
 değişken setini ve
 * LiquidCrystal lcd(rs, en, bl, cr, d4, d5, d6, d7); 
 başlatıcısını kullanın.
 
  lcd.setBacklight(20); // fonksiyonu arkaplan ışığını 20 seviyesine ayarlar
  bu aralık 1 ile 30 arasında olabilir.
 
 lcd.contrastLevel(91);// fonksiyonu kontrast seviyesini ayarlar, bu aralık  0 ile 
255 arasında olabilir.

Bağlantıyı ve başlatıcıyı(constructor) bu şekilde konfigure ettiğinizde
 * noDisplay() fonksiyonu ekran ışığını da kapatır
 * display() fonksiyonuyla da arkaplan ışığı için belirlediğiniz seviyede
 * yeniden açar, ekran ışığı için maksimum pwm seviyesi 30 olarak belirlenmiştir
 * direnç kullanmadan kullanabilirsiniz.
