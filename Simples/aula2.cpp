// C++ code
//
#include <Arduino.h>
int cont = 65, led = 13;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(led, LOW);
  if(cont > 90){
    cont = 65;
  }
  else {
  if(cont%2==0){
    digitalWrite(led, HIGH);
    Serial.write(cont);
    Serial.write(" - ");
    Serial.print(cont);
    Serial.write("\n");
    delay(300);
    cont++;
  }else{
    digitalWrite(led, LOW);
    Serial.write(cont);
    Serial.write(" - ");
    Serial.print(cont);
    Serial.write("\n");
    delay(300);
    cont++;
  }
  }
}