#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//�ݹ�ʵ�ּ���쳲�������
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int ret = Fib(n);
//		printf("%d ", ret);
//	}
//	return 0;
//}

//�ݹ�ʵ��n��k�η�
//int Pow(int n, int k)
//{
//	if (n == 0)
//		return 0;
//	if (k == 0)
//		return 1;
//	else
//		return n * Pow(n, k - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	int ret = Pow(n, k);
//	printf("%d ", ret);
//	return 0;
//}

//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
//int DigitSum(int n)
//{
//	if (n < 10)
//		return n;
//	else
//		return (n % 10) + DigitSum(n / 10);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = DigitSum(n);
//	printf("%d ", ret);
//	return 0;
//}

//��׳�
//int Fact(int n)
//{
//	if (n == 0)
//		return 1;
//	else
//		return n * Fact(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fact(n);
//	printf("%d ", ret);
//	return 0;
//}

//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//void Print(int n)
//{
//	if (n >= 10)
//		Print(n / 10);
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}