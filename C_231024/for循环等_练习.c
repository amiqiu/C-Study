#define _CRT_SECURE_NO_WARNINGS 1
// �˷��ھ���
// ����Ļ�����9*9�˷��ھ���
//
//#include <stdio.h>
//int main()
//{
//	for (int i = 1; i <=9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

// �����ֵ
// ��10 �����������ֵ
//
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("MAX = %d\n", max);
//	return 0;
//}

// �������
// ����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int flg = 1;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += 1.0 / i * flg;
//		flg *= -1;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

// ��9�ĸ���
// ��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//
//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

// ���ֲ���
// ��д������һ���������������в��Ҿ����ĳ����
// Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
//
#include<stdio.h>
// ����1��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &n);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == n)
//		{
//			printf("�±�Ϊ%d\n", i);
//			break;
//		}
//	}
//	if(i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}
// ����2��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &n);
//	while (left < right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > n)
//		{
//			right = mid;
//		}
//		else if (arr[mid] < n)
//		{
//			left = mid;
//		}
//		else
//		{
//			printf("�±�Ϊ%d\n", mid);
//			break;
//		}
//	}
//	if (left == right)
//		printf("�Ҳ���\n");
//	return 0;
//}

// дһ���������ز����������е�1�ĸ���
// ����15 0000 1111 4��1
// n = n & (n - 1)
//
//int main()
//{
//	int n = 0;
//	int length = sizeof(n) * 8;
//	int count = 0;
//	scanf("%d", &n);
//	//for (int i = length -1; i >= 0; i--)
//	//{
//	//	if (((n >> i) & 1) == 1)
//	//	{
//	//		printf("1");
//	//		count++;
//	//	}
//	//	else
//	//		printf("0");
//	//}
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	printf("\n%d", count);
//	return 0;
//}