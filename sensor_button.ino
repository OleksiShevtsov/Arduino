#include <NanitLib.h>

//byte button = P9_1;
//byte redLedPin = P4_2;
//byte greenLedPin = P4_4;
//byte blueLedPin = P4_3;

void setup() {
  Nanit_Base_Start();
  Serial.begin(9600);

//  pinMode (button, INPUT_PULLUP);
//  pinMode(redLedPin, OUTPUT);
//  pinMode(greenLedPin, OUTPUT);
//  pinMode(blueLedPin, OUTPUT);
}

void loop() {
  bool buttonState = digitalRead(P3_4);

  Serial.println(buttonState);
  delay(100);

//  if (!button) {
//    digitalWrite (redLedPin, 1);
//  }

}
