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
  if(cont%2==0){
  	digitalWrite(led, HIGH);
  	delay(300);
    digitalWrite(led, LOW);
    delay(300);
    digitalWrite(led, HIGH);
  	delay(300);
    digitalWrite(led, LOW);
    delay(300);
    
  }else{
    digitalWrite(led, HIGH);
    delay(800);
    digitalWrite(led, LOW);
    delay(800);
  }
  cont++;
}