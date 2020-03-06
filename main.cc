#include <iostream>
#include "include/Tablero.h"

int main() {
  int n = 2;
  int m = 2;
  Tablero tablero(n,m);
  tablero[5]->setEstado(1);
  tablero.write();
  exit(1);
  return 0;
}