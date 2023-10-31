#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char arr[ROWS][COLS], int rows, int cols, char set)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = set;
		}
	}
}

void DisplayBoard(char arr[ROWS][COLS], int row, int col)
{
	for (int i = 0; i <= 2*row+1; i++)
	{
		printf("-");
	}
	printf("\n");//"--------------"
	for (int i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i <= 2 * row + 1; i++)
	{
		printf("-");
	}
	printf("\n");//"--------------"
}

void SetMine(char arr[ROWS][COLS], int row, int col)
{
	int count = COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			count--;
		}
	}
}

int GetMineCount(char arr[ROWS][COLS], int x, int y)
{
	return arr[x][y - 1] + arr[x][y + 1] +
		arr[x - 1][y - 1] + arr[x - 1][y] + 
		arr[x - 1][y + 1] + arr[x + 1][y - 1] + 
		arr[x + 1][y] + arr[x + 1][y + 1] - 8 * '0';

}

void FindMineTool(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y)
{
	if (x >= 1 && x <= row && y >= 1 && y <= col)
	{
		if (show[x][y] == ' ')//当坐标是被标记过的安全区
		{
			return;//返回，结束
		}
		else if (GetMineCount(mine, x, y) != 0)//当坐标附件有雷时
		{
			show[x][y] = GetMineCount(mine, x, y) + '0';//显示雷的数量
			return;
		}
		show[x][y] = ' ';//附件无雷为安全区，用空格表示
		FindMineTool(mine, show, ROW, COL, x - 1, y - 1);
		FindMineTool(mine, show, ROW, COL, x - 1, y);
		FindMineTool(mine, show, ROW, COL, x - 1, y + 1);
		FindMineTool(mine, show, ROW, COL, x, y - 1);
		FindMineTool(mine, show, ROW, COL, x, y + 1);
		FindMineTool(mine, show, ROW, COL, x + 1, y - 1);
		FindMineTool(mine, show, ROW, COL, x + 1, y);
		FindMineTool(mine, show, ROW, COL, x + 1, y + 1);
	}
}

void FindMineStart(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int count = 1;
	int x = 0;
	int y = 0;
	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			if (GetMineCount(mine, x, y) == 0)
			{
				FindMineTool(mine, show, ROW, COL, x, y);
				count--;
			}
		}
	}
}

int FindMineWin(char show[ROWS][COLS], int row, int col)
{
	int count = 0;
	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= col; j++)
		{
			if (show[i][j] == '*')
				count++;
		}
	}
	return count;
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	while (FindMineWin(show, ROW, COL) > COUNT)
	{
		printf("请输入坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] == '*')
			{
				if (mine[x][y] == '1')
				{
					printf("你被炸死了\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				else
				{
					// 扫雷工具:
					// 显示坐标周围的雷的数量
					// 如果数量为0，就以坐标周围的8个点为原点
					// 扩散扫雷，直到附近有雷为止
					//
					FindMineTool(mine, show, ROW, COL, x, y);
					DisplayBoard(show, ROW, COL);
				}
			}
			else
			{
				printf("重复坐标\n");
			}
		}
		else
		{
			printf("非法坐标\n");
		}
	}
	if (FindMineWin(show, ROW, COL) == COUNT)
	{
		printf("游戏通关\n");
		DisplayBoard(mine, ROW, COL);
	}
}