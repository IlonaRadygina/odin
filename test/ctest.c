#include "ctest.h"
#include "CheckWin.h"


CTEST(checkWin, win_combination)
{
	
	int board[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 0}}; 
	
	ASSERT_EQUAL(1, checkWin(board));
}

