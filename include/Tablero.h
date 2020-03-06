#include <iostream>
#pragma once
#include "Celula.h"

using namespace std;

class Celula;

class Tablero {
  private:
    Celula** malla_;
    
    int rows_;
    int cols_;

  public:
    Tablero(int rows, int cols);
    ~Tablero();

    int getRows();
    int getCols();

    Celula* operator[] (int position);
  private:
    int pos(int row, int col);
};