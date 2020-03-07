#include <iostream>
#include "include/Tablero.h"

int main() {

  int rows, cols;

  cout << "Introduzca el tamaño deseado del tablero" << endl;
  cout << "Numero filas : " << endl;
  cin >> rows;
  cout << "Numero columnas : " << endl;
  cin >> cols;

  Tablero tablero(rows, cols);

  tablero.position(0,0)->setEstado(1);
  tablero.position(0,1)->setEstado(1);
  tablero.position(1,0)->setEstado(1);
  tablero.position(1,2)->setEstado(1);

  cout << tablero.position(1,2)->actualizarEstado();
  


  exit(1);
  return 0;
}