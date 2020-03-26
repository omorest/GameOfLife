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