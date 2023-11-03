// C++ code
//
#include <Arduino.h>
int led1 = 3, led2 = 5, led3 = 7;
int valor = 0;
int aaa = 0;
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  aaa = map(analogRead(A1),0,1023,0,1000);
  digitalWrite(led1,HIGH);
  delay(aaa);
  digitalWrite(led1,LOW);
  delay(aaa);
  digitalWrite(led2,HIGH);
  delay(aaa);
  digitalWrite(led2,LOW);
  delay(aaa);
  digitalWrite(led3,HIGH);
  delay(aaa);
  digitalWrite(led3,LOW);
}