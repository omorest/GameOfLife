#include "../include/Tablero.h"

//--------- Constructor y Destructor---------------
Tablero::Tablero(int rows, int cols) {
  rows_ = rows;
  cols_ = cols;

  malla_ = new Celula* [(rows_ + 2) * (cols_ + 2)];

  for (int i = 0; i < rows_ + 2 ; i++) {
    for (int j = 0; j < cols_ + 2; j++)
      malla_[pos(i,j)] = new Celula;    
  }  
}

Tablero::~Tablero() {
  for (int i = 0; i < rows_ + 2 ; i++) {
    for (int j = 0; j < cols_ + 2; j++)
      delete[] malla_[pos(i,j)]; 
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

void Tablero::play(int turns) {
  int i = 0;

  while (i < turns) {
    for (int i = 0; i < rows_ + 2 ; i++) {
      for (int j = 0; j < cols_ + 2; j++)
        malla_[pos(i,j)]->contarVecinas(*this);    
    }  

    for (int i = 0; i < rows_ + 2 ; i++) {
      for (int j = 0; j < cols_ + 2; j++)
        malla_[pos(i,j)]->actualizarEstado();    
    }

    write();
  }
}



Celula* Tablero::operator[] (const int position) {
  return malla_[position];
}

Celula* Tablero::position (int i, int j) {
  i += 1;
  j += 1;

  return malla_[pos(i,j)];
}


//---------------------------------------------------
void Tablero::write() {
  for (int i = 0; i < rows_ + 2; i++) {
    for (int j = 0; j < cols_ + 2; j++) {
      cout << malla_[pos(i,j)]->getEstado();
    }
    cout << endl;    
  }
}


//------------------ Private -------------------------
int Tablero::pos(int row, int col) {
  return row * (rows_ + 2) + col;
}