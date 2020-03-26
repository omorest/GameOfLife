#include "../include/Cell2.h"


//-------- Constructor --------------
Cell2::Cell2(int row, int col) : Cell(row, col) {}



//Reglas de seguir viva o morir
int Cell2::updateStatus(void) {
  if (neightborsLive_ == 2 || neightborsLive_ == 4 || neightborsLive_ == 5) {
    return 3;
  }
  else {
    return 0;
  } 
}



int Cell2::getState(void) const {
  return 2;
}



ostream& Cell2::show(ostream& os) const {
  os << "2 ";

  return os;
}
