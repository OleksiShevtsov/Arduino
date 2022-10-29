const int pinLed = 12;
const int pinButton = 11;
boolean mode = false;

void setup() {
  pinMode(pinLed, OUTPUT);
  pinMode(pinButton, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(pinButton) == LOW) {
    delay(300);
    mode != mode;
  }
  if (mode) {
    digitalWrite(pinLed, HIGH);
    delay(50000);
    digitalWrite(pinLed, LOW);
    delay(40000);
  } else {
    digitalWrite(pinLed, HIGH);
    delay(200);
    digitalWrite(pinLed, LOW);
    delay(200);
  }


  // else {
  //   digitalWrite(pinLed, LOW);
  //   delay(1000);
  //   digitalWrite(pinLed, HIGH);
  //   delay(1000);
  // }
}