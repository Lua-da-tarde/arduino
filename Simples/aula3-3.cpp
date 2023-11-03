// C++ code
//
#include <Arduino.h>
int led = 13, recebido = 0, i = 0;
void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  /*if(Serial.available()>0){
    recebido = Serial.parseInt();
    Serial.print(recebido);   
  }
  if(aa<=recebido){
      digitalWrite(led, HIGH);
      delay(400);
      digitalWrite(led, LOW);
      aa++;
    }*/
  if (recebido == 0){
    if(Serial.available()>0){
      recebido = Serial.parseInt();
      Serial.print(recebido);
      Serial.write("\n");
    }
  } else if(i<recebido){
     digitalWrite(led, HIGH);
     delay(500);
     digitalWrite(led, LOW);
     delay(500);
     i++;
  } else {
    recebido = 0;
    i = 0;
    delay(500);
  }
}