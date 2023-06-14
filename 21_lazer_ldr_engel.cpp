const int laserPin = 7;
const int sensorPin = A0;
int deger = 0;
void setup() {
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  deger = analogRead(A0);
  Serial.println(deger);
  if (deger > 100) {
    Serial.println("Engel var");
  } else {
    Serial.println("Engel yok");
  }
}
