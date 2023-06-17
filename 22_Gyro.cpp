#include <MPU6050.h>

#include <Wire.h>

MPU6050 sensor;
int ivmeX, ivmeY, ivmeZ, GyroX, GyroY, GyroZ;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Wire.begin();
  sensor.initialize();
}

void loop() {
  // put your main code here, to run repeatedly:
  sensor.getAcceleration(&ivmeX, &ivmeY, &ivmeZ);
  sensor.getRotation(&GyroX, &GyroY, &GyroZ);

  //sensor.getMotion6(&ivmeX, &ivmeY, &izvmeZ, &Gyrox, &GyroY, &GyroZ);    hepsiniz tek seferde istemek için kullanılır

  Serial.print("ivme X =");
  Serial.println(ivmeX);
  delay(500);

  Serial.print("ivme y =");
  Serial.println(ivmeY);
 delay(500);
  Serial.print("ivme z=");
  Serial.println(ivmeZ);
 delay(500);
  Serial.print("GyroX=");
  Serial.println(GyroX);
 delay(500);
  Serial.print("GyroY=");
  Serial.println(GyroY);
 delay(500);
  Serial.print("GyroZ=");
  Serial.println(GyroZ);
   delay(500);
}
