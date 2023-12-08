#include"pre.h"
void originalboard(int board[][BOARD])
{
	for (int i = 0;i < BOARD;i++)
		for (int j = 0;j < BOARD;j++)
			board[i][j] = EMPTY;
	printfboard(board);
}