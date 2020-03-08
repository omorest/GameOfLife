#include "../include/Celula.h"

//--------- Constructor y destructor ------------
Celula::Celula(int row, int col) {
  row_ = row;
  col_ = col;
  estado_ = 0;
  vecinasVivas_ = 0;
}


Celula::~Celula() {
}


//------------------------------------------------
int Celula::getEstado() const {
  return estado_;
}

int Celula::setEstado(int newState) {
  estado_ = newState;

  return estado_;
}

int Celula::actualizarEstado() {
  if (estado_ == 0 && vecinasVivas_ == 3)
    estado_ = 1;  


  if (estado_ == 1 && (vecinasVivas_ == 2 || vecinasVivas_ == 3)) {
    estado_ = 1;
  }
  else {
    estado_ = 0;
  }

  return estado_;  
}


int Celula::contarVecinas(Tablero& tablero) {
  vecinasVivas_ = 0;

  for (int i = row_ - 1; i <= row_ + 1; i++) {
    for (int j = col_ - 1; j <= col_ + 1; j++) {
      if (tablero[i * (tablero.getRows() + 2) + j] -> estado_ == 1) {
        vecinasVivas_++; 
      }                       
    }        
  }
  if (estado_ == 1)
    vecinasVivas_ -= 1; 

  return vecinasVivas_;
}