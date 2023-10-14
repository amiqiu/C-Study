#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("青少年");
//	}
//	else
//	{
//		if (age <= 44)
//		{
//			printf("青年");
//		}
//		else
//		{
//			if (age <= 59)
//			{
//				printf("中老年");
//			}
//			else
//			{
//				if (age <= 90)
//				{
//					printf("老年");
//				}
//			}
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int r = (2 == 2);
//	printf("%d\n", r);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	//如果一个变量和一个常量相比较相等，建议吧常量放在==的左边
//	if (5 == a)
//		printf("hehe\n");
//	return 0;
//}

//int main()
//{
//	int x = 10;
//	int y = 12;
//	int z = 14;
//	//if (x < y < z)//连续
//	if (x < y && y < z)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (18 <= age && age <= 36)
//	{
//		printf("青年\n");
//	}
//	return 0;
//}

//条件操作符 三目操作符
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//scanf("%d", &a);
//	//b = (a > 5 ? 3 : -3);
//	//printf("%d\n", b);
//	scanf("%d%d", &a, &b);
//	int m = (a > b ? a : b);
//	printf("%d\n", m);
//	return 0;
//}

//! 逻辑取反运算符
//&& 与运算符
//|| 或运算符

//int main()
//{
//	int flag = 0;
//	//如果flag为假，打印“呵呵”
//	if (!flag)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month >=3 && month <=5)
//	{
//		printf("春季\n");
//	}
//	return 0;
//}

//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month == 1 || month == 2 || month == 12)
//	{
//		printf("冬季\n");
//	}
//	return 0;
//}

//闰年判断规则：
//1、能被4整除且不被100整除
//2、能被400整除
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		printf("闰年");
//	}
//	else
//	{
//		printf("不是闰年");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++ || ++b || d++;
//	//  1   ||  短路
//	// a=1  || b=3 || d=4
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	printf("%d\n", i);
//	return 0;
//}

//switch (expression) {
//case value1: statement
//case value2: statement
//default: statement
//}
//switch (expression) 的expression 必须是整型表达式
//case 后面必须是整型常量表达式

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 3 == 0)
//	{
//		printf("被3整除，余数为0");
//	}
//	else if (num % 3 == 1)
//	{
//		printf("被3整除，余数为1");
//	}
//	else if (num % 3 == 2)
//	{
//		printf("被3整除，余数为2");
//	}
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	switch (num % 3)
//	{
//	case 1:
//		printf("被3整除，余数为1");
//		break;
//	case 2:
//		printf("被3整除，余数为2");
//		break;
//	case 0:
//		printf("被3整除，余数为0");
//		break;
//	}
//	return 0;
//}
// 字符是以ASCII码储存的，ASCII就是整型

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	//case 1:
//	//	printf("星期一\n");
//	//	break;
//	//case 2:
//	//	printf("星期二\n");
//	//	break;
//	//case 3:
//	//	printf("星期三\n");
//	//	break;
//	//case 4:
//	//	printf("星期四\n");
//	//	break;
//	//case 5:
//	//	printf("星期五\n");
//	//	break;
//	//case 6:
//	//	printf("星期六\n");
//	//	break;
//	//case 7:
//	//	printf("星期日\n");
//	//	break;
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		printf("%d ", num % 10);
//		//num = num / 10;
//		num /= 10;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//} 

//计算一下1~100之间3的倍数的数字之和
int main()
{
	int i = 0;
	int n = 0;
	//for (i = 1; i <= 100; i++)
	//{
	//	if (i % 3 == 0)
	//	{
	//		n += i;
	//	}
	//}
	for (i = 3; i <= 100; i += 3)
	{
		n += i;
	}
	printf("%d\n", n);
	return 0;
}