#include <SoftwareSerial.h>
SoftwareSerial led(9, 10) ; //rx -tx pinleri
char veri;

void setup() {
  led.begin(9600);
  pinMode(2, OUTPUT);
}

void loop() {
  if (led.available()) {
    veri = led.read();
    delay(10);
    if (veri == '1') {
      digitalWrite(2, HIGH);
    }
    if (veri == '2') {
      digitalWrite(2, LOW);
    }
  }
}
