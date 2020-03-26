/**
 * @file Cell1.h
 * @author Óscar Moreira Estévez (alu0101209067@ull.edu.es)
 * @version 2.0
 * @date 2020-03-26
 * Subject: Algoritmos y Estructuras de Datos Avanzadas
 * Practice: 3
 * Purpose: The game of life
 */

#include "../include/Cell1.h"

//----------- Constructor ----------
Cell1::Cell1(int row, int col) : Cell(row, col) {}


//Regla para seguir viva morir
int Cell1::updateStatus(void) {
  if (neightborsLive_ == 2 || neightborsLive_ == 3) {
    return 1;
  }
  else {
    return 0;
  }  
}



int Cell1::getState(void) const {
  return 1;
}



ostream& Cell1::show(std::ostream& os) const {
  os << "1 ";

  return os;
}
