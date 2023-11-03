// C++ code
//
#include <Arduino.h>
int botao = 2, led = 10;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
}

void loop()
{
  if(digitalRead(botao) == LOW)
    digitalWrite(led, HIGH);
  else
    digitalWrite(led, LOW);
}