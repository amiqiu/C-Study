#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%p\n", &a);
//	printf("%p\n", &b);
//	return 0;
//}

//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//Fact(int n)
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
//	int ret = Fact(5);
//	printf("%d", ret);
//	return 0;
//}

//Print(int n)
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
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

//int Fact(int n)
//{
//	int ret = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fact(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int Fib(int n)
//{
//	//if (n <= 2)
//	//	return 1;
//	//else
//	//	return Fib(n - 1) + Fib(n - 2);
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int Jump(int n)
//{
//	if (n <= 2)
//		return n;
//	else
//		return Jump(n - 1) + Jump(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Jump(n);
//	printf("%d\n", ret);
//	return 0;
//}
