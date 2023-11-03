// C++ code
//
#include <Arduino.h>

int ldr = A0;
int ledR = 3, ledY = 4, ledB = 5;
int entrada = 0;

void setup()
{
  pinMode(ldr, INPUT);
  pinMode(ledR, OUTPUT);
  pinMode(ledY, OUTPUT);
  pinMode(ledB, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  oipri();
}

void oipri(){
  entrada = analogRead(ldr); //faz a leitura do LDR
  Serial.print("Leitura do sensor:");
  Serial.println(entrada);
  if(entrada<=340){
    delay(100);
    digitalWrite(ledB, LOW);
    digitalWrite(ledY, LOW);
  	digitalWrite(ledR,HIGH);
  } else if(entrada<=682){
  	delay(100);
    digitalWrite(ledB, LOW);
    digitalWrite(ledR, LOW);
    digitalWrite(ledY, HIGH);
  } else {
    delay(100);
    digitalWrite(ledY, LOW);
    digitalWrite(ledR, LOW);
    digitalWrite(ledB, HIGH);
  }
}