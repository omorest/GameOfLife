/**
 * @file Cell2.h
 * @author Óscar Moreira Estévez (alu0101209067@ull.edu.es)
 * @version 2.0
 * @date 2020-03-26
 * Subject: Algoritmos y Estructuras de Datos Avanzadas
 * Practice: 3
 * Purpose: The game of life
 */

#ifndef CELL2
#define CELL2

#include "Cell.h"

using namespace std;

class Cell2 : public Cell{
  public:
    Cell2(int row, int col);

    int updateState(void);
    int getState(void) const;
    ostream& show(ostream& os) const;
};
#endif