/**
 * @file Cell3.h
 * @author Óscar Moreira Estévez (alu0101209067@ull.edu.es)
 * @version 2.0
 * @date 2020-03-26
 * Subject: Algoritmos y Estructuras de Datos Avanzadas
 * Practice: 3
 * Purpose: The game of life
 */

#ifndef CELL3
#define CELL3

#include "Cell.h"

using namespace std;

class Cell3 : public Cell  {
  public:
    Cell3(int row, int col);

    int updateStatus(void);
    int getState(void) const;
    ostream& show(ostream& os) const;
};
#endif