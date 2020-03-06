#include "../include/Celula.h"

Celula::Celula() {
}

Celula::Celula(int row, int col) {
  row_ = row + 1;
  col_ = col + 1;
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

// int Celula::actualizarEstado() {

// }

int Celula::contarVecinas(Tablero& tablero) {
  vecinasVivas_ = 0;

  for (int i = row_ - 1; i <= row_ + 1; i++) {
    for (int j = col_ - 1; j <= col_ + 1; j++) {
      if (tablero[i * tablero.getRows() + j] -> estado_ == 1)
        vecinasVivas_++;    
    }    
  }
  return vecinasVivas_;
}


ostream& operator<< (ostream& os, const Celula& celula) {
   if (celula.getEstado() == 0) {
     os << celula.getEstado();
   }
   else {
     os << celula.getEstado();
   }
  return os;
}
