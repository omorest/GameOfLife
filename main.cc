#include <iostream>
#include <cassert>
#include "include/Board.h"


int main() {

  int rows, cols, liveCells, numberOfTurns;

  cout << "Introduzca el tamaño deseado del tablero" << endl;
  cout << "Numero filas : " << endl;
  cin >> rows;
  cout << "Numero columnas : " << endl;
  cin >> cols;

  cout << "\nIndique el número de celulas vivas quiere para comenzar: " << endl;
  cin >> liveCells;
  assert(("El numero de celulas vivas que quiere es mayor al tablero", liveCells <= rows * cols));

  cout << "\nIndique el numero de turnos que quiere: " << endl;
  cin >> numberOfTurns;
  
  Board tablero(rows, cols);

  int turn = 0;
  int type, i, j;

  while (turn < liveCells) {
    cout << "Indique la posicion de la celula viva numero " << turn + 1 << endl;
    cin >> type >> i >> j;
    tablero.activateCell(type, i, j) ;

    turn++;
  }

  
  tablero.play(numberOfTurns);
  return 0;
}