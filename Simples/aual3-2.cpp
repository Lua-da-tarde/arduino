// C++ code
//
#include <Arduino.h>
int led = 13, recebido = 0;
void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()>0){
    recebido = Serial.read();
    Serial.print(recebido);
    Serial.write(" - ");
    Serial.write(recebido);
    Serial.write("\n");
  }
}