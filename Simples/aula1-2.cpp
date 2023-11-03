// C++ code
//
#include <Arduino.h>
int led = 13, cont = 1;

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  digitalWrite(led, HIGH);
  delay(300);
  if(cont<10){
  	digitalWrite(led, LOW);
  	delay(300);
    cont++;
  }
}