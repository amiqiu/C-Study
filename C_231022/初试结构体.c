#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

// 结构体
// 基础知识
// 结构是一些值的集合，这些值称为成员变量，
// 结构的每个成员可以是不同类型的变量
// 数组：一组相同类型元素的集合
// 结构体：一组不一定相同类型元素的集合
// 
// 例子：
// 生活中描述：
// 人：名字+性别+年龄+身高...
// 复杂对象，不能用内置类型直接描述
// 就用结构体来描述复杂类型
//

//描述一个学生
//名字+年龄+性别
//

//声明结构体类型
//struct Stu
//{
//	//成员变量，是用来描述结构体对象的相关属性
//	char name[20];
//	int age;
//	char sex[5];//男 女 保密
//}s2, s3, s4;//s2 ss3 s4 就是结构体变量 - 全局变量
//
//typedef struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//} Stu;
//
////通过类型创建的变量
//int main()
//{
//	struct Stu s1;//局部变量
//	Stu s2;//在C语言中，没有对结构体类型typedef，struct关键词不能省略
//	return 0;
//}

// 结构体成员
// 可以是标量、数组、指针，甚至是其他结构体
//

//struct S
//{
//	int a;
//	char arr[5];
//	int* p;
//};
//
//struct B
//{
//	char ch[10];
//	struct S s;
//	double d;
//};
//
//int main()
//{
//
//	return 0;
//}

// 结构体成员访问
//
//
//struct S
//{
//	int a;
//	char arr[5];
//	int* p;
//}s1 = { 100,"bit",NULL };
//
//struct S s2 = { 98, "hehe",NULL };
//
//struct B
//{
//	char ch[10];
//	struct S s;
//	double d;
//};
//
//int main()
//{
//	struct S s3 = { .arr = "abc",.p = NULL,.a = 1 };
//	printf("%d %s %p\n", s3.a, s3.arr, s3.p);//. 是结构成员访问操作符
//	struct B sb = { "hello",{20,"qqq",NULL},3.14 };
//	printf("%s %d %s %p %.2lf\n", sb.ch, sb.s.a, sb.s.arr, sb.s.p, sb.d);
//
//	return 0;
//}

#include<string.h>
//错误范例
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void set_stu(struct Stu t)
//{
//	t.age = 20;
//	//t.name = "zhangsan";
//	strcpy(t.name, "zhangsan");
//}
//
//void print_stu(struct Stu t)
//{
//	printf("%s %d\n", t.name, t.age);
//}
//
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(s);//传值调用
//	print_stu(s);
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void set_stu(struct Stu* ps)
//{
//	//(*ps).age = 20;
//	//strcpy((*ps).name, "zhangsan");
//	ps->age = 20;
//	strcpy(ps->name, "zhangsan");
//
//}
//
//void print_stu(struct Stu t)
//{
//	printf("%s %d\n", t.name, t.age);
//}
//
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(&s);//传值调用
//	print_stu(s);
//	return 0;
//}
// 
//void print_stu(struct Stu* ps)
//{
//	printf("%s %d\n", ps->name, ps->age);
//}
//
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(&s);//传值调用
//	print_stu(&s);
//	return 0;
//}

//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水
//int main()
//{
//	int money = 20;//钱
//	int num = 0;//汽水
//	int null = 0;//空瓶
//	int sum = 0;//喝掉的汽水
//	num = money / 1;
//	while (num != 0)
//	{
//		sum += num;
//		null += num;
//		num = 0;
//		num += null / 2;
//		null %= 2;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//参考答案：
// 方法一：
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	while (empty > 1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}
// 方法二：按照上述喝水和用瓶子换的规则的话，可以发现，
// 其实就是个等差数列：money*2-1
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = 0;
//	if (money <= 0)
//	{
//		total = 0;
//	}
//	else
//	{
//		total = money * 2 - 1;
//	}
//	printf("total = %d\n", total);
//	return 0;
//}