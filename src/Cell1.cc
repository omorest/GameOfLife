#include "../include/Cell1.h"

Cell1::Cell1(int row, int col) : Cell(row, col) 
{}



int Cell1::updateStatus(void) {
  if (neightborsLive_ == 2 || neightborsLive_ == 3) {
    return 1;
  }
  else {
    return 0;
  }  
}



int Cell1::getState(void) const {
  return 1;
}



ostream& Cell1::show(std::ostream& os) const {
  os << "1 ";

  return os;
}
