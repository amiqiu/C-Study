#define _CRT_SECURE_NO_WARNINGS 1

// 1.在地图上布置10个雷
// 2.排查雷：如果位置是雷，就被炸死，游戏结束
//			不是雷，就统计这个坐标周围的雷的个数，并显示
// 3.如果把所有非雷位置都找出来，排雷成功，游戏结束
//
#include "game.h"
void menu()
{
	printf("**************************\n");
	printf("**********扫  雷**********\n");
	printf("*****1.play    0.exit*****\n");
	printf("**************************\n");

}

void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];

	//初始化函数
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘
	DisplayBoard(show, ROW, COL);

	//布置雷
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//扫雷
	FindMine(mine, show, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("游戏开始\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}

	} while (input);
	return 0;
}