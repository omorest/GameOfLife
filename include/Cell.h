#pragma once
#include <iostream>
#include "../include/Board.h"

class Board;

class Cell {
	private:
		int row_, col_;
		int state_;
		int neightborsLive_;

	public:

		Cell(int row, int col);
    ~Cell();

    int getState() const;
    int setState(int newState);

    int updateState();
    int countNeightbors(Board& board);
};