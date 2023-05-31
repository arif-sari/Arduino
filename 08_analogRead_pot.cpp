// C++ code
//

const int analogGiris = A0;
void setup()
{
  pinMode(A0,INPUT);
}

void loop()
{
  int deger = analogRead(A0);
  Serial.begin(9600);
  Serial.println("Değer:");
  Serial.println(deger);
  delay(1000);

}
