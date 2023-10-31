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
		if (show[x][y] == ' ')//�������Ǳ���ǹ��İ�ȫ��
		{
			return;//���أ�����
		}
		else if (GetMineCount(mine, x, y) != 0)//�����긽������ʱ
		{
			show[x][y] = GetMineCount(mine, x, y) + '0';//��ʾ�׵�����
			return;
		}
		show[x][y] = ' ';//��������Ϊ��ȫ�����ÿո��ʾ
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
		printf("����������:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] == '*')
			{
				if (mine[x][y] == '1')
				{
					printf("�㱻ը����\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				else
				{
					// ɨ�׹���:
					// ��ʾ������Χ���׵�����
					// �������Ϊ0������������Χ��8����Ϊԭ��
					// ��ɢɨ�ף�ֱ����������Ϊֹ
					//
					FindMineTool(mine, show, ROW, COL, x, y);
					DisplayBoard(show, ROW, COL);
				}
			}
			else
			{
				printf("�ظ�����\n");
			}
		}
		else
		{
			printf("�Ƿ�����\n");
		}
	}
	if (FindMineWin(show, ROW, COL) == COUNT)
	{
		printf("��Ϸͨ��\n");
		DisplayBoard(mine, ROW, COL);
	}
}