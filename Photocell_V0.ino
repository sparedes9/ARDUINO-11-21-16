//THIS CODE IS TO CHANGE THE RGB LEFD LIGHT SEQUENCE

#include <Servo.h>
Servo myServo;

const int analogInPin = A0;
int sensorValue = 0;
int pos = 0;

void setup() {
  // initialize digital pins 2 - 4 as an output.
  pinMode(2, OUTPUT);//BLUE
  pinMode(3, OUTPUT);//GREEN
  pinMode(4, OUTPUT);//RED

  Serial.begin(9600);
  myServo.attach(9);

}

// the loop function runs over and over again forever
void loop() {
  sensorValue = analogRead(analogInPin);

  Serial.print("Sensor = ");
  Serial.println(sensorValue);

  delay(100);


}


