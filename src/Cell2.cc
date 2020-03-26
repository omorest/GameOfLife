/**
 * @file Cell2.h
 * @author Óscar Moreira Estévez (alu0101209067@ull.edu.es)
 * @version 2.0
 * @date 2020-03-26
 * Subject: Algoritmos y Estructuras de Datos Avanzadas
 * Practice: 3
 * Purpose: The game of life
 */

#include "../include/Cell2.h"


//-------- Constructor --------------
Cell2::Cell2(int row, int col) : Cell(row, col) {}



//Reglas de seguir viva o morir
int Cell2::updateState(void) {
  if (neightborsLive_ == 2 || neightborsLive_ == 4 || neightborsLive_ == 5) {
    return 3;
  }
  else {
    return 0;
  } 
}



int Cell2::getState(void) const {
  return 2;
}



ostream& Cell2::show(ostream& os) const {
  os << "2 ";

  return os;
}
