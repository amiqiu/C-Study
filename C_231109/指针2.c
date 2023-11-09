#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 100;
//	int* pa = &a;
//	*pa = 0;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	char* pa = &a;
//
//	*pa = 0;
//
//	return 0;
//}

//int main()
//{
//	int a = 19;
//	int* pa = &a;
//	char* pc = (char*) & a;
//
//	printf("pa = %p\n", pa);
//	printf("pc = %p\n", pc);
//
//	printf("pa+1 = %p\n", pa+1);
//	printf("pc+1 = %p\n", pc+1);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	char* p = &arr[0];
//	for (i = 0; i < 40; i++)
//	{
//		*p = 1;
//		p++;
//	}
//	//p = &arr[0];
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *p);
//	//	p++;
//	//}
//	return 0;
//}

//void* 泛型指针 不能直接进行加减指针或者解引用运算
//int main()
//{
//	int a = 10;
//	//int* pa = &a;
//	//char* pc = &a;
//	void* pv = &a;
//	//*pv = 20;//err
//	return 0;
//}

//const 常量
//int main()
//{
//	const int a = 10;
//	//a = 20;//err
//	return 0;
//}

//int main()
//{
//	const int a = 10;
//	const int* pa = &a;//const限制的是*p
//	//*pa = 0;//err
//	printf("%d\n", a);
//	return 0;
//}

// const 修饰指针的时候
// const 可以放在*左边
// const 可以放在*右边
//
//int main()
//{
//	const int a = 10;
//	int* const pa = &a;//const限制的是p
//	*pa = 0;//err
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[0] - &arr[9]);//指针之间的元素个数
//	return 0;
//}

//#include<string.h>
//
////int my_strlen(char* s)
////{
////	int count = 0;
////	while (*s != '\0')
////	{
////		count++;
////		s++;
////	}
////	return count;
////}
//
//int my_strlen(char* s)
//{
//	char* start = s;
//	while (*s)
//	{
//		s++;
//	}
//	return s - start;
//}
//
//int main()
//{
//	//strlen 求字符串的长度 统计的是\0前面出现的字符的个数
//	int len = strlen("abc");
//	len = my_strlen("abcdefg");
//	printf("%d\n", len);
//	return 0;
//}

// 指针的关系运算
// 指针（地址）比较大小
//

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[0];
//	while (p < arr + sz)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	int ptr;
//	*ptr = 20;
//	printf("%p\n", *ptr);
//}

//int main()
//{
//	int arr[5] = { 0 };
//	int* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		*p = 1;
//		p++;
//	}
//	//越界
//	return 0;
//}