// C++ code
//
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int LDRDeger= analogRead(A0);
  Serial.println("Isik degeri:");
  Serial.println(LDRDeger);
  

}
