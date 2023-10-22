#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

// 打印3的倍数的数
// 写一个代码打印1-100之间所有3的倍数的数字
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

// 从大到小输出
// 写代码将三个整数数按从大到小输出
// 例如：
// 输入：2 3 1
// 输出：3 2 1
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

// 打印素数
// 写一个代码：打印100~200之间的素数
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

// 打印闰年
// 打印1000年到2000年之间的闰年
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

// 最大公约数
// 给定两个数，求这两个数的最大公约数
// 例如：
// 输入：20 40 
// 输出：20
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);//输入两个数
//	//辗转相除法
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}

//猜数字
#include<stdlib.h>
#include<time.h>
void menu()//菜单函数
{
	printf("**********猜数字***********\n");
	printf("******1.play   0.exit******\n");
	printf("***************************\n");
}

//time()返回值是time_t -- long long int
//srand要的返回值是unsigned int

void game()//游戏函数
{
	//1.生成随机数 0~100
	//RAND_MAX;//需要stdlib.h 32767
	//srand((unsigned int)time(NULL));//不能频繁调用
	//要给srand传递一个变化的值，计算机上的时间是时刻发生变化的
	//time函数可以返回一个时间戳 需要time.h
	int ret = rand() % 100 + 1;//可以生成随机数，范围0~100
	//printf("%d\n", ret);//显示随机值
	//2.猜数字
	while (1)
	{
		int guess = 0;
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess > ret)
			printf("猜大了\n");
		else if (guess < ret)
			printf("猜小了\n");
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//主函数调用一次
	do
	{
		menu();//菜单
		printf("请输入:>");//操作提示
		scanf("%d", &input);//输入指令
		switch (input)//分支
		{
		case 1:
			game();//开始游戏
			break;
		case 0:
			printf("退出游戏\n");//结束游戏，input为0 while循环结束
			break;
		default:
			printf("选择错误\n");//input不为0 while循环继续，重新输入
			break;
		}
	} while (input);
	return 0;
}