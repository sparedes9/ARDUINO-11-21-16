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

  if (sensorValue >= 200) {
    //RED
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    delay(5);
  }
  else if (sensorValue >= 180 & sensorValue < 200) {
    //GREEN
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    delay(5);

  }  else if (sensorValue >= 160 & sensorValue < 180) {
    //BLUE
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    delay(5);
  } else {
    //OFF
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);

    delay(10);
  }
}
/*
  //---------------RGB LED FUNCION---------------//
  void colorRGB() {
  //RED
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);

  delay(10);

  //GREEN
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);

  delay(10);

  //BLUE
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);

  delay(10);

  //----------------OFF------------------//
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);

  delay(1000);

  //RED + GREEN = YELLOW
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);

  delay(10);

  //RED + BLUE = MAGENTA
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);

  delay(10);

  //GREEN + BLUE = CYAN
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);

  delay(1000);


  //GREEN + BLUE + RED = WHITE
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);

  delay(10);

  //----------------OFF------------------//
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);

  delay(10);
  }*/

