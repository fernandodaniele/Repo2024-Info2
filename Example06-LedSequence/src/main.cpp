#include <Arduino.h>

void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
}

int sentido = 0;

void loop()
{
  if (digitalRead(5) == LOW)
  {
    sentido = 0;
  }
  else if (digitalRead(6) == LOW)
  {
    sentido = 1;
  }

  if (sentido == 0)
  {
    digitalWrite(2,HIGH);
    delay(500);
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    delay(500);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    delay(500);
    digitalWrite(4,LOW);
  }	
  else
  {
    digitalWrite(4,HIGH);
    delay(500);
    digitalWrite(4,LOW);
    digitalWrite(3,HIGH);
    delay(500);
    digitalWrite(3,LOW);
    digitalWrite(2,HIGH);
    delay(500);
    digitalWrite(2,LOW);
  }
}

/*
#include <Arduino.h>

#define LED       13
#define BUTTON    6
#define T_BUTTON  50

bool estado = 1 ;
bool estado_anterior = 1 ;

void setup()
{ 
  pinMode(BUTTON, INPUT_PULLUP);        //Con resistencia de pullup interna
  pinMode(LED, OUTPUT);
}

void loop()
{
  estado = digitalRead(BUTTON);
  if (estado != estado_anterior)      //hay cambio : Han pulsado o soltado
  {
    if (estado == LOW)            //Al pulsar botón cambiar LED, pero no al soltar
      digitalWrite(LED, !digitalRead(LED));
    estado_anterior = estado ;     // Para recordar el ultimo valor
    delay (T_BUTTON);
  }
}
*/