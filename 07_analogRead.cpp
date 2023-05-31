// C++ code
//
const int analogGiris=A0;
void setup()
{
 pinMode(analogGiris,A0);
 Serial.begin(9600);
}

void loop()
{
 int deger= analogRead(analogGiris);
 Serial.println("deger");
  Serial.println(deger);
}
  
