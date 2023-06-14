// C++ code
//
const int sensorPin = 9;
const int buzzerPin = 11;
const int ledPin = 10;

void setup() {
  
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int deger = digitalRead(sensorPin);
  if (deger == HIGH) 
  {
    Serial.println("Etrafta birileri var");
    delay(300);
    digitalWrite(buzzerPin,HIGH);
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(buzzerPin,LOW);
    digitalWrite(ledPin, LOW);
    delay(100);
   
     }
  else 
  {
    Serial.println("Etraf temiz gorunuyor");
    delay(300);
    digitalWrite(buzzerPin,LOW);
    digitalWrite(ledPin, LOW);
    delay(100);
  }
}
