#include "../include/Tablero.h"

//--------- Constructor y Destructor---------------
Tablero::Tablero(int rows, int cols) {
  rows_ = rows;
  cols_ = cols;

  malla_ = new Celula* [(rows_ + 2) * (cols_ + 2)];

  for (int i = 0; i < rows_ + 2 ; i++) {
    for (int j = 0; j < cols_ + 2; j++)
      malla_[pos(i,j)] = new Celula(i,j);    
  }  
}

Tablero::~Tablero() {
  for (int i = 0; i < rows_ + 2 ; i++) {
    for (int j = 0; j < cols_ + 2; j++)
      delete[] malla_[pos(i,j)]; 
  }

  delete[] malla_;
}


//------------------Getters ----------------------------------
int Tablero::getRows() {
  return rows_;
}


int Tablero::getCols() {
  return cols_;
}


void Tablero::play(int turns) {
  int i = 0;

  cout << "\nEstado inicial del tablero" << endl;
  write();
  cout << endl << endl; 


  while (i < turns) {    
    int changeState = 0;
    
    cout << endl;
    cout << "Turno " << i + 1 << endl;
    
    for (int i = 1; i < rows_ + 1; i++) {
      for (int j = 1; j < cols_ + 1; j++)
        malla_[pos(i,j)]->contarVecinas(*this);    
    }  

    for (int i = 1; i < rows_ + 1 ; i++) {
      for (int j = 1; j < cols_ + 1; j++){
        int beforeState = 0;
        beforeState = malla_[pos(i,j)]->getEstado();

        malla_[pos(i,j)]->actualizarEstado();

        if (malla_[pos(i,j)]-> getEstado() != beforeState)
          changeState++;
      }     
    }  

    cout << "Cambios de estado: " << changeState << endl;
    std::this_thread::sleep_for (std::chrono::seconds(1));
    write();

    i++;
    
  }
}


Celula* Tablero::position (int i, int j) {
  assert(("¡¡La posicion que quiere no existe en el tablero!!", i + 1 <= rows_ && j + 1 <= cols_));
  return malla_[pos(i + 1, j + 1)];
}


void Tablero::write() {
  for (int i = 1; i < rows_ + 1; i++) {
    for (int j = 1; j < cols_ + 1; j++) {
      if (malla_[pos(i,j)]->getEstado() == 0) {
        cout << "_ ";
      }
      else {
        cout << "X ";
      } 
    }
    cout << endl;    
  }
}


Celula* Tablero::operator[] (const int position) {
  return malla_[position];
}

//------------------ Private -------------------------
int Tablero::pos(int row, int col) {
  return row * (cols_ + 2) + col;
}