// C++ code
//
#include <Arduino.h>
int led1 = 13;
int led2 = 4;
int recebido = 0;
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(recebido == 0){
  	if(Serial.available()>0){
      recebido = Serial.parseInt();
      Serial.print(recebido);
      Serial.write("\n");
   	}
  } else if(recebido == 1){
    digitalWrite(led1, HIGH);
    delay(300);
    digitalWrite(led1, LOW);
    delay(300);
    recebido = 0;
    Serial.write("\n");
  } else if(recebido == 2){
    digitalWrite(led2, HIGH);
    delay(300);
    digitalWrite(led2, LOW);
    delay(300);
    recebido = 0;
    Serial.write("\n");
  } else{
    recebido = 0;
    delay(400);
    Serial.write("\n");
  }
}