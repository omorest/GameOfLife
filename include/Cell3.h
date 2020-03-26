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