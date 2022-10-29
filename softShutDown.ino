const int pinLed = 10;

void setup() {
}

void loop() {
  for (int i = 255; i > -1; i--) {
    analogWrite(pinLed, i);
    delay(20);
  }
  delay(1000);
}