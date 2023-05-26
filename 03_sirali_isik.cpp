const int time =200;

void setup(){

  for (int ledPin=2; ledPin<12; ledPin++ )
  {
    pinMode(ledPin,OUTPUT);
  }
} 

void loop(){
  for(int ledPin=2; ledPin<12; ledPin++)
  {
  	digitalWrite(ledPin,HIGH);
    delay (time);
    digitalWrite(ledPin,LOW);
   }
  for(int ledPin=11; ledPin>1; ledPin--)
  {
    digitalWrite(ledPin,HIGH);
    delay(time);
    digitalWrite(ledPin,LOW);
  }  
}
