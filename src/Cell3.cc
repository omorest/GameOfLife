#include "../include/Cell3.h"

Cell3::Cell3(int row, int col) : Cell(row, col) 
{}



int Cell3::updateStatus(void) {
  if (neightborsLive_ == 5 || neightborsLive_ == 1) {
    return 3;
  } 
  else{
    return 0;
  } 
}



int Cell3::getState(void) const {
  return 3;
}



ostream& Cell3::show(ostream& os) const {
  os << "3 ";

  return os;
}
