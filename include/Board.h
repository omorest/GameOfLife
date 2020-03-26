/**
 * @file Board.h
 * @author Óscar Moreira Estévez (alu0101209067@ull.edu.es)
 * @version 2.0
 * @date 2020-03-26
 * Subject: Algoritmos y Estructuras de Datos Avanzadas
 * Practice: 3
 * Purpose: The game of life
 */

#ifndef BOARD
#define BOARD

#include <cassert>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>
#include "Cell.h"
#include <vector>

using namespace std;

class Cell;

class Board {
  private:    
    vector<vector<Cell*>> table_;

    int rows_, cols_;

  public:
    Board(int rows, int cols);
    ~Board();

    int getRows();
    int getCols();

    void play(int turns);
    void write();
    void activateCell(int type, int row, int col);

		vector<Cell*> operator[](const int position);
};
#endif