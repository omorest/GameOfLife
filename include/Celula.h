#pragma once
#include <iostream>
#include <string>

#include "Tablero.h"

using namespace std;

class Tablero;

class Celula {
  private:
    int row_, col_;
    int estado_;
    int vecinasVivas_;

  public:
    Celula(int row, int col);
    ~Celula();

    int getEstado() const;
    int setEstado(int);

    int actualizarEstado();
    int contarVecinas(Tablero& tablero);
};