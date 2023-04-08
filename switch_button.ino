//byte CNote = D10;

void setup() {

}

void loop() {
  Serial.begin(9600);

  bool buttonState = digitalRead(10);

  Serial.println(buttonState);
  delay(100);
}
