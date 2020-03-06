#include "../include/Tablero.h"

Tablero::Tablero(int rows, int cols) {
  rows_ = rows;
  cols_ = cols;

  malla_ = new Celula* [(rows_ + 2) * (cols_ + 2)];

  for (int i = 0; i < rows_ + 2 ; i++) {
    for (int j = 0; j < cols_ + 2; j++) {
      malla_[i * (rows_ + 2) + j] = new Celula;
    }    
  }  
}

Tablero::~Tablero() {
  for (int i = 0; i < rows_ + 2 ; i++) {
    for (int j = 0; j < cols_ + 2; j++) {
      delete[] malla_[i * (rows_ + 2) + j];
    } 
  }

  delete[] malla_;
}


//---------------------------------------------------

int Tablero::getRows() {
  return rows_;
}
int Tablero::getCols() {
  return cols_;
}




Celula* Tablero::operator[] (const int position) {
  return malla_[position];
}

//---------------------------------------------------
