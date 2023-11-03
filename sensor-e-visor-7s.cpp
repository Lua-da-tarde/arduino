// C++ code
//
#include <Arduino.h>

float cm, leitura, calculaDistancia;
byte trigger = 9, echo = 10;

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
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop()
{
  distancia();
}

void distancia(){
  digitalWrite(trigger,LOW); //corta sinal para "limpar o pino"
  delayMicroseconds(5);
  digitalWrite(trigger, HIGH); //envia um pulso para o sensor
  delayMicroseconds(10);
  digitalWrite(trigger,LOW); //desliga o pino para habilitar o
  //que recebe echo
  leitura = pulseIn(echo, HIGH); //calcula o tempo, em 
  //microssegundos, de pulso para ir e voltar
  calculaDistancia = (leitura/2)*0.0343; //divide por 2 porque
  //conta ida e volta
  if(calculaDistancia <= 50){
    Serial.println("1");
    um();
  } else if(calculaDistancia > 50 && calculaDistancia < 100){
    Serial.println("2");
    dois();
  } else if(calculaDistancia > 100 && calculaDistancia < 331){
    Serial.println("3");
    tres();
  } else {
    ai();
    Serial.println("0");
  }
}

void ai(){
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  delay(1000);
}

void um(){
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  delay(1000);
}

void dois(){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  delay(1000);
}

void tres(){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  delay(1000);
}