#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

// ��ӡ3�ı�������
// дһ�������ӡ1-100֮������3�ı���������
//
//
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

// �Ӵ�С���
// д���뽫�������������Ӵ�С���
// ���磺
// ���룺2 3 1
// �����3 2 1
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		a = a ^ b;
//		b = a ^ b;
//		a = a ^ b;
//	}
//	if (a < c)
//	{
//		a = a ^ c;
//		c = a ^ c;
//		a = a ^ c;
//	}
//	if (b < c)
//	{
//		b = b ^ c;
//		c = b ^ c;
//		b = b ^ c;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

// ��ӡ����
// дһ�����룺��ӡ100~200֮�������
//
//
//int main()
//{
//	for (int i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

// ��ӡ����
// ��ӡ1000�굽2000��֮�������
//
//int main()
//{
//	for (int year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

// ���Լ��
// ���������������������������Լ��
// ���磺
// ���룺20 40 
// �����20
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);//����������
//	//շת�����
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}

//������
#include<stdlib.h>
#include<time.h>
void menu()//�˵�����
{
	printf("**********������***********\n");
	printf("******1.play   0.exit******\n");
	printf("***************************\n");
}

//time()����ֵ��time_t -- long long int
//srandҪ�ķ���ֵ��unsigned int

void game()//��Ϸ����
{
	//1.��������� 0~100
	//RAND_MAX;//��Ҫstdlib.h 32767
	//srand((unsigned int)time(NULL));//����Ƶ������
	//Ҫ��srand����һ���仯��ֵ��������ϵ�ʱ����ʱ�̷����仯��
	//time�������Է���һ��ʱ��� ��Ҫtime.h
	int ret = rand() % 100 + 1;//�����������������Χ0~100
	//printf("%d\n", ret);//��ʾ���ֵ
	//2.������
	while (1)
	{
		int guess = 0;
		printf("�������:>");
		scanf("%d", &guess);
		if (guess > ret)
			printf("�´���\n");
		else if (guess < ret)
			printf("��С��\n");
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//����������һ��
	do
	{
		menu();//�˵�
		printf("������:>");//������ʾ
		scanf("%d", &input);//����ָ��
		switch (input)//��֧
		{
		case 1:
			game();//��ʼ��Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");//������Ϸ��inputΪ0 whileѭ������
			break;
		default:
			printf("ѡ�����\n");//input��Ϊ0 whileѭ����������������
			break;
		}
	} while (input);
	return 0;
}