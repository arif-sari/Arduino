const int buton = 6;
int sayac = 0;
int butonDurum = 0;
char gelenVeri = 0; /* gelen verinin kaydedileceği değişken */

void setup() {
  // put your setup code here, to run once:
  pinMode(6, INPUT);
    Serial.begin(9600);
}

void loop() {

  if (Serial.available() > 0) { /* bilgisayardan veri gelmesini bekliyoruz */
   gelenVeri = Serial.read(); /* bilgisayardan gelen karakteri oku */
   Serial.print("gelen veri: ");
   Serial.println(gelenVeri); /* bilgisayardan gelen veriyi bilgisayara geri yolluyoruz */
   }
  // put your main code here, to run repeatedly:
  butonDurum = digitalRead(6);
  if (butonDurum == HIGH) {
    delay(10);
    sayac++;
    Serial.print("Butona ");
    Serial.print(sayac);
    Serial.println(" defa basildi");
    while (butonDurum == HIGH) {
      butonDurum = digitalRead(6);
    }
    delay(10);
  }
}
