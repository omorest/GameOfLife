/**
 * @file Cell3.h
 * @author Óscar Moreira Estévez (alu0101209067@ull.edu.es)
 * @version 2.0
 * @date 2020-03-26
 * Subject: Algoritmos y Estructuras de Datos Avanzadas
 * Practice: 3
 * Purpose: The game of life
 */

#include "../include/Cell3.h"

//-------- Constructor ---------
Cell3::Cell3(int row, int col) : Cell(row, col) 
{}



//---- Reglas de seguir viva o morir -----
int Cell3::updateStatus(void) {
  if (neightborsLive_ == 5 || neightborsLive_ == 1) {
    return 3;
  } 
  else{
    return 0;
  } 
}



int Cell3::getState(void) const {
  return 3;
}



ostream& Cell3::show(ostream& os) const {
  os << "3 ";

  return os;
}
