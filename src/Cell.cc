#include "../include/Cell.h"

Cell::Cell(int row, int col) {
    row_ = row;
    col_ = col;
    state_ = 0;
    neightborsLive_ = 0;
}

Cell::~Cell() {
}


int Cell::getState() const {
  return state_;
}



int Cell::setState(int newState) {
  state_ = newState;

  return state_;
}



int Cell::updateState() {
  if (state_ == 0 && neightborsLive_ == 3) {
    state_ = 1;
  }

  if (state_ == 1 && (neightborsLive_ == 2 || neightborsLive_ == 3)) {
    state_ = 1;
  }
  else {
    state_ = 0;
  }

  return state_;  
}



int Cell::countNeightbors(Board& board) {
  neightborsLive_ = 0;
  cout << "prueba 1" << endl;
  cout << "CELULA: " << row_ << " " << col_ << endl;

  for (int i = row_ - 1; i <= row_ + 1; i++) {
    cout << "i = " << i << endl;

    for (int j = col_ - 1; j <= col_ + 1; j++) {
      cout << "j = " << j << endl;
      cout << "vecina: "<< i << " " << j << endl;
      //cout << board[2][0]->getState() << endl;
      if (board[i][j] -> state_ == 1)
        neightborsLive_++;
    }
    cout << "sale del for i = " << i << endl;
    cout << "-------------------------"<< endl;
  }

  if (state_ == 1)
    neightborsLive_ -= 1; 

  cout << "prueba 4" << endl;
  return neightborsLive_;
}