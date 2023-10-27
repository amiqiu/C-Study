#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	return 0;
//}

// 函数：
// 1.一小段代码
// 完成某项特定的任务
// 函数的好处：
// 1.可以拆分任务
// 2.可以复用，提升开发效率
// 库函数 - 现成的
// 自定义函数 - 自己创造的函数
// 
// C语言规定了语法规则
// C语言本身不提供库函数
// 但是C语言规定了，一些库函数的各种信息
// scanf - 名字，参数，返回类型，函数功能...
//

//#include<math.h>
//int main()
//{
//	double ret = sqrt(16.0);//sqrt - 开平方根
//	printf("%lf\n", ret);
//	return 0;
//}

//int Add(int a, int b)//创建形式参数
//{
//	return a + b;
//}
//
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int ret = Add(a, b);// a b是实际参数
//	printf("%d\n", ret);
//	return 0;
//}

// 形参和实参
// 实参 - 函数调用时，传递给函数的就是实参
//

//void menu()
//{
//	printf("**************************\n");
//	printf("**************************\n");
//	printf("**************************\n");
//	printf("**************************\n");
//}
//
//int main()
//{
//	menu();
//	return 0;
//}

//void set_arr(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = -1;
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print_arr(arr, sz);
//	set_arr(arr,sz);
//	print_arr(arr, sz);
//
//	return 0;
//}

//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//
//// 31 28 31 30 31 30 31 31 30 31 30 31
////    29
//int get_days_of_month(int y, int m)
//{
//	int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int day = days[m];
//	if (is_leap_year(y) && m == 2)
//	{
//		day++;
//	}
//	return day;
//}
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%d%d", &year, &month);
//	int d = get_days_of_month(year, month);
//	printf("%d\n", d);
//	return 0;
//}

//#include<string.h>
//
//int main()
//{
//	//size_t len = strlen("abcdef");
//	//printf("%zd\n", len);
//	printf("%zd\n", strlen("abcdef"));//链式访问
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

// 函数声明 - 告诉编译器函数的名字，参数，返回类型
//int is_leap_year(int y);
//
//// 函数定义 - 是一种特殊的声明
////int is_leap_year(int y)
////{
////	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
////		return 1;
////	else
////		return 0;
////}
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int ret = is_leap_year(year);
//	if (ret == 1)
//		printf("是闰年\n");
//	else
//		printf("不是闰年\n");
//
//	return 0;
//}
//
//// 函数定义
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//		return 1;
//	else
//		return 0;
//}

// 事实上，在企业中写代码
#include "add.h"

int main()
{
	int a = 10;
	int b = 20;

	int c = Add(a, b);
	printf("%d", c);
	return 0;
}