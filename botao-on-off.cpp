// C++ code
//
#include <Arduino.h>
int botao = 2, led = 10;
bool fon = false;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(botao),zera,RISING);
}

void zera(){
	fon = !fon;
}

void loop()
{
  if(fon==false){
    digitalWrite(led, LOW);
  } else {
    digitalWrite(led, HIGH);
  	delay(300);
  	digitalWrite(led, LOW);
  	delay(300);
  }
}