// C++ code
//
#include <Arduino.h>
int botao = 2, led1 = 6, led2 = 8, led3 = 10;
int press = 0, cont = 0;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop()
{
  press = digitalRead(botao);
  if(press == LOW){
  	cont++;
    Serial.write(" - ");
    Serial.print(cont);
    if(cont>=3 && cont<=5){
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
    }
    if(cont>5 && cont<=7){
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, LOW);
    }
    if(cont>7){
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, HIGH);
    }
  }else {
    cont = 0;
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
  }
  delay(1000);
}