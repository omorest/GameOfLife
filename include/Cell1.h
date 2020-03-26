/**
 * @file Cell1.h
 * @author Óscar Moreira Estévez (alu0101209067@ull.edu.es)
 * @version 2.0
 * @date 2020-03-26
 * Subject: Algoritmos y Estructuras de Datos Avanzadas
 * Practice: 3
 * Purpose: The game of life
 */

#ifndef CELL1
#define CELL1

#include "Cell.h"

using namespace std;

class Cell1 : public Cell {
	public:
		Cell1(int row, int col);

		int updateStatus(void);
		int getState(void) const;
		std::ostream& show(std::ostream& os) const;
};
#endif