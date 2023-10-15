#define _CRT_SECURE_NO_WARNINGS 1

//打印九九乘法表
//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	int y = 0;
//	for (x = 1; x <= 9; x++)
//	{
//		for (y = 1; y <= x; y++)
//		{
//			printf("%d*%d=%-2d ", x,y,x*y);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//求最大值
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	int MAX = arr[0];;
//	int n = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < n; i++)
//	{
//		if (MAX < arr[i])
//		{
//			MAX = arr[i];
//		}
//	}
//	printf("%d\n", MAX);
//	return 0;
//}

//分数求和
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int flag = 1;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//打印闰年
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//求9的个数
#include<stdio.h>
int main()
{
	int i = 0;
	int sum = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			sum++;
		}
		if (i / 9 == 9)
		{
			sum++;
		}
	}
	printf("9的个数为：%d\n", sum);
	return 0;
}