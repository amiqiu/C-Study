#define _CRT_SECURE_NO_WARNINGS 1

// 【一维数组】输入10个整数，求平均值
// 编写一个程序，从用户输入中读取10个整数并存储在一个数组中。
// 然后，计算并输出这些整数的平均值。
//
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		sum += arr[i];
//	}
//	int n = sum / 10;
//	printf("%d\n", n);
//	return 0;
//}

// X形图案
// 输入描述：
// 多组输入，一个整数（2~20），表示输出的行数，
// 也表示组成“X”的反斜线和正斜线的长度。
// 输出描述：
// 针对每行输入，输出用“*”组成的X形图案。
// 5
// *   *
//	* *
//	 *
//	* *
// *   *
//
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int left = 0;
//		int right = n - 1;
//		for (int i = 0; i < n; i++)
//		{
//			char arr[20] = "                    ";
//			arr[left + i] = '*';
//			arr[right - i] = '*';
//			for (int j = 0; j < n; j++)
//			{
//				printf("%c", arr[j]);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

// 空心正方形图案
// 输入描述：
// 多组输入，一个整数（3~20），表示输出的行数，
// 也表示组成正方形边的“*”的数量。
// 输出描述：
// 针对每行输入，输出用“*”组成的“空心”正方形，每个“*”后面有一个空格。
// 4
// * * * *
// *	 *
// *	 *
// * * * *
//
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			if (i == 0 || i == (n - 1))
//			{
//				for (int j = 0; j < n; j++)
//					printf("* ");
//			}
//			else
//			{
//				for (int j = 0; j < n; j++)
//				{
//					if (j == 0 || j == (n - 1))
//						printf("* ");
//					else
//						printf("  ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

// 矩阵转置
// 输入描述：
// 第一行包含两个整数n和m，表示一个矩阵包含n行m列，
// 用空格分隔。 (1≤n≤10,1≤m≤10)
// 从2到n + 1行，每行输入m个整数（范围 - 231~231 - 1），
// 用空格分隔，共输入n * m个数，表示第一个矩阵中的元素。
// 输出描述：
// 输出m行n列，为矩阵转置后的结果。每个数后面有一个空格。
// 输入：
// 2 3
// 1 2 3
// 4 5 6
// 输出：
// 1 4 
// 2 5
// 3 6
//
//#include <stdio.h>
//int main() {
//    int x = 0;
//    int y = 0;
//    int i = 0;
//    int j = 0;
//    int arr[10][10] = { 0 };
//    while (scanf("%d %d", &x, &y) != EOF) {
//        for (i = 0; i < x; i++)
//        {
//            for (j = 0; j < y; j++)
//            {
//                scanf("%d", &arr[i][j]);
//            }
//        }
//        for (i = 0; i < y; i++)
//        {
//            for (j = 0; j < x; j++)
//            {
//                printf("%d ", arr[j][i]);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

// 逆序输出
// 输入10个整数，要求按输入时的逆序把这10个数打印出来。
// 逆序输出，就是按照输入相反的顺序打印这10个数
// 输入描述：
// 一行，输入10个整数（范围-231~231-1），用空格分隔。
// 输出描述：
// 一行，逆序输出输入的10个整数，用空格分隔。
// 1 2 3 4 5 6 7 8 9 10
// 10 9 8 7 6 5 4 3 2 1
//
//#include <stdio.h>
//
//int main() {
//    int arr[10] = { 0 };
//    for (int i = 0; i <= 9; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (int i = 9; i >= 0; i--)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

// 【一维数组】交换数组
// 将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//
//#include<stdio.h>
//void printArr(int* arrA,int* arrB,int sz)
//{
//	printf("\narrA：");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arrA[i]);
//	}
//	printf("\narrB：");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arrB[i]);
//	}
//}
//
//int main()
//{
//	int arrA[] = { 1,2,3,4 };
//	int arrB[] = { 5,6,7,8 };
//	int sz = sizeof(arrA) / sizeof(arrA[0]);
//	printArr(arrA, arrB, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		arrA[i] = arrA[i] ^ arrB[i];
//		arrB[i] = arrA[i] ^ arrB[i];
//		arrA[i] = arrA[i] ^ arrB[i];
//	}
//	printArr(arrA, arrB, sz);
//	return 0;
//}

// 有序序列合并
// 输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
// 输入:	5 6
//		1 3 7 9 22
//		2 8 10 17 33 44
// 输出:	1 2 3 7 8 9 10 17 22 33 44
#include <stdio.h>
int main() {
    int n, m;
    int arr[2000];
    int i = 0;
    while (scanf("%d %d", &n, &m) != EOF) {
        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);
        for (i = n; i < n + m; i++)
            scanf("%d", &arr[i]);
        for (i = 0; i < (n + m); i++)
        {
            for (int j = (i + 1); j < (n + m); j++)
            {
                if (arr[i] > arr[j])
                {
                    arr[i] = arr[i] ^ arr[j];
                    arr[j] = arr[i] ^ arr[j];
                    arr[i] = arr[i] ^ arr[j];
                }
            }
        }
        for (i = 0; i < (n + m); i++)
            printf("%d ", arr[i]);
    }
    return 0;
}