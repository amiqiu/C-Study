#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// ѭ���ṹ
// do-while
// ѭ��������ִ��һ��
//
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i++);
//	} while(i<=10);
//	return 0;
//}
// 
// ���������Ǽ�λ��
//int main()
//{
//	int num = 0;
//	int cnt = 0;
//	scanf("%d", &num);
//	//while (num)//���num=0���Ͳ�ִ����
//	//{
//	//	;
//	//}
//	do
//	{
//		cnt++;
//		num /= 10;
//	} while (num);
//	printf("%d", cnt);
//	return 0;
//}

// break��continue
//

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		//if (i == 5)
//			//break;//break������������ѭ�������ܺ���ѭ�����ж��ٴ�
//			//	//ֻҪbreak��ִ�У�ѭ���ͻ�ֱ����ֹ
//		//	//continue;//����;��������ѭ������Ĵ��룬��ʼ��һ��ѭ��
//		//printf("%d ", i++);
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

// forѭ���ĳ�ʼ�����жϣ�ѭ���������ʽ������ʡ��
// �����жϲ���ʡ�ԣ�Ҫע�⣺���ʡ���˱�ʾ�жϲ��ֺ�Ϊ��
//
//int main()
//{
//	for (int i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			//break;
//			continue;
//		printf("%d ", i);
//		
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			//break;
//			continue;
//		printf("%d ", i++);
//	} while(i<=10);
//	return 0;
//}

// ��ϰ
// �ҳ�100-200ֱ�ӵ�����
// ��2~i-1ȥ�ж�
//
//#include<math.h>
//int main()
//{
//	//����100~200֮�����
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//����������
//		int j = 0;
//		//for (j = 2; j < i; j++)
//		for (j = 2; j < sqrt(i); j++)
//		//sqrt(i)��i��ƽ������Ҫmath.h
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//�жϲ�������
//				break;//��ֹ
//			}
//		}
//		if (flag == 1)//������
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

// goto���
//
//int main()
//{
//	printf("hehe\n");
//	goto flag;
//	printf("haha\n");
//flag:
//	printf("heihei\n");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 5; i++)
//	{
//		for (; j < 5; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

// ������
//
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("************************\n");
//	printf("*********������*********\n");
//	printf("****1.play    0.exit****\n");
//	printf("************************\n");
//}
//
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int guess = 0;
//	int count = 5;
//	//printf("������%d\n",ret);
//	while (count)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//		count--;
//	}
//	if (count == 0)
//	{
//		printf("�������꣬������%d\n", ret);
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("��Ϸ��ʼ\n");
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//��ӡ����
//#include<math.h>
//int main()
//{
//	int count = 0;
//	for (int i = 100; i <= 200; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j < sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//���Լ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}