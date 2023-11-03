// C++ code
//
#include <stdlib.h>
#include <Arduino.h>
int led1 = 10, led2 = 3, led3 = 11;
int numero = 0;
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(numero == 0){
  	Serial.write("\n");
    numero = rand() % 4;
    Serial.print(numero);
  }else if(numero == 1){
    digitalWrite(led1, HIGH);
    delay(300);
    Serial.write("\nLed verde");
    digitalWrite(led1, LOW);
    delay(300);
    numero = 0;
  } else if(numero == 2){
    digitalWrite(led2, HIGH);
    delay(300);
    Serial.write("\nLed azul");
    digitalWrite(led2, LOW);
    delay(300);
    numero = 0;
  } else if(numero == 3){
    digitalWrite(led3, HIGH);
    delay(300);
    Serial.write("\nLed vermelho");
    digitalWrite(led3, LOW);
    delay(300);
    numero = 0;
  }
}