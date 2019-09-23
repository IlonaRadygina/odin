#include "ctest.h"
#include "CheckWin.h"

CTEST(checkWin, correct_win_combination1)
{
	//Given
	int board[4][4] = {0}; 
	
	//When
	const int result = board [4][4];
	
	//Then
	const int expected = 0;
	
	ASSERT_EQUAL(expected, checkWin(board));
}

CTEST(checkWin, random_correct_combination1)
{
	//Given
	const int board[4][4] = {{13, 3, 10, 4}, {2, 14, 9, 1}, {15, 6, 12, 5}, {7, 11, 8, 0}}; 
	
	//When
	const int result = board;
	
	//Then
	const int expected = {{13, 3, 10, 4}, {2, 14, 9, 1}, {15, 6, 12, 5}, {7, 11, 8, 0}};
	
	ASSERT_EQUAL(expected, checkWin(board));
}

CTEST(checkWin, random_uncorrect_combination2)
{
	//Given
	int board[4][4] = {{13, 3, 10, 4}, {2, 6, 9, 1}, {15, 14, 12, 5}, {7, 11, 8, 0}};
	
	//When
	const int result = board; 
	
	//Then
	const int expected = {{13, 3, 10, 4}, {2, 6, 9, 1}, {15, 14, 12, 5}, {7, 11, 8, 0}};
	
	ASSERT_EQUAL(expected, checkWin(board));
}

CTEST(checkWin, uncorrect_15_14_combination)
{
	//Given
	int board[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 15, 14, 0}};
	
	//When
	const int result = board;
	
	//Then
	const int expected = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 15, 14, 0}};
	
	ASSERT_EQUAL(expected, checkWin(board));
}

CTEST(checkWin, correct_win_combination2)
{
	//Given
	int board[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 0}}; 
	
	//When
	const int result = board;
	
	//Then
	const int expected = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 0}};
	
	ASSERT_EQUAL(expectred, checkWin(board));
}

CTEST(checkWin, uncorrect_win_combination)
{
	//Given
	int board[4][4] = {{2, 1, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 0}};
	
	//When
	const int result = board;
	
	//Then
	const int expected =  {{2, 1, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 0}};
	
	ASSERT_EQUAL(checkWin(board));
}
