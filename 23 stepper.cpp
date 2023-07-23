//Stepper.h kütüphanesini içe aktardık.
#include <Stepper.h>
// Bir tam turdaki adım sayısı belirlendi.
const int stepsPerRevolution = 2048;
// Wiring:
// Pin 8'i ULN2003 sürücüsünde IN1 ayağına bağlandı.
// Pin 9'u ULN2003 sürücüsünde IN2 ayağına bağlandı.
// Pin 10'u ULN2003 sürücüsünde IN3 ayağına bağlandı.
// Pin 11'i ULN2003 sürücüsünde IN4 ayağına bağlandı.
//'myStepper' adında bir stepper nesnesi oluşturuldu,pin numaraları belirlendi.
Stepper myStepper = Stepper(stepsPerRevolution, 8, 10, 9, 11);
void setup() {
//Hızı 20 rpm ayarlandı.:
myStepper.setSpeed(20);
Serial.begin(9600);
}
void loop() {
// Saat yönünde hareket:
Serial.println("Saat yönü");
myStepper.step(stepsPerRevolution);
delay(500);
 
// Saat yönünün tersi hareket:
Serial.println("Saat yönü tersi");
myStepper.step(-stepsPerRevolution);
delay(500);
}
