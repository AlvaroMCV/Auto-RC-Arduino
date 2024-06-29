#ifndef DIRECCION_H
#define DIRECCION_H

#include <Arduino.h>
#include <Servo.h>
#include <Dabble.h>

extern Servo servoDireccion;

void controlDireccion() {
  int ejeX = GamePad.getXaxisData();

  if (ejeX == 0) servoDireccion.write(90);
  else if (ejeX > 0) servoDireccion.write(map(GamePad.getXaxisData(), 1, 6, 91, 160));
  else if (ejeX < 0) servoDireccion.write(map((-1 * GamePad.getXaxisData()), 1, 6, 89, 30));
}

#endif
