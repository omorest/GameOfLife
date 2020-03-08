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

  //tablero.position(0,0)->setEstado(1);
  tablero.position(2,2)->setEstado(1);
  tablero.position(2,3)->setEstado(1);
  tablero.position(2,4)->setEstado(1);

  tablero.position(3,2)->setEstado(1);
  tablero.position(3,3)->setEstado(1);
  tablero.position(3,4)->setEstado(1);

  tablero.position(4,2)->setEstado(1);
  tablero.position(4,3)->setEstado(1);
  tablero.position(4,4)->setEstado(1);
  //tablero.write();

  //cout << tablero.position(0,0)->contarVecinas(tablero);
  
  tablero.play(5);

  //exit(0);
  return 0;
}