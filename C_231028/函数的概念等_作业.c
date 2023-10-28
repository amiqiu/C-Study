#define _CRT_SECURE_NO_WARNINGS 1

// 乘法口诀表
// 实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
// 如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//
//#include<stdio.h>
//
//void Fib(int n)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%-2d*%-2d=%-3d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Fib(n);
//	return 0;
//}

// 函数判断闰年
//
//#include <stdio.h>
//
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//
//void print_ret(int y, int ret)
//{
//	if (ret == 1)
//		printf("%d是闰年", y);
//	else
//		printf("%d不是闰年", y);
//}
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int ret = is_leap_year(year);
//	print_ret(year, ret);
//
//	return 0;
//}

// 函数判断素数
// 实现一个函数is_prime，判断一个数是不是素数。
// 利用上面实现的is_prime函数，打印100到200之间的素数。
//
//#include <stdio.h>
//
//int is_prime(int n)
//{
//	int flg = 1;
//	for (int i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			flg = 0;
//			break;
//		}
//	}
//	if (flg == 1)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	for (int i = 100; i <= 200; i++)
//	{
//		int ret = is_prime(i);
//		if (ret == 1)
//			printf("%d ", i);
//	}
//
//	return 0;
//}

// 使用函数实现数组操作
//
#include <stdio.h>

void init(int* arr, int sz, int set)
{
	for (int i = 0; i < sz; i++)
	{
		arr[i] = set;
	}
}

void print_arr(int* arr,int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void reverse(int* arr, int sz)
{
	int left = 0;
	int right = sz - 1;
	for (int i = 0; i < sz/2; i++)
	{
		arr[left + i] ^= arr[right - i];
		arr[right - i] ^= arr[left + i];
		arr[left + i] ^= arr[right - i];
	}
}

int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr,sz);
	reverse(arr, sz);
	print_arr(arr, sz);
	init(arr, sz, 0);
	print_arr(arr, sz);
	return 0;
}