#define _CRT_SECURE_NO_WARNINGS 1

// ��һά���顿����10����������ƽ��ֵ
// ��дһ�����򣬴��û������ж�ȡ10���������洢��һ�������С�
// Ȼ�󣬼��㲢�����Щ������ƽ��ֵ��
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

// X��ͼ��
// ����������
// �������룬һ��������2~20������ʾ�����������
// Ҳ��ʾ��ɡ�X���ķ�б�ߺ���б�ߵĳ��ȡ�
// ���������
// ���ÿ�����룬����á�*����ɵ�X��ͼ����
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

// ����������ͼ��
// ����������
// �������룬һ��������3~20������ʾ�����������
// Ҳ��ʾ��������αߵġ�*����������
// ���������
// ���ÿ�����룬����á�*����ɵġ����ġ������Σ�ÿ����*��������һ���ո�
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

// ����ת��
// ����������
// ��һ�а�����������n��m����ʾһ���������n��m�У�
// �ÿո�ָ��� (1��n��10,1��m��10)
// ��2��n + 1�У�ÿ������m����������Χ - 231~231 - 1����
// �ÿո�ָ���������n * m��������ʾ��һ�������е�Ԫ�ء�
// ���������
// ���m��n�У�Ϊ����ת�ú�Ľ����ÿ����������һ���ո�
// ���룺
// 2 3
// 1 2 3
// 4 5 6
// �����
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

// �������
// ����10��������Ҫ������ʱ���������10������ӡ������
// ������������ǰ��������෴��˳���ӡ��10����
// ����������
// һ�У�����10����������Χ-231~231-1�����ÿո�ָ���
// ���������
// һ�У�������������10���������ÿո�ָ���
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

// ��һά���顿��������
// ������A�е����ݺ�����B�е����ݽ��н�����������һ����
//
//#include<stdio.h>
//void printArr(int* arrA,int* arrB,int sz)
//{
//	printf("\narrA��");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arrA[i]);
//	}
//	printf("\narrB��");
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

// �������кϲ�
// ���������������е����У����������кϲ�Ϊһ���������в������
// ����:	5 6
//		1 3 7 9 22
//		2 8 10 17 33 44
// ���:	1 2 3 7 8 9 10 17 22 33 44
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