#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("**************************\n");
	printf("*********ɨ    ��*********\n");
	printf("*****1.play    0.exit*****\n");
	printf("**************************\n");

}

void game()
{
	//�����������飬һ�����ڲ��ף�һ��������ʾ
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	//��ʼ��
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//����
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//���ֿ���һ�鰲ȫ��
	FindMineStart(mine, show, ROW, COL);
	//��ʾ����
	DisplayBoard(show, ROW, COL);
	//��ʼɨ��
	FindMine(mine, show, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("������ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��Ϸ��ʼ��\n");
			game();
			break;
		case 0://����0 do while �����ж� 0 ����ѭ��
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}

//���ֲ���-����ʵ��
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