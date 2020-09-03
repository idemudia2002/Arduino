#include <Arduino.h>

void setup() {
 Serial.begin(9600);
 Serial.println("starting...");
 delay(1600);

  // put your setup code here, to run once:
}

void loop() {
 int value = analogRead(A0);
 Serial.println(value);
 
 delay(1000);
  // put your main code here, to run repeatedly:
}