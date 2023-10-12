#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 2 + 10;
//	int b = 2 - 10;
//	printf("%d\n", a);
//	printf("%d\n", 2+10);
//	printf("%d\n", b);
//
//	return 0
//}

//int main()
//{
//	int num = 5;
//	printf("%d\n", num * num);
//	return 0;
//}

//%f -- 打印float
//%lf -- 打印double
//% 取模运算符只能用于整数
//负数取模的规则是，结果的正负由第一个运算数的正负号决定
//int main()
//{
//	printf("%d\n", 8 / 2);
//	printf("%d\n", 7 / 2);
//	printf("%f\n", 7.0 / 2);
//	printf("%lf\n", 7 / 2.0);
//	printf("%d\n", 7 % 2);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 0;
//	b = a = a + 2;//连续赋值
//	printf("%d %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	a = a + 3;
//	a += 3;//复合赋值
//	b = b - 2;
//	b -= 2;
//	printf("%d %d\n", a, b);
//	return 0;
//}

//单目操作符
//int main()
//{
//	int a = 2;
//	int b = ++a;//前置++，先+1，后使用
//	printf("a=%d b=%d\n", a, b);
//	b = a++;//后置++，先使用，后+1
//	printf("a=%d b=%d\n", a, b);
//	
//	return 0;
//}

//int main()
//{
//	int a = +-10;
//	printf("a=%d\n", a);
//	int b = -a;
//	printf("b=%d\n", b);
//
//	return 0;
//}

//强制类型转换
//int main()
//{
//	int a = (int)3.14;//(int)强制类型转换int，保留3
//	printf("a=%d\n", a);
//	return 0;
//}


//int main()
//{
//	printf("%5d\n", 123);
//	printf("%-5d\n", 123);
//	printf("%+d\n", 123);
//	printf("%+d\n", -123);
//	printf("%.2f\n", 12.3);
//	printf("%6.2f\n", 12.3);
//	printf("%*.*f\n", 6, 2, 12.3);
//	return 0;
//}

//int main()
//{
//	int score = 0;
//	printf("请输入成绩：");
//	scanf("%d/n", &score);
//	printf("score = %d", score);
//	return 0;
//}

//int main()
//{
//	int x;
//	float y;//    -13.45e12# 0
//	scanf("%d%f", &x, &y);
//	printf("%d\n%f", x, y);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int r = scanf("%d %d %d", &a, &b, &c);
//	printf("r = %d", r);
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	scanf("%c", &ch);
//	printf("%c", ch);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//	{
//		printf("%d是奇数", num);
//	}
//	else
//	{
//		printf("%d是偶数", num);
//	}
//	return 0;
//}


//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("成年\n");
//		printf("可以谈恋爱\n");
//	}
//	else
//	{
//		printf("未成年\n");
//		printf("不可以谈恋爱\n");
//	}
//	return 0;
//}
