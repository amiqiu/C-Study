#define _CRT_SECURE_NO_WARNINGS 1

//转移表代码实践
//#include<stdio.h>
//int Add(int a, int b)
//{
//	return a + b;
//}
//int Sub(int a, int b)
//{
//	return a - b;
//}
//int Mul(int a, int b)
//{
//	return a * b;
//}
//int Div(int a, int b)
//{
//	return a / b;
//}
//menu()
//{
//	printf("*********************\n");
//	printf("* 1:add       2:sub *\n");
//	printf("* 3:mul       4:div *\n");
//	printf("* 0:exit            *\n");
//	printf("*********************\n");
//	printf("请选择：");
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	int ret = 0;
//	int(*p[5])(int x, int y) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		if (input <= 4 && input >= 1)
//		{
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = (*p[input])(x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else
//		{
//			printf("非法输入\n");
//		}
//	} while (input);
//	return 0;
//}

//qsort使用练习
//#include<stdio.h>
//#include <stdlib.h>
//void printf_arr(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int cmp_int(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//void test1()
//{
//	int arr[] = { 4,2,6,7,3,5,1,8,0,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf_arr(arr, sz);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	printf_arr(arr, sz);
//}
//#include<string.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_name(const void* p1, const void* p2)
//{
//	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
//}
//int cmp_age(const void* p1, const void* p2)
//{
//	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
//}
//void test2()
//{
//	struct Stu arr[] = { {"zhangsan",20},{"lisi",28},{"wangwu",18} };
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_name);
//	qsort(arr, sz, sizeof(arr[0]), cmp_age);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%s %d\n", arr[i].name, arr[i].age);
//	}
//}
//int main()
//{
//	test1();
//	//test2();
//	return 0;
//}

//找单身狗
//#include<stdio.h>
//void findDog(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		int count = 0;
//		for (int j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	findDog(arr, sz);
//	return 0;
//}

//获得月份天数
#include<stdio.h>
int month_days(int y, int m)
{
    int arr[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
    {
        if (m == 2)
        {
            return arr[m] + 1;
        }
        else
        {
            return arr[m];
        }
    }
    else
    {
        return arr[m];
    }
}
int main()
{
    int year = 0;
    int month = 0;
    while (scanf("%d %d", &year, &month) != EOF)
    {
        printf("%d\n", month_days(year, month));
    }
    return 0;
}