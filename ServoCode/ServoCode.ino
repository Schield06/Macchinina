#include <Servo.h>

Servo Servo1;

int servoPin = 9;
int buttonPin = 12;
int reading;

void setup() {
  pinMode(buttonPin, INPUT);
  Servo1.attach(servoPin);
  Serial.begin(9600);
}

void loop() {
  reading = digitalRead(buttonPin);
  Serial.println(reading);

  if (reading == HIGH) {
    Servo1.write(180);
    Serial.println("Acceso");
  } else {
    Servo1.write(0);
  }

  delay(50);
}