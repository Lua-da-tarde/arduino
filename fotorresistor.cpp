// C++ code
//
#include <Arduino.h>

int ldr = A0;
int led = 3;
int entrada = 0;

void setup()
{
  pinMode(ldr, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  entrada = analogRead(ldr); //faz a leitura do LDR
  analogWrite(led,map(entrada,0,1023,0,254)); //mapeia o valor do LDR
  Serial.print("Leitura do sensor:");
  Serial.println(entrada);
  delay(1000);
}