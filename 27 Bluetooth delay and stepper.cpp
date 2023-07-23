#include <SoftwareSerial.h>
#include <AccelStepper.h>
SoftwareSerial led(4, 5);  //rx -tx pinleri
char veri;
float delay_time;
const int dirPin = 2;
const int stepPin = 3;
const int stepsPerRevolution = 198;
AccelStepper myStepper(AccelStepper::DRIVER, stepPin, dirPin);

void setup() {
  Serial.begin(9600);
  led.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  myStepper.setMaxSpeed(500);  // this limits the value of setSpeed(). Raise it if you like.
  myStepper.setSpeed(20);      // runSpeed() will run the motor at this speed - set it to whatever you like.
}

void loop() {
  if (led.available()) {
    veri = led.read();
    delay(10);
    if (veri == '1') {
      digitalWrite(13, HIGH);
    }
    if (veri == '2') {
      digitalWrite(13, LOW);
    }

    if (veri == '3') {
      digitalWrite(dirPin, HIGH);
      for (int x = 0; x < stepsPerRevolution; x++) {
        digitalWrite(stepPin, HIGH);
        delayMicroseconds(700);
        digitalWrite(stepPin, LOW);
        delayMicroseconds(700);
      }
    }

    if (veri == '4') {
      digitalWrite(dirPin, LOW);
      for (int x = 0; x < stepsPerRevolution; x++) {
        digitalWrite(stepPin, LOW);
        delayMicroseconds(700);
        digitalWrite(stepPin, HIGH);
        delayMicroseconds(700);
      }
    }
  }

  //myStepper.runSpeed();  // This will run the motor forever.
}
