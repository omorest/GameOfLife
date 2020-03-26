/**
 * @file Cell.cc
 * @author Óscar Moreira Estévez (alu0101209067@ull.edu.es)
 * @version 2.0
 * @date 2020-03-26
 * Subject: Algoritmos y Estructuras de Datos Avanzadas
 * Practice: 3
 * Purpose: The game of life
 */

#include "../include/Cell.h"
#include "../include/Cell1.h"
#include "../include/Cell2.h"
#include "../include/Cell3.h"


//------- Constructor --------
Cell::Cell(int row, int col) {
    row_ = row;
    col_ = col;
    neightborsLive_ = 0;
}



//---- Destructor ----
Cell::~Cell() {
}



//------------- Methods -------------------
Cell* Cell::createCelula(int typeCell, int row, int col) {
  Cell* newCell;

  switch (typeCell) {
    case 0:
      newCell = new Cell(row, col);
      break;
    
    case 1:
      newCell = new Cell1(row, col);
      break;

    case 2:
      newCell = new Cell2(row, col);
      break;

    case 3:
      newCell = new Cell3(row, col);
      break;

    default:
      cout << "Este tipo de celula no se acepta" << endl;
      break;
  }

  return newCell;
}



int Cell::getState() const {
  return 0;
}


// Reglas para renacer
int Cell::updateState() { 
  if (neightborsLive_ == 3)
    return 1;

  else if (neightborsLive_ == 3 || neightborsLive_ == 6 || neightborsLive_ == 8)
    return 2;

  else if (neightborsLive_ == 3 || neightborsLive_ == 4 || neightborsLive_ == 6)
    return 3;  

  else {
    return 0;
  }
}



int Cell::countNeightbors(Board& board) {
  neightborsLive_ = 0;

  for (int i = row_ - 1; i <= row_ + 1; i++) {
    for (int j = col_ - 1; j <= col_ + 1; j++) {
      if (board[i][j] -> getState() != 0)
        neightborsLive_++;
    }
  }

  if (getState() != 0)
    neightborsLive_ -= 1; 
  
  return neightborsLive_;
}



ostream& Cell::show(std::ostream& os) const
{
  os << "_ ";
  return os;
}