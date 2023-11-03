// C++ code
//
#include <Arduino.h>
int led = 13, botao = 2, pres = 0, cont = 0;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT);
  Serial.begin(9600);
  //attachInterrupt(0, zera, HIGH);
  attachInterrupt(digitalPinToInterrupt(botao),zera,HIGH);
}

void loop()
{
  Serial.println(cont);
  cont++;
  delay(300);
  pres = digitalRead(botao);
  if(pres == HIGH){
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}

void zera(){
  cont = 0;
}