#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//小乐乐走台阶
//fib(10) = fib(9) + fib(8)
//int fib(n)
//{
//	
//	if (n <= 2)
//	{
//		return 2;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int m = fib(n);
//	return 0;
//}

//有一个整数序列（可能有重复的整数），现在删除指定的某一个整数，
//输出删除指定数字之后的序列，序列中未被删除数字的前后位置没有发生变化
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[20];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del = 0;
//	scanf("%d", &del);
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//输入n个成绩，换行输出n个成绩中最高分数和最低分数的差
//98 100 99 97 95 99 98 97 96 100
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[30];
//	int i = 0;
//	int max = 0;
//	int min = 100;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	//int max = arr[0];
//	//int min = arr[0];
//	//for (i = 1; i < n; i++)
//	//{
//	//	if (arr[i] > max)
//	//	{
//	//		max = arr[i];
//	//	}
//	//	if (arr[i] < min)
//	//	{
//	//		min = arr[i];
//	//	}
//	//}
//	printf("%d", (max - min));
//	return 0;
//}

//完成字母大小写转换，有一个字符，判断它是否为大写字母，如果是，
//将它转换成小写字母；反之则转换为大写字母
//
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)
//	{
//		//if (ch >= 'a' && ch <= 'z')
//		//{
//		//	printf("%c\n", ch - 32);
//		//}
//		//else if (ch >= 'A' && ch <= 'Z')
//		//{
//		//	printf("%c\n", ch + 32);
//		//}
//		if (islower(ch))
//			printf("%c\n", toupper(ch));
//		else if (isupper(ch))
//			printf("%c\n", tolower(ch));
//	}
//	return 0;
//}

//判断输入的字符是不是字母
//int main()
//{
//	char ch = 0;
//	//%c前面加空格
//	//跳到下一个字母前的所有空白字符
//	while (scanf(" %c", &ch) != EOF)
//	{
//		//if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//		if(isalpha(ch))
//		{
//			printf("%c is an alphabet.\n", ch);
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n", ch);
//		}
//
//		//getchar();
//	}
//	return 0;
//}

//最高分
//int main()
//{
//	int i = 0;
//	int max = 0;
//	int score = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &score);
//		if (score > max)
//			max = score;
//	}
//	printf("%d\n", max);
//	return 0;
//}

//变种水仙花
#include <math.h>
int main()
{
	int i = 0;
	for (i = 10000; i < 100000; i++)
	{
		//if (i == (i / 10000) * (i % 10000) + (i / 1000) * (i % 1000) + (i / 100) * (i % 100) + (i / 10) * (i % 10))
		//{
		//	printf("%d ", i);
		//}
		int sum = 0;
		int j = 0;
		//for (j = 10; j <= 10000; j*=10)
		//{
		//	sum += (i / j) * (i % j);
		//}
		for (j = 1; j <= 4; j++)
		{
			int k = (int)pow(10,j);
			sum += (i / k) * (i % k);
		}
		if (sum == i)
		{
			printf("%d ", sum);
		}
	}

	return 0;
}