#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 循环结构
// do-while
// 循环体至少执行一次
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
// 求正整数是几位数
//int main()
//{
//	int num = 0;
//	int cnt = 0;
//	scanf("%d", &num);
//	//while (num)//如果num=0，就不执行了
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

// break和continue
//

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		//if (i == 5)
//			//break;//break的作用是跳出循环，不管后面循环还有多少次
//			//	//只要break被执行，循环就会直接终止
//		//	//continue;//继续;跳过本次循环后面的代码，开始下一次循环
//		//printf("%d ", i++);
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

// for循环的初始化，判断，循环三个表达式都可以省略
// 但是判断部分省略，要注意：如果省略了表示判断部分恒为真
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

// 练习
// 找出100-200直接的素数
// 用2~i-1去判断
//
//#include<math.h>
//int main()
//{
//	//产生100~200之间的数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//假设是素数
//		int j = 0;
//		//for (j = 2; j < i; j++)
//		for (j = 2; j < sqrt(i); j++)
//		//sqrt(i)对i开平方，需要math.h
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//判断不是素数
//				break;//终止
//			}
//		}
//		if (flag == 1)//是素数
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

// goto语句
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

// 猜数字
//
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("************************\n");
//	printf("*********猜数字*********\n");
//	printf("****1.play    0.exit****\n");
//	printf("************************\n");
//}
//
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int guess = 0;
//	int count = 5;
//	//printf("数字是%d\n",ret);
//	while (count)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//		count--;
//	}
//	if (count == 0)
//	{
//		printf("次数用完，数字是%d\n", ret);
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
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("游戏开始\n");
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//打印素数
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

//最大公约数
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