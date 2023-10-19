#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//a^0=a
//a^a=0
//异或操作符支持交换律
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("交换前：a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}
//只限于整型


//求一个整数存储在内存中的二进制中1的个数
//int main()
//{
//	int a = -5;
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	printf("二进制中1的个数为：%d\n", count);
//	return 0;
//}

//int main()
//{
//	//int a = 0;
//	////~ 是按二进制位取反
//	////00000000000000000000000000000000 - 补码
//	////11111111111111111111111111111111 -> ~a
//	////10000000000000000000000000000001
//	////-1
//	//printf("%d\n", a);
//	//int a = 3;
//	////00000000000000000000000000000011
//	////11111111111111111111111111111100 - 补码
//	////11111111111111111111111111111011
//	////10000000000000000000000000000100
//	//printf("%d\n", ~a);
//	int a = 13;
//	a |= (1 << 1);
//	printf("%d\n", a);
//	a &= ~(1 << 1);
//	printf("%d\n", a);
//	//00000000000000000000000000001101
//	//00000000000000000000000000000010
//	//1<<1
//	//00000000000000000000000000001111
//	return 0;
//}

//int main()
//{
//	//int a = 3;
//	////int b = ++a;//前置++，先++后使用
//	//int b = a++;//后置++，先使用再++
//	//printf("%d %d\n", a, b);
//
//	//int a = 3;
//	////int b = --a;//前置--，先--后使用
//	//int b = a--;
//	//printf("%d %d\n", a, b);
//	int a = 10;
//	printf("%d\n", a--);
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//
//	}
//	for (i = 0; i < 10; ++i)
//	{
//
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	//强制类型转换
//	srand((unsigned int)time(NULL));
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof a);//ok
//	printf("%d\n", sizeof int);//err
//	return 0;
//}
//sizeof是操作符，不是函数
//strlen是函数，不是操作符

//int main()
//{
//	if (3 == 5)
//	{
//
//	}
//	if ("abc" == "abcdef")//这样写是在比较2个字符串的首字符的地址
//	{
//
//	}
//	//两个字符串比较相等应该使用strcmp 
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 0;
//	//int c = a && b;//并且
//	int c = a || b;//或者
//	printf("%d\n", c);
//	return 0;
//}

//&& 左边为假，右边就不计算了
//|| 左边为真，右边就不计算了
//int main()
//{
//	int i = 0, a = 1, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++ || ++b || d++;
//	printf("%d %d %d %d\n", a, b, c, d);
//}

//int main()
//{
//	int a = 3;
//	int b = 0;
//	int max = (a > b? a: b);
//	(a > 5) ? (b = 3) : (b = -3);
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	arr[7] = 8;
//	7[arr] = 9;
//	//arr[7] --> *(arr+7) --> *(7+arr) --> 7[arr]
//	//arr 是数组首元素的地址
//	//arr+7就是跳过7个元素。指向第8个元素
//	//*(arr+7)就是第8个元素
//	//[] arr7
//	//3 + 5;
//	//5 + 3;
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数调用
//	int c = Add(a, b);//() 就是函数调用操作符，操作数：Add,a,b
//	//
//	return 0;
//}

//#include <string.h>
//struct Stu
//{
//	char name[10];
//	int age;
//	double score;
//};
//
//void set_stu(struct Stu* ps)
//{
//	//strcpy((*ps).name, "zhangsan");
//	//(*ps).age = 20;
//	//(*ps).score = 100.0;
//	//ps->age 等价于 (*ps).age
//	strcpy(ps->name, "zhangsan");
//	ps->age = 20;
//	ps->score = 100.0;
//}
//
//void print_stu(struct Stu ss)
//{
//	printf("%s %d %lf\n", ss.name, ss.age, ss.score);
//}
//
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(&s);
//	print_stu(s);
//	return 0;
//}

//整型提升

//int main()
//{ 
//	//缺省：默认
//	int a = 2 + 6 / 3;
//	int b = 2 + 3 + 4;
//	return 0;
//}

//int main()
//{
//	char c = -1;//-1是整数，32个比特位
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111 -> 补码
//	//                        11111111 - c
//	//11111111111111111111111111111111
//}

//int main()
//{
//	char a = 5;
//	//00000000000000000000000000000101
//	//                        00000101
//	char b = 126;
//	//00000000000000000000000001111110
//	//                        01111110
//	char c = a + b;
//	//00000000000000000000000000000101
//	//00000000000000000000000001111110
//	//10000011 - c
//	//11111111111111111111111110000011
//	//11111111111111111111111110000010
//	//10000000000000000000000001111101 -125
//	printf("%d\n", c);
//
//	return 0;
//}

//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}

//
//
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(-c));
//	return 0;
//}

//算术转换

//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	printf("%d\n", b);
//	return 0;
//}