// C++ code
//
#include <Arduino.h>
int led = 3;
int valor = 0;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  valor = map(analogRead(A1),0,1023,0,255);
  analogWrite(led,valor);
}