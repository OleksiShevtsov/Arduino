#include <NanitLib.h>

byte ledPin = P4_2;
bool mode = 0;

void setup() {
  Nanit_Base_Start();
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int soundVal = analogRead(P4_1);

  if (soundVal > 50 && mode == 0) {
    mode = 1;
    digitalWrite(ledPin, 1);
  } else if (soundVal > 50 && mode == 1) {
    digitalWrite(ledPin, 0);
    mode = 0;
  }  

  Serial.print(mode);
  Serial.print(" | ");
  Serial.println(soundVal);
  delay(500);
}
