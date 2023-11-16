#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

// 一级指针
// char*
// int*
// 二级指针
// char**
// int**
// 指针数组 - 是数组，每个元素是指针
// char* arr[5]
// double* arr[5]
// 数组指针 - 指针，是指向数组的指针
// int arr[10];
// int (*pa)[10] = &arr;
// char* ar[5];
// (*par)[5] = &arr;
// 
// 函数指针 - 指针 - 是指向函数的指针
// 
//int test(char* c, int n)
//{
//	//..
//	return 0;
//}
//
//int main()
//{
//	int (*pf)(char*, int*) = &test;//test
//	(*pf)("abcdef", 10);
//	test("abcde", 10);
//	pf("abc", 10);
//	return 0;
//}

//void(*signal(int, void(*)(int)))(int);
//// signal是一个函数声明
//// signal函数的第一个参数的类型是int
//// signal函数的第二个参数是函数指针：void(*)(int)
//// 这个函数指针指向的函数参数是int类型，返回类型是void
//// signal函数的返回类型也是一个函数指针：void(*)(int)
//// 这个函数指针指向的函数参数是int类型，返回类型是void
////
//
//typedef void(*pf_t)(int);
//
//pf_t signal(int, pf_t);
//

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}
//
//int main()
//{
//	int (*pf)(int, int) = Add;
//	int (*pfArr[4])(int, int) = { Add, Sub, Mul, Div };//函数指针数组
//
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d ", pfArr[i](6, 2));
//	}
//
//	return 0;
//}

// 实现一个计算器
// 这个计算器能够计算整数的加减乘除
//

void menu()
{
	printf("*****************************\n");
	printf("*****  1.add    2.sub  ******\n");
	printf("*****  3.mul    4.div  ******\n");
	printf("*****  0.exit          ******\n");
	printf("*****************************\n");

}

void calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("请输入两个操作数：");
	scanf("%d%d", &x, &y);
	printf("%d\n", pf(x, y));
}

//int main()
//{
//	int input = 0;
//	//int x = 0;
//	//int y = 0;
//	do
//	{
//		menu();
//		printf("请输入：");
//		scanf("%d", &input);
//		//int (*pfArr[])(int, int) = { NULL, Add, Sub, Mul, Div };
//		//							 0		1	 2	  3		4
//		//if (input == 0)
//		//{
//		//	printf("退出计算器\n");
//		//}
//		//else if (input >= 1 && input <= 4)
//		//{
//
//		//	printf("请输入两个操作数：");
//		//	scanf("%d%d", &x, &y);
//		//	printf("%d\n", pfArr[input](x,y));
//		//}
//		//else
//		//{
//		//	printf("请重新选择\n");
//		//}
//		switch (input)
//		{
//		case 1:
//			calc(Add);//完成计算
//			//printf("请输入两个操作数：");
//			//scanf("%d%d", &x,&y);
//			//printf("%d\n", Add(x,y));
//			break;
//		case 2:
//			calc(Sub);
//			//printf("请输入两个操作数：");
//			//scanf("%d%d", &x, &y);
//			//printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			calc(Mul);
//			//printf("请输入两个操作数：");
//			//scanf("%d%d", &x, &y);
//			//printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			calc(Div);
//			//printf("请输入两个操作数：");
//			//scanf("%d%d", &x, &y);
//			//printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("请重新选择\n");
//			break;
//		}
//	} while (input);
//}

// 函数指针的使用：qsort
// qsort 是库函数，这个函数可以完成任意函数类型的排序
//

void bubble_sort(int arr[], int sz)
{
	//趟数
	for (int i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序的过程
		int flg = 1;
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
				flg = 0;
			}
		}
		if (flg == 1)
		{
			break;
		}
	}
}

void printf_arr(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//int main()
//{
//	int arr[10] = { 4,2,6,7,3,5,1,8,0,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	return 0;
//}

//void qsort(
//	void* base,//base指向了要排序的数组的第一个元素
//	size_t num,//base指向的数组中的元素个数（待排序的元素的个数）
//	size_t size,//base指向的数组中元素的大小（单位是字节）
//	int (*compar)(const void*, const void*)
//	//函数指针 - 指向的函数是用来比较数组中的两个元素的
//	);

int cmp_int(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;
}

#include <stdlib.h>

void test1()
{
	int arr[10] = { 4,2,6,7,3,5,1,8,0,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf_arr(arr, sz);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	printf_arr(arr, sz);
}

struct Stu
{
	char name[20];
	int age;
};

//按照年龄比较
int cmp_stu_by_age(const void* p1, const void* p2)
{
	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
}

//按照名字比较
#include<string.h>
int cmp_stu_by_name(const void* p1, const void* p2)
{
	// strcmp函数 - 比较字符串大小
	//
	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
}

void test2()
{
	struct Stu arr[] = { {"zhangsan",20},{"lisi",28},{"wangwu",18} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);

}

int main()
{
	//test1();
	test2();
	return 0;
}