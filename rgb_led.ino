#include <NanitLib.h>

byte CNote = P3_2;
byte DNote = P3_3;
byte ENote = P3_4;
byte redLedPin = P4_2;
byte greenLedPin = P4_4;
byte blueLedPin = P4_3;

int val = 0;
int brightness = 0;

void setup() {
  Nanit_Base_Start();
  Serial.begin(9600);

  pinMode(CNote, INPUT_PULLUP);
  pinMode(DNote, INPUT_PULLUP);
  pinMode(ENote, INPUT_PULLUP);

  pinMode(redLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
  pinMode(blueLedPin, OUTPUT);
}

void loop() {  
  ledSoftOn(redLedPin, 50);
  

  //  analogWrite(redLedPin, 1);
  //  delay(500);
  //  analogWrite(redLedPin, 0);
  //  delay(500);
  //  analogWrite(greenLedPin, 1);
  //  delay(500);
  //  analogWrite(greenLedPin, 0);
  //  delay(500);
  //  analogWrite(blueLedPin, 1);
  //  delay(500);
  //  analogWrite(blueLedPin, 0);
  //  delay(500);
}

void ledSoftOn(byte led, long pause) {
  for (int i = 0; i < 256; i++) {
    analogWrite(led, i);
    delay(pause);
    Serial.println(i);
    val = analogRead(led);
//    brightness = map(val, 0, 1023, 0, 255);
//    Serial.println(brightness);
  }
}
