#include <Servo.h>
#include <Dabble.h>
#include "traccion.h"
#include "luces.h"
#include "direccion.h"
#include "bocina.h"

#define CUSTOM_SETTINGS
#define INCLUDE_GAMEPAD_MODULE

// Pines
#define luzA 11
#define luzB 12
#define luzReversa 13
#define bocina 9
#define frecBocina 262
#define frecRetroceso 440

#define pwmMotor 5
#define izqMotor 4
#define derMotor 6

#define servo 10
Servo servoDireccion;
const int PULSO_MIN = 450;
const int PULSO_MAX = 2200;

boolean estadoLuzA = false;
boolean antEstadoLuzA = false;
boolean estadoLuzB = false;
boolean antEstadoLuzB = false;
int contadorSonidoReversa = 0;

void setup() {
  Serial.begin(9600);
  Dabble.begin(38400);
  for(int i = 4; i<=6; i++) {
    pinMode(i, OUTPUT);
    if(i == 6) {
      for(int j = 9; j<=13; j++) {
        pinMode(j, OUTPUT);
      }
    }
  }
  servoDireccion.attach(servo, PULSO_MIN, PULSO_MAX);
}

void loop() {
  Dabble.processInput();
  controlLuces();
  controlTraccion();
  controlDireccion();
  controlBocina();
}
