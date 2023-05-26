const int red=7;
const int blue = 6;
const int green =5;
const int time=1000;

void setup(){
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
  

}

void loop(){
  
  digitalWrite(7,HIGH);
  delay(time);
  
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH);
  delay(time);
  
  digitalWrite(6,LOW);
  digitalWrite(5,HIGH);
  delay(time);
  digitalWrite(5,LOW);

}
