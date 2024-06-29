#ifndef BOCINA_H
#define BOCINA_H

#include <Arduino.h>
#include <Dabble.h>

extern int contadorSonidoReversa;

void controlBocina() {
  contadorSonidoReversa++;
  if (contadorSonidoReversa > 1400) contadorSonidoReversa = 0;

  if (digitalRead(luzReversa) && contadorSonidoReversa == 700 && !GamePad.isCirclePressed()) {
    tone(bocina, frecRetroceso);
  } else if (digitalRead(luzReversa) && contadorSonidoReversa == 1400 && !GamePad.isCirclePressed()) {
    noTone(bocina);
  } else if (!digitalRead(luzReversa) && !GamePad.isCirclePressed()) {
    noTone(bocina);
    contadorSonidoReversa = 0;
  }

  if (!digitalRead(luzReversa) && GamePad.isCirclePressed()) {
    tone(bocina, frecBocina);
  } else if (!digitalRead(luzReversa) && !GamePad.isCirclePressed()) {
    noTone(bocina);
  }
}

#endif
