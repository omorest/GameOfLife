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
  tablero[0]->setEstado(1);
  tablero.write();
  exit(1);
  return 0;
}