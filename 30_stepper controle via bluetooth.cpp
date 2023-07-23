int step_pin_1 = 8; 
int step_pin_2 = 9; 
int step_pin_3 = 10; 
int step_pin_4 = 11;

float delay_time;
int value_bluetooth = 0;

 
String readString;

void setup()
{
Serial.begin(9600);
}

void loop() 
{
   
   while (Serial.available()){
    char c= Serial.read();
    readString+=c;
  }

  if(readString.length() >0) {
   
    value_bluetooth =readString.toInt();

   if (value_bluetooth >  0   ){
      delay_time = 15;  
    }
    else
    {
      delay_time=0;
      }

Serial.println(value_bluetooth);

 
digitalWrite(8, HIGH); digitalWrite(step_pin_2, HIGH); digitalWrite(step_pin_3, LOW); digitalWrite(step_pin_4, LOW);   
delay(delay_time);


digitalWrite(step_pin_1, LOW); digitalWrite(step_pin_2, HIGH); digitalWrite(step_pin_3, HIGH); digitalWrite(step_pin_4, LOW);  
delay(delay_time);

digitalWrite(step_pin_1, LOW); digitalWrite(step_pin_2, LOW); digitalWrite(step_pin_3, HIGH); digitalWrite(step_pin_4, HIGH);  
delay(delay_time);
 
digitalWrite(step_pin_1, HIGH); digitalWrite(step_pin_2, LOW); digitalWrite(step_pin_3, LOW); digitalWrite(step_pin_4, HIGH);  
delay(delay_time); 


readString="";

}

}
