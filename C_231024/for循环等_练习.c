#define _CRT_SECURE_NO_WARNINGS 1
// 乘法口诀表
// 在屏幕上输出9*9乘法口诀表
//
//#include <stdio.h>
//int main()
//{
//	for (int i = 1; i <=9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

// 求最大值
// 求10 个整数中最大值
//
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("MAX = %d\n", max);
//	return 0;
//}

// 分数求和
// 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int flg = 1;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += 1.0 / i * flg;
//		flg *= -1;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

// 数9的个数
// 编写程序数一下 1到 100 的所有整数中出现多少个数字9
//
//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

// 二分查找
// 编写代码在一个整形有序数组中查找具体的某个数
// 要求：找到了就打印数字所在的下标，找不到则输出：找不到。
//
#include<stdio.h>
// 方法1：
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &n);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == n)
//		{
//			printf("下标为%d\n", i);
//			break;
//		}
//	}
//	if(i == sz)
//		printf("找不到\n");
//	return 0;
//}
// 方法2：
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &n);
//	while (left < right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > n)
//		{
//			right = mid;
//		}
//		else if (arr[mid] < n)
//		{
//			left = mid;
//		}
//		else
//		{
//			printf("下标为%d\n", mid);
//			break;
//		}
//	}
//	if (left == right)
//		printf("找不到\n");
//	return 0;
//}

// 写一个函数返回参数二进制中的1的个数
// 比如15 0000 1111 4个1
// n = n & (n - 1)
//
//int main()
//{
//	int n = 0;
//	int length = sizeof(n) * 8;
//	int count = 0;
//	scanf("%d", &n);
//	//for (int i = length -1; i >= 0; i--)
//	//{
//	//	if (((n >> i) & 1) == 1)
//	//	{
//	//		printf("1");
//	//		count++;
//	//	}
//	//	else
//	//		printf("0");
//	//}
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	printf("\n%d", count);
//	return 0;
//}