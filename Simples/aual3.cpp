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
    if(recebido == 'a'){
      digitalWrite(led, HIGH);
    } else if(recebido == 'b'){
      digitalWrite(led, LOW);
    } else {
      Serial.write("Caracter inválido: ");
      Serial.write(recebido);
    }
  }
}