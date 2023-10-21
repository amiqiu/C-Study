#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d\n", (a >= b ? a : b));
//	return 0;
//}

//每个内存都有一个唯一的编号
//编号==地址==指针
//总结：指针就是地址，平时说的指针指的是指针变量

//int main()
//{
//	int a = 100;
//	int* pa = &a;//pa是专门用来存放地址的，这里的pa就被称为指针变量
//	//pa指向的对象的类型是int
//	//int arr[10];
//	//printf("%p\n", &a);
//
//	//指针变量在32位平台是4个字节
//	//指针变量在64位平台是8个字节
//
//	return 0;
//}

//指针+-整数
//int main()
//{
//	int a = 0x11223344;//0x开头是16进制数字
//	int* pa = &a;
//	char* pc = &a;
//	//*pa = 0;
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc+1);
//	//指针类型决定指针+/-1 操作时的步长
//	//整型指针+1跳过4个字节
//	//字符指针+1跳过1个字节
//	return 0;
//}


//野指针
//指针指向的位置是不可知的（随机的、不正确的、没有明确限制的）
//成因
//1.没有初始化
//int main()
//{
//	//int a = 10;
//	//int* pa = &a;
//	//*pa = 20;
//	//printf("%d\n", a);
//	int* p;//局部变量不初始化时，内容是随机值
//	*p = 20;
//	printf("%d\n", *p);
//	return 0;
//}
//2.指针越界
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		*(p++) = i;
//	}
//	return 0;
//}
//3.指针指向空间释放
//int* test()
//{
//	int a = 110;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}

//规避野指针
//1.指针初始化,
//2.小心指针越界
//3.指针指向空间释放，即使置NULL
//4.避免返回局部变量的地址
//5.指针使用之前检查有效性
// 
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int* ptr = NULL;//ptr是一个空指针，这个指针不能直接使用，没有指向
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = &arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		*p = i;
//		p++;
//	}
//	p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i[arr]);
//		printf("%d ", *(p+i));
//	}
//	//2+3 --> 3+2
//	//arr[i] --> i[arr]
//	return 0;
//}

//两指针相+-
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[5] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	printf("%d\n", &arr[0] - &arr[9]);
//	//指针-指针得到的绝对值：是指针与指针之间的元素个数
//	//指针-指针的运算的前提条件是：
//	//两个指针指向的是同一空间
//	//printf("%d\n", &ch[4] - &arr[0]);
//	return 0;
//}
//
//int my_strlen(char* s)
//{
//	int count = 0;
//	while (*s != '\0')
//	{
//		count++;
//		s++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = { "abcdef" };
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//
//递归版本
//int my_strlen(char* s)
//{
//	if (*s == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(s + 1);
//}
//
//int main()
//{
//	char arr[] = { "abcdef" };
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//
//int my_strlen(char* s)
//{
//	char* start = s;
//	//while (*s != '\0')
//	while (*s)
//	{
//		s++;
//	}
//	return s - start;
//}
//
//int main()
//{
//	char arr[] = { "abcdef" };
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//指针的关系运算（比大小）
//int main()
//{
//	float values[5];
//	float* vp;
//	for (vp = &values[5]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}
//	//
//	//for (vp = &values[4]; vp >= &values[0];vp--)
//	//{
//	//	*vp = 0;
//	//}
//	//允许指针于指向后面的元素比较，但不允许与指向之前的元素比较
//	return 0;
//}

//指针和数组
// 指针变量不是数组
// 指针变量的大小是固定的4/8个字节，专门是用来存放地址的
// 数组是一块连续的空间，可以放一个或者多个类型相同的数据
// 联系：
// 数组中，数组名其实是数组首元素的地址，数组名 == 地址 == 指针
// 当知道数组首元素的地址的时候，数组是连续存放的，
// 通过指针就可以遍历访问数组
// 数组是可以通过指针来访问
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%p == %p\n", p + i, &arr[i]);
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

int main()
{
	int a = 10;
	int* p = &a;//一级指针变量，指针变量也是变量，
	//变量是在内存中开辟空间的，是变量就有地址
	int** pp = &p;//二级指针变量，存放一级变量的地址

	return 0;
}