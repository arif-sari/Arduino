const int ledPin = 9;
const int buttonPin= 10;
const int buttonPin2 =11;

void setup()
{
 pinMode(9,OUTPUT);
 pinMode(10,INPUT);
 pinMode(11,INPUT);
  
  
}

void loop(){
int deger= digitalRead(10);
int deger2=digitalRead(11);  
if(deger==HIGH){
  digitalWrite(9,HIGH);
}else if(deger2==HIGH);{
  digitalWrite(9,LOW);
}
}
