#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"pre.h"
int check = 0;
int main(void)
{
	int board[BOARD][BOARD];
	int virtual[BOARD][BOARD] = { {1,2,3,4,5},{6,7,8,9,10},
		{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
	int PLYINPUT, COMINPUT, plycheck;
	char changePlayer = PLAYER;
	originalboard(board);
	do
	{
		if (check == 1)
			break;
		else if (changePlayer == PLAYER)
		{
			printf("ª±®a %c ½Ð¿é¤J¼Æ¦r(1-25): ", changePlayer);
			scanf("%d", &PLYINPUT);
			plycheck = playerenter(virtual, board, PLYINPUT);
			while (plycheck == 1)
			{
				printf("輸入錯誤，或該位址已被佔據，請重新輸入數字: ");
				scanf("%d", &PLYINPUT);
				plycheck = playerenter(PLYINPUT, virtual, board);
			}
			correct(board, &check);
		}
		else
		{
			printf("ª±®a %c ¿é¤J: \n", changePlayer);
			computerenter(virtual, board);
			correct(board, &check);
		}
		changePlayer = (changePlayer == PLAYER) ? COMPUTER : PLAYER;
	} while (check == 0);
	system("pause");
	return 0;
}

int playerenter(int PLYINPUT, int virtual[][BOARD], int board[][BOARD])
{
	if (PLYINPUT < 1 || PLYINPUT>25)
		return 1;
	else
	{
		virtual[BOARD][BOARD];
		for (int i = 0;i < BOARD;i++)
		{
			for (int j = 0;j < BOARD;j++)
			{
				if (virtual[i][j] == PLYINPUT)
				{
					if (board[i][j] != EMPTY)
						return 1;
					else
					{
						board[i][j] = PLAYER;
						return 0;
					}
				}
			}
		}
	}
}

void computerenter(int virtual[][BOARD], int board[][BOARD])
{
	int COMINPUT, flag = 0;
	srand((unsigned)time(NULL));
	do
	{
		COMINPUT = rand() % 25 + 1;
		virtual[BOARD][BOARD];
		for (int i = 0;i < BOARD;i++)
		{
			for (int j = 0;j < BOARD;j++)
			{
				if (virtual[i][j] == COMINPUT && board[i][j] == EMPTY)
				{
					board[i][j] = COMPUTER;
					flag = 1;
				}
			}
		}
	} while (flag == 0);
	printfboard(board);
}

void correct(int board[][BOARD], int* check)
{
	for (int i = 0;i < BOARD;i++)
	{
		if (board[i][0] == PLAYER && board[i][1] == PLAYER && board[i][2] == PLAYER && board[i][3] == PLAYER && board[i][4] == PLAYER)
		{
			printf("%c ª±®aÀò³Ó!!\n", PLAYER);
			printfboard(board);
			printf("¹CÀ¸µ²§ô\n");
			*check = 1;
		}
		if (board[i][0] == COMPUTER && board[i][1] == COMPUTER && board[i][2] == COMPUTER && board[i][3] == COMPUTER && board[i][4] == COMPUTER)
		{
			printf("%c ª±®aÀò³Ó!!\n", COMPUTER);
			printfboard(board);
			printf("¹CÀ¸µ²§ô\n");
			*check = 1;
		}
	}
	for (int i = 0;i < BOARD;i++)
	{
		if (board[0][i] == PLAYER && board[1][i] == PLAYER && board[2][i] == PLAYER && board[3][i] == PLAYER && board[4][i] == PLAYER)
		{
			printf("%c ª±®aÀò³Ó!!\n", PLAYER);
			printfboard(board);
			printf("¹CÀ¸µ²§ô\n");
			*check = 1;
		}
		else if (board[0][i] == COMPUTER && board[1][i] == COMPUTER && board[2][i] == COMPUTER && board[3][i] == COMPUTER && board[4][i] == COMPUTER)
		{
			printf("%c ª±®aÀò³Ó!!\n", COMPUTER);
			printfboard(board);
			printf("¹CÀ¸µ²§ô\n");
			*check = 1;
		}
	}
	if (board[0][0] == PLAYER && board[1][1] == PLAYER && board[2][2] == PLAYER && board[3][3] == PLAYER && board[4][4] == PLAYER)
	{
		printf("%c ª±®aÀò³Ó!!\n", PLAYER);
		printfboard(board);
		printf("¹CÀ¸µ²§ô\n");
		*check = 1;
	}
	else if (board[0][4] == PLAYER && board[1][3] == PLAYER && board[2][2] == PLAYER && board[3][1] == PLAYER && board[4][0] == PLAYER)
	{
		printf("%c ª±®aÀò³Ó!!\n", PLAYER);
		printfboard(board);
		printf("¹CÀ¸µ²§ô\n");
		*check = 1;
	}
	else if (board[0][0] == COMPUTER && board[1][1] == COMPUTER && board[2][2] == COMPUTER && board[3][3] == COMPUTER && board[4][4] == COMPUTER)
	{
		printf("%c ª±®aÀò³Ó!!\n", COMPUTER);
		printfboard(board);
		printf("¹CÀ¸µ²§ô\n");
		*check = 1;
	}
	else if (board[0][4] == COMPUTER && board[1][3] == COMPUTER && board[2][2] == COMPUTER && board[3][1] == COMPUTER && board[4][0] == COMPUTER)
	{
		printf("%c ª±®aÀò³Ó!!\n", COMPUTER);
		printfboard(board);
		printf("¹CÀ¸µ²§ô\n");
		*check = 1;
	}
}
