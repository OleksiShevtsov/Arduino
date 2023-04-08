#include <NanitLib.h>
#include <Servo.h>

Servo myservo;
byte CNote = P3_2;
byte DNote = P3_3;
byte ENote = P3_4;
byte redLedPin = P4_2;
byte greenLedPin = P4_4;
byte blueLedPin = P4_3;
//byte buzzPin = P4_2;

void setup() {
  Nanit_Base_Start();
  
  myservo.attach(P2_3);
  Serial.begin(9600);
  
  pinMode(CNote, INPUT_PULLUP);
  pinMode(DNote, INPUT_PULLUP);
  pinMode(ENote, INPUT_PULLUP);
  
  pinMode(redLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
  pinMode(blueLedPin, OUTPUT);
}

void loop() {
digitalWrite(redLedPin, 1);
delay(500);
digitalWrite(redLedPin, 0);
delay(500);
digitalWrite(greenLedPin, 1);
delay(500);
digitalWrite(greenLedPin, 0);
delay(500);
digitalWrite(blueLedPin, 1);
delay(500);
digitalWrite(blueLedPin, 0);
delay(500);
  
//  bool CState = digitalRead(CNote);
//  bool DState = digitalRead(DNote);
//  bool EState = digitalRead(ENote);
//
//  if (!CState) {
//   // tone(buzzPin, 50);
//   analogWrite(redLedPin, 60);
//    myservo.write(random(90));
//  } else if (!DState) {
//   // tone(buzzPin, 200);
//   analogWrite(greenLedPin, 100);
//    myservo.write(random(91, 121));
//  } else if (!EState) {
//    //tone(buzzPin, 500);
//    analogWrite(blueLedPin, 200);
//    myservo.write(random(120, 181));
//  }
//
//  Serial.print(!CState);
//  Serial.print(" | ");
//  Serial.print(!DState);
//  Serial.print(" | ");
//  Serial.println(!EState);
//  delay(100);
}

//void setup() {
//  Nanit_Base_Start();
//  myservo.attach(P2_3);
//}
//
//void loop() {
//  for (int i = 0; i < 181; i++) {
//    myservo.write(i);
//    delay(30);
//    if (i == 180) {
//      delay(2000);
//      for (int j = 180; j > -1; j--) {
//        myservo.write(j);
//        delay(30);
//        if (j == 0) {
//          delay(2000);
//        }
//      }
//    }
//  }
//}

//void setup() {
//  Nanit_Base_Start();
//  myservo.attach(P2_3);
//  myservo.write(0);
//}
//
//void loop() {
//  servoForward(181, 30);
//  servoBackward(180, 30);
//}
//
//void servoForward(byte angle, int del) {
//  for (int i = 0; i < angle; i++) {
//    myservo.write(i);
//    delay(del);
//  }
//}
//
//void servoBackward(byte angle, int del) {
//  for (int i = angle; i > -1; i--) {
//    myservo.write(i);
//    delay(del);
//  }
//}

//void setup() {
//  Nanit_Base_Start();
//  Serial.begin(9600);
//  myservo.attach(P2_3);
//  myservo.write(0);
//}
//
//
//void loop() {
//  int potValue = analogRead(P2_2);
//
//  potValue = map(potValue, 0, 862, 0, 180);
//  Serial.println(potValue);
//  myservo.write(potValue);
//  delay(200);
//}
