#define _CRT_SECURE_NO_WARNINGS 1

// �˷��ھ���
// ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
// �磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
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

// �����ж�����
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
//		printf("%d������", y);
//	else
//		printf("%d��������", y);
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

// �����ж�����
// ʵ��һ������is_prime���ж�һ�����ǲ���������
// ��������ʵ�ֵ�is_prime��������ӡ100��200֮���������
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

// ʹ�ú���ʵ���������
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