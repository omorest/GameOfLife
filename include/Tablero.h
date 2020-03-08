#pragma once
#include <iostream>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>
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

    void play(int turns);
    Celula* position (int i, int j);
    void write();

    Celula* operator[] (int position);
    
  private:
    int pos(int row, int col);
};