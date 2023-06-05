#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C ekran(0x27,16,2);


void setup() {
  ekran.init();
  ekran.backlight();
}

void loop() {
  int analogDeger = analogRead(A0);
  int deger = map(analogDeger, 0, 1023, 0, 4);

  switch (deger){
    
  case 0:
  ekran.clear();
  ekran.setCursor(3, 0);
  ekran.print("Merhaba");
  ekran.setCursor(3, 2);
  ekran.print("Arkadaşlar");
  delay(100);
    break;

  case 1:
  ekran.clear();
  ekran.setCursor(3, 0);
  ekran.print("Arduino dersimize");
  ekran.setCursor(3, 2);
  ekran.print("Hosgeldiniz");
  delay(100);
    break;


  case 2:
  ekran.clear();
  ekran.setCursor(3, 0);
  ekran.print("Ben ");
  ekran.setCursor(3, 2);
  ekran.print("Arduuu");
  delay(100);
    break;
   
    
  }
  
}
