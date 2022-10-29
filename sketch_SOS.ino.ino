void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  for (int i = 0, n = 0; i < 6; i++, n++) {
    if (n < 3) {
      digitalWrite(13, HIGH);
      delay(3000);
      digitalWrite(13, LOW);
      delay(500);
    } else {
      digitalWrite(13, HIGH);
      delay(1000);
      digitalWrite(13, LOW);
      delay(500);
    }
  }
  delay(6000);
}