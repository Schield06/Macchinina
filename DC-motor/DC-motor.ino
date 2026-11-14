int outPin = 10;
int buttonPin = 12;
const int controlPin1 = 7;
const int controlPin2 = 8;
const int enablePin = 9;


void setup() {
  pinMode(outPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(controlPin1, OUTPUT);
  pinMode(controlPin2, OUTPUT);
  pinMode(enablePin, OUTPUT);
}

void loop() {
  if(digitalRead(buttonPin) == 1)
    analogWrite(outPin, 255);
  else
    analogWrite(outPin, 127);

  digitalWrite(controlPin1, HIGH);
  digitalWrite(controlPin2, LOW);
  for(int v = 100; v<=255; v+=5){
    analogWrite(enablePin, v);
    delay(100);
  }
  analogWrite(enablePin, 0);
  delay(3000);

}
