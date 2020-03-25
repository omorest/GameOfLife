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

  for (int i = row_ - 1; i <= row_ + 1; i++) {
    for (int j = col_ - 1; j <= col_ + 1; j++) {
      if (board[i][j] -> state_ == 1)
        neightborsLive_++;
    }
  }

  if (state_ == 1)
    neightborsLive_ -= 1; 
  
  return neightborsLive_;
}