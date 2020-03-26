#ifndef CELL
#define CELL

#include <iostream>
#include "Board.h"


using namespace std;

class Board;

class Cell {
	protected:
    int row_, col_;
    int neightborsLive_;

	public:
    Cell(int row, int col);
    ~Cell();

    static Cell* createCelula(int typeCell, int row, int col);
    virtual int getState() const;

    virtual int updateState();
    virtual int countNeightbors(Board& board);

    virtual ostream& show(ostream& os) const;
};
#endif