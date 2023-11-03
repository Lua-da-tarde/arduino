// C++ code
//
//a-2 / b-3 / c-4 / d-5 / e-6 / f-7 / g-8
#include <Arduino.h>

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  zero();
  um();
  dois();
  tres();
  quatro();
  cinco();
  seis();
  sete();
  oito();
  nove();
}

void zero(){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  delay(1000);
}

void um(){
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(13, LOW);
  delay(1000);
}

void dois(){
  digitalWrite(4, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(4, LOW);
  digitalWrite(7, LOW);
  digitalWrite(13, LOW);
  delay(1000);
}

void tres(){
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(13, LOW);
  delay(1000);
}

void quatro(){
  digitalWrite(2, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(13, LOW);
  delay(1000);
}

void cinco(){
  digitalWrite(6, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(6, LOW);
  digitalWrite(3, LOW);
  digitalWrite(13, LOW);
  delay(1000);
}

void seis(){
  digitalWrite(3, HIGH);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(3, LOW);
  digitalWrite(13, LOW);
  delay(1000);
}

void sete(){
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(13, LOW);
  delay(1000);
}

void oito(){
  /*digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(13, LOW);
  delay(1000);*/
}

void nove(){
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(13, LOW);
  delay(1000);
}
