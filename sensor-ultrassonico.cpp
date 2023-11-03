// C++ code
//
#include <Arduino.h>

float cm, leitura, calculaDistancia;
byte trigger = 4, echo = 5;

void setup()
{
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop()
{
  cm = distancia(); //em centimetros
  Serial.print(cm);
  Serial.print("cm");
  delay(1000);
}

float distancia(){
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
  if(calculaDistancia>=331){ //esta fora do alcance deste sensor
  	calculaDistancia = 0;
  }
  return calculaDistancia;
}