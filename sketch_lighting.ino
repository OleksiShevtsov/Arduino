const int pinGreen = 10;
const int pinYellow = 11;
const int pinRed = 12;

void setup() {
  pinMode(pinGreen, OUTPUT);
  pinMode(pinYellow, OUTPUT);
  pinMode(pinRed, OUTPUT);
}

void loop() {
  digitalWrite(pinRed, HIGH);
  digitalWrite(pinYellow, LOW);
  digitalWrite(pinGreen, LOW);
  delay(5000);

  digitalWrite(pinRed, HIGH);
  digitalWrite(pinYellow, HIGH);
  digitalWrite(pinGreen, LOW);
  delay(1500);

  digitalWrite(pinRed, LOW);
  digitalWrite(pinYellow, LOW);
  digitalWrite(pinGreen, HIGH);
  delay(5000);

  for(int i = 0; i < 4; i ++) {
    digitalWrite(pinGreen, HIGH);
    delay(500);
    digitalWrite(pinGreen, LOW);
    delay(500);
  }
 
}