const int pinLed = 10;
const int pinPhotoLightning = A0;
int illumination = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  illumination = analogRead(pinPhotoLightning);
  int bright = illumination;
  Serial.println(illumination);
  if (illumination > 60) {
    digitalWrite(pinLed, LOW);
  } else {
    for (int i = 0; i < 256; i++) {
      analogWrite(pinLed, bright);
      delay(10);
    }
  }
}

// const int pinLed = 10;
// const int pinPhotoLightning = A0;
// int illumination = 0;
// int bright = 0;

// void setup() {
//   Serial.begin(9600);
// }

// void loop() {
//   illumination = analogRead(pinPhotoLightning);
//   Serial.println(illumination);
//   delay(50);
//   bright = map(illumination, 0, 110, 0, 255);
//   analogWrite(pinLed, bright);
// }