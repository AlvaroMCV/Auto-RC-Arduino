#ifndef LUCES_H
#define LUCES_H

#include <Arduino.h>
#include <Dabble.h>

extern boolean estadoLuzA;
extern boolean antEstadoLuzA;
extern boolean estadoLuzB;
extern boolean antEstadoLuzB;

void controlLuces() {
  estadoLuzA = GamePad.isTrianglePressed();
  estadoLuzB = GamePad.isSquarePressed();
  if (estadoLuzA) {
    if (!antEstadoLuzA) {
      digitalWrite(luzA, !digitalRead(luzA));
      if (digitalRead(luzB) == 1) digitalWrite(luzB, LOW);
      antEstadoLuzA = true;
    }
  } else {
    antEstadoLuzA = false;
  }
  if (estadoLuzB) {
    if (!antEstadoLuzB) {
      digitalWrite(luzB, !digitalRead(luzB));
      if (digitalRead(luzA) == 1) digitalWrite(luzA, LOW);
      antEstadoLuzB = true;
    }
  } else {
    antEstadoLuzB = false;
  }
}

#endif
