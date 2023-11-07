#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

// 描述一个学生
// 名字+年龄+成绩
//

//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//} s3, s4;//也是结构体变量（全局变量）
//
//
//int main()
//{
//	//结构体变量（局部变量）
//	struct Stu s1 = { "zhangsan", 20, 95.5f };
//	struct Stu s2 = { "lisi", 18, 87.5 };
//	struct Stu s5 = { .score = 98.5f, .name = "hehe", .age = 18 };
//
//	//结构体指针
//	struct Stu* ps = &s1;
//	printf("%s %d %f\n", ps->name, ps->age, ps->score);
//
//
//	return 0;
//}

//struct Point
//{
//	int x;
//	int y;
//};
//
//struct Data
//{
//	int num;
//	struct Point p;
//};
//
//int main()
//{
//	struct Data d = { 5, {10, 11} };
//	// . 结构成员访问操作符
//	// 结构体变量.成员名
//	printf("numb=%d p.x=%d p.y=%d\n", d.num, d.p.x, d.p.y);
//	return 0;
//}

// 操作符的属性：优先级、结合性
// 优先级：相邻操作符，优先级高的先执行，优先级低的后执行
//

// 表达式求值
// 整型提升
// C语言中整型算术运算总是至少以缺省(默认)整型类型的精度来进行的
// 算术转换
// 
//

//int main()
//{
//	//字符是属于整型家族的，因为字符的存储是ASCII的形式
//	//char类型的取值范围是-128~127
//	//char 是占用1字节，1字节8个bit位
//	//01111101 - c1
//	//00001010 - c2
//	//10000111
//	//10000110
//	//11111001
//	char c1 = 125;
//	char c2 = 10;
//	char c3 = c1 + c2;
//	printf("%d\n", c3);
//	printf("%d\n", c1 + c2);
//	return 0;
//}

//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//	printf("%d\n", i);
//	return 0;
//}

int main()
{
	int a = 0x11223344;
	int b = 10;
	int* pb = &b;// *pb 等价于b
	*pb = 20;
	printf("%d\n", b);
	char ch = 'w';
	char* pc = &ch;
	printf("%p\n", &a);//& 取地址操作符
	return 0;
}