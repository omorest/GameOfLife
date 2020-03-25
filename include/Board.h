#pragma once
#include <cassert>
#include <thread>         // std::this_thread::sleep_for
#include <chrono>
#include "Cell.h"
//Librería Vector creada en la práctica 1
#include "Vector.h"
#include <vector>


using namespace std;

class Cell;

class Board {
  private:
    Vector<Vector<Cell*>> table_;

    int rows_, cols_;

  public:
    Board(int rows, int cols);
    ~Board();

    int getRows();
    int getCols();

    void play(int turns);
    void write();

		Vector<Cell*> operator[](const int position) {
			return table_[position];
		}
};