// C++ code
//
#include<Servo.h>
#include <Arduino.h>
Servo mm;
int valor = 0;
void setup()
{
  mm.attach(2);
}

void loop()
{
  valor = analogRead(A1);
  mm.write(valor);
  
}