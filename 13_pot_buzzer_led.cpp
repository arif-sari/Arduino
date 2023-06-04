// C++ code
//

const int ledPin =10;
const int buzzerPin =11;
const int potPin=A0; //pot yerine sensor koymak ikazı anlamlı hale getirir
void setup()
{
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(A0,INPUT);
}

void loop()
{
  int deger= analogRead(A0);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
delay(deger);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  delay(deger);
}
