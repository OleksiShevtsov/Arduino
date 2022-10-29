/*
const int pinSegmentG = 6;
const int pinSegmentA = 12;
const int pinPot = A0;
byte numberSegments[10] = {
  0b01111110,
  0b00110000,
  0b01101101,
  0b01111001,
  0b00110011,
  0b01011011,
  0b01011111,
  0b01110000,
  0b01111111,
  0b01111011,
};

int var = 0;
int mask = 0;

void setup() {
  for (int i = 0; i < pinSegmentA; ++i) {
    pinMode(i + pinSegmentG, OUTPUT);
    Serial.begin(9600);
  }
}

void loop() {
  var = map(analogRead(pinPot), 0, 1024, 0, 9);
  mask = numberSegments[var % 10];

  for (int i = 0; i < pinSegmentA; ++i) {
    boolean enableSegment = bitRead(mask, i);
    digitalWrite(i + pinSegmentG, enableSegment);
  }
}
*/

const int pinLedA = 12;
const int pinLedB = 11;
const int pinLedC = 10;
const int pinLedD = 9;
const int pinLedE = 8;
const int pinLedF = 7;
const int pinLedG = 6;
const int pinPot = A0;

int var = 0;

void setup() {
  pinMode(pinLedA, OUTPUT);
  pinMode(pinLedB, OUTPUT);
  pinMode(pinLedC, OUTPUT);
  pinMode(pinLedD, OUTPUT);
  pinMode(pinLedE, OUTPUT);
  pinMode(pinLedF, OUTPUT);
  pinMode(pinLedG, OUTPUT);
}

void loop() {
  var = map(analogRead(pinPot), 0, 1024, 0, 9);

  switch (var) {
    case 0:
      digitalWrite(pinLedA, HIGH);
      digitalWrite(pinLedB, HIGH);
      digitalWrite(pinLedC, HIGH);
      digitalWrite(pinLedD, HIGH);
      digitalWrite(pinLedE, HIGH);
      digitalWrite(pinLedF, HIGH);
      digitalWrite(pinLedG, LOW);
      break;
    case 1:
      digitalWrite(pinLedA, LOW);
      digitalWrite(pinLedB, HIGH);
      digitalWrite(pinLedC, HIGH);
      digitalWrite(pinLedD, LOW);
      digitalWrite(pinLedE, LOW);
      digitalWrite(pinLedF, LOW);
      digitalWrite(pinLedG, LOW);
      break;
    case 2:
      digitalWrite(pinLedA, HIGH);
      digitalWrite(pinLedB, HIGH);
      digitalWrite(pinLedC, LOW);
      digitalWrite(pinLedD, HIGH);
      digitalWrite(pinLedE, HIGH);
      digitalWrite(pinLedF, LOW);
      digitalWrite(pinLedG, HIGH);
      break;
    case 3:
      digitalWrite(pinLedA, HIGH);
      digitalWrite(pinLedB, HIGH);
      digitalWrite(pinLedC, HIGH);
      digitalWrite(pinLedD, HIGH);
      digitalWrite(pinLedE, LOW);
      digitalWrite(pinLedF, LOW);
      digitalWrite(pinLedG, HIGH);
      break;
    case 4:
      digitalWrite(pinLedA, LOW);
      digitalWrite(pinLedB, HIGH);
      digitalWrite(pinLedC, HIGH);
      digitalWrite(pinLedD, LOW);
      digitalWrite(pinLedE, LOW);
      digitalWrite(pinLedF, HIGH);
      digitalWrite(pinLedG, HIGH);
      break;
    case 5:
      digitalWrite(pinLedA, HIGH);
      digitalWrite(pinLedB, LOW);
      digitalWrite(pinLedC, HIGH);
      digitalWrite(pinLedD, HIGH);
      digitalWrite(pinLedE, LOW);
      digitalWrite(pinLedF, HIGH);
      digitalWrite(pinLedG, HIGH);
      break;
    case 6:
      digitalWrite(pinLedA, HIGH);
      digitalWrite(pinLedB, LOW);
      digitalWrite(pinLedC, HIGH);
      digitalWrite(pinLedD, HIGH);
      digitalWrite(pinLedE, HIGH);
      digitalWrite(pinLedF, HIGH);
      digitalWrite(pinLedG, HIGH);
      break;
    case 7:
      digitalWrite(pinLedA, HIGH);
      digitalWrite(pinLedB, HIGH);
      digitalWrite(pinLedC, HIGH);
      digitalWrite(pinLedD, LOW);
      digitalWrite(pinLedE, LOW);
      digitalWrite(pinLedF, LOW);
      digitalWrite(pinLedG, LOW);
      break;
    case 8:
      digitalWrite(pinLedA, HIGH);
      digitalWrite(pinLedB, HIGH);
      digitalWrite(pinLedC, HIGH);
      digitalWrite(pinLedD, HIGH);
      digitalWrite(pinLedE, HIGH);
      digitalWrite(pinLedF, HIGH);
      digitalWrite(pinLedG, HIGH);
      break;
    case 9:
      digitalWrite(pinLedA, HIGH);
      digitalWrite(pinLedB, HIGH);
      digitalWrite(pinLedC, HIGH);
      digitalWrite(pinLedD, HIGH);
      digitalWrite(pinLedE, LOW);
      digitalWrite(pinLedF, HIGH);
      digitalWrite(pinLedG, HIGH);
      break;
  }
}