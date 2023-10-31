#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("**************************\n");
	printf("*********扫    雷*********\n");
	printf("*****1.play    0.exit*****\n");
	printf("**************************\n");

}

void game()
{
	//创建两个数组，一个用于布雷，一个用于显示
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	//初始化
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//布雷
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//开局开辟一块安全区
	FindMineStart(mine, show, ROW, COL);
	//显示棋盘
	DisplayBoard(show, ROW, COL);
	//开始扫雷
	FindMine(mine, show, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("游戏开始！\n");
			game();
			break;
		case 0://输入0 do while 条件判定 0 结束循环
			printf("退出游戏！\n");
			break;
		default:
			printf("选择错误！\n");
			break;
		}
	} while (input);
	return 0;
}

//二分查找-函数实现
//#include<stdio.h>
//int bin_search(int arr[], int left, int right, int key)
//{
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] == key)
//		{
//			return mid;
//			break;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			right = mid - 1;
//		}
//	}
//	if (left > right)
//		return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 0;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &key);
//	int ret = bin_search(arr, left, right, key);
//	printf("%d", ret);
//	return 0;
//}