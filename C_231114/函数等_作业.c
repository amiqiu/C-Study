#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//void Print(int* p,int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	return 0;
//}

//int main()
//{
//	int money = 5;
//	int total = money;
//	int empty = total;
//	while (empty > 1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d", total);
//	return 0;
//}

//void Func(int line)
//{
//	//上半部分
//	for (int i = 0; i < line; i++)
//	{
//		for (int j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//		 
//	}
//	//下半部分
//	for (int i = line-2; i >= 0; i--)
//	{
//		for (int j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//
//	}
//}
//int main()
//{
//	Func(7);
//	return 0;
//}

//int Func(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Func(n, k - 1);
//	}
//}
//
//int main()
//{
//	printf("%d\n", Func(2, 5));
//	return 0;
//}

//int Func(int n)
//{
//	if (n < 10)
//	{
//		return n;
//	}
//	return n % 10 + Func(n / 10);
//}
//
//int main()
//{
//	printf("%d\n", Func(123));
//	return 0;
//}