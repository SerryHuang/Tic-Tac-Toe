#include"pre.h"
void printfboard(int board[][BOARD])
{
	int count = 1;
	for (int i = 0;i < BOARD;i++)
	{
		for (int j = 0;j < BOARD;j++)
		{
			if (board[i][j] == EMPTY)
				printf("%3d", count);
			else
				printf("%3c", board[i][j]);
			count++;
		}
		printf("\n");
	}
}