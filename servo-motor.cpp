// C++ code
//
#include<Servo.h>
#include <Arduino.h>
int led = 13;
Servo mm;
void setup()
{
  mm.attach(2);
  pinMode(led, OUTPUT);
}

void loop()
{
  mm.write(1);
  digitalWrite(led, HIGH);
  delay(2000);
  mm.write(180);
  digitalWrite(led, LOW);
  delay(2000);
}