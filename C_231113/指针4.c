#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int* p = &a;//一级指针
//	int** pp = &p;//二级指针
//	int*** ppp = &pp;//三级指针(用的很少)
//	//...
//	printf("%d\n", **pp);
//	return 0;
//}

//指针数组

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* arr[3] = { arr1,arr2,arr3 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	//char ch = 'w';
//	//char* pc = &ch;
//
//	const char* p = "abcdef";
//	printf("%c\n", *p);
//
//	printf("%c\n", "abcdef"[3]);
//	printf("%c\n", p[3]);
//	return 0;
//}

//数组指针变量

//int main()
//{
//	int n = 100;
//	int* pn = &n;
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	float f = 3.14f;
//	float* pf = &f;
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*parr)[10] = &arr;
//	//parr 就是数组指针
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 3,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	//int*   int*
//	int* p2 = &arr[0];
//	//int*    int*
//	int(*p3)[10] = &arr;
//	//int (*)[10]  int (*)[10]
//	for (int i = 0; i < 10; i++ )
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n%d %d", *(p + 1), *p+1);
//	return 0;
//}

//void Print1(int arr[3][5], int r, int c)
//{
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//
//		}
//		printf("\n");
//	}
//}
//
//void Print2(int (*arr)[5], int r, int c)
//{
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(arr + i) + j));
//
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//Print1(arr, 3, 5);
//	Print2(arr,3,5);
//	return 0;
//}

int Add(int x, int y)
{
	return x + y;
}

int main()
{
	//int a = 10;
	//int* pa = &a;
	//int arr[10] = { 0 };
	//int (*parr) = &arr;
	// 
	//printf("%p\n", Add);
	//printf("%p\n", &Add);

	int (*pf)(int, int) = &Add;//pf就是函数指针变量
	int ret = Add(3, 4);
	printf("%d\n", ret);

	int ret2 = (*pf)(3, 4);
	printf("%d\n", ret2);

	int (*pf2)(int, int) = Add;
	int ret3 = (*pf2)(5, 6);
	printf("%d\n", ret3);

	int ret4 = pf2(5, 6);
	printf("%d\n", ret4);
	return 0;
}

// 数组名 --- 数组首元素地址
// &数组名 --- 整个数组的地址
// 
// 函数名 --- 函数的地址
// &函数名 --- 函数的地址
//

//char* test(int x, char y)
//{
//	return NULL;
//}
//
//int main()
//{
//	char* (*pt)(int, char) = test;
//	return 0;
//}

typedef void(*pf_t)(int);

void (*signal ( int, void(*)(int) ) )(int);

pf_t signal(int, pf_t);

int main()
{
	return 0;
}
// signal是一个函数
// signal函数的参数有2个，第一个是int类型
// 第二个是函数指针类型，该指针指向的函数参数是int，返回类型是void
// signal函数的返回类型是这种类型的void(*)(int)函数指针
// 该指针指向的函数是int，返回类型是void
//

//typedef unsigned int uint;
//
//typedef int(*pArr_t)[10];
//
//typedef int(*pF_t)(int, int);
//
//int main()
//{
//	uint num;
//	pArr_t pa;
//	pF_t pf;
//	return 0;
//}