#define _CRT_SECURE_NO_WARNINGS 1

// 1.�ڵ�ͼ�ϲ���10����
// 2.�Ų��ף����λ�����ף��ͱ�ը������Ϸ����
//			�����ף���ͳ�����������Χ���׵ĸ���������ʾ
// 3.��������з���λ�ö��ҳ��������׳ɹ�����Ϸ����
//
#include "game.h"
void menu()
{
	printf("**************************\n");
	printf("**********ɨ  ��**********\n");
	printf("*****1.play    0.exit*****\n");
	printf("**************************\n");

}

void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];

	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	DisplayBoard(show, ROW, COL);

	//������
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//ɨ��
	FindMine(mine, show, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��Ϸ��ʼ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}

	} while (input);
	return 0;
}