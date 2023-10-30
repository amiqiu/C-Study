#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//#include "add.h"
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", a, b);
//	int c = Add(a, b);
//	printf("%d", c);
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	return 0;
//}

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	for (int i = 0; i < 5; i++)
//	{
//		test();
//	}
//	
//	return 0;
//}

// static修饰局部变量
// 本质上影响了变量的存储类型
// 一个局部变量是存在栈区的
// 被static修饰后就被存放到静态区
// 因为存储类型的变化，生命周期跟着变化，变长了
// 作用域不变！
//

//声明外部符号的
//extern int g_val;
//
//int main()
//{
//	printf("%d", g_val);
//	return 0;
//}

// static修饰全局变量
// 1.首先要知道全局变量是具有外部链接属性的
// 2.全局变量被static修饰后，外部链接属性变成了内部链接属性
// 这个全局变量只能在自己所在的.c文件中使用，其他文件看不到
// 相当于作用域变小
//

//声明
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d", c);
//	return 0;
//}

// static修饰函数
// 1.首先要知道函数是具有外部链接属性的
// 2.函数被static修饰后，外部链接属性变成了内部链接属性
// 这个函数只能在自己所在的.c文件中使用，其他文件即使声明了
// 也不能使用
//