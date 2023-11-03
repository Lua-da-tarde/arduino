// C++ code
//
#include <Arduino.h>
int led1 = 13, led2 = 11;
int led3 = 6, led4 = 4;
char recebido = 'z';
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()>0){
      recebido = Serial.read();
      Serial.write(recebido);
      Serial.write("\n");
  }
  if(recebido == 'z'){
    digitalWrite(led1, HIGH);
    delay(200);
    digitalWrite(led1, LOW);
    delay(200);
 	digitalWrite(led2, HIGH);
    delay(200);
    digitalWrite(led2, LOW);
    delay(200);
 	digitalWrite(led3, HIGH);
    delay(200);
    digitalWrite(led3, LOW);
    delay(200);
 	digitalWrite(led4, HIGH);
    delay(200);
    digitalWrite(led4, LOW);
    delay(200);
  } else if(recebido == 'a'){
    digitalWrite(led4, HIGH);
    delay(200);
    digitalWrite(led4, LOW);
    delay(200);
 	digitalWrite(led3, HIGH);
    delay(200);
    digitalWrite(led3, LOW);
    delay(200);
 	digitalWrite(led2, HIGH);
    delay(200);
    digitalWrite(led2, LOW);
    delay(200);
 	digitalWrite(led1, HIGH);
    delay(200);
    digitalWrite(led1, LOW);
    delay(200);
  }else if(recebido == 'b'){
    digitalWrite(led1, LOW);
 	digitalWrite(led2, LOW);
 	digitalWrite(led3, LOW);
 	digitalWrite(led4, LOW);
    delay(200);
    delay(200);
    delay(200);
    delay(200);
  } else if(recebido == 'c'){
    digitalWrite(led1, HIGH);
 	digitalWrite(led2, HIGH);
 	digitalWrite(led3, HIGH);
 	digitalWrite(led4, HIGH);
    delay(200);
    delay(200);
    delay(200);
    delay(200);
  } else if(recebido == 'd'){
    recebido = 'z';
  } else {
    recebido = 'z';
  }
}