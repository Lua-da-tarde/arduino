#include <LiquidCrystal.h>
#include <Arduino.h>

int trigger = 10, echo = 11;
int azul = 8, red = 9;
int resultado = 0, leitura, calculaDistancia;
int i;

const int rs = 7, en = 6, d4 = A2, d5 = A3, d6 = A4, d7 = A5;        
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup()
{
  pinMode(5, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  
  //Setup Display LCD 16x2
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(3, 0);
}

void loop()
{
  distancia();
}

void distancia(){
  digitalWrite(trigger,LOW);
  delayMicroseconds(5);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger,LOW);
  leitura = pulseIn(echo, HIGH);
  calculaDistancia = (leitura/2)*0.0343;
  lcd.clear();
  lcd.print("Distancia:");
  lcd.print(calculaDistancia);
  lcd.print(" cm");
  if(calculaDistancia <=50){
    //LED
    delay(300);
    digitalWrite(red,HIGH);
    digitalWrite(azul,LOW);
    delay(300);
    digitalWrite(red,LOW);
    digitalWrite(azul,HIGH);
    //BUZZER
    delay(300);
    digitalWrite(5,HIGH);
    delay(300);
    digitalWrite(5,LOW);
  } else {
    delay(300);
    digitalWrite(red,LOW);
    digitalWrite(azul,LOW);
  }
}