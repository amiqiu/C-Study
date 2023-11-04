#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}

//喝汽水
//int main()
//{
//	int full = 20;
//	int empty = 0;
//	int sum = 0;
//	do
//	{
//		empty = full + empty % 2;
//		sum += full;
//		full = 0;
//	} while (full += (empty / 2));
//	printf("%d", sum);
//	return 0;
//}

//打印菱形
//int main()
//{
//	int n = 13;
//	for (int i = 0; i <= n / 2; i++)
//	{
//		for (int j = 0; j <= n / 2 + i; j++)
//		{
//			if (j >= (n / 2 - i))
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	for (int i = n / 2 - 1; i >= 0; i--)
//	{
//		for (int j = 0; j <= n / 2 + i; j++)
//		{
//			if (j >= (n / 2 - i))
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//打印水仙花数
//#include<math.h>
//int main()
//{
//	for (int i = 0; i < 100000; i++)
//	{
//		int n = 0;
//		int tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			tmp /= 10;
//			n++;
//		}
//		tmp = i;
//		for (int j = 1; j <= n; j++)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
int main()
{
	int a = 0;
	int sum = 0;
	scanf("%d", &a);
	for (int i = 5; i > 0; i--)
	{
		sum += a * i;
		a *= 10;
	}
	printf("%d\n", sum);
	return 0;
}