#ifndef TRACCION_H
#define TRACCION_H

#include <Arduino.h>
#include <Dabble.h>

void controlTraccion() {
  int ejeY = GamePad.getYaxisData();

  if(ejeY == 0) {
    digitalWrite(izqMotor, LOW);
    digitalWrite(derMotor, LOW);
    digitalWrite(luzReversa, LOW);
  } else if(ejeY > 0) {
    digitalWrite(izqMotor, LOW);
    digitalWrite(derMotor, HIGH);
    digitalWrite(luzReversa, LOW);
  } else {
    digitalWrite(izqMotor, HIGH);
    digitalWrite(derMotor, LOW);
    digitalWrite(luzReversa, HIGH);
    ejeY *= -1;
  }

  int velocidad = ejeY * 255 / 7;
  analogWrite(pwmMotor, velocidad);
}

#endif
