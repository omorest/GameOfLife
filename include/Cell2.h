#ifndef CELL2
#define CELL2

#include "Cell.h"


using namespace std;

class Cell2 : public Cell{
	public:
		Cell2(int row, int col);

		int updateStatus(void);
  	int getState(void) const;
  	ostream& show(ostream& os) const;
};
#endif