#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	printf("are you ok\?\?\n");
//	return 0;
//}

// 
//#include<string.h>
//
//int main()
//{
//	//printf("%C\n", '\'');
//	//printf("%s\n", "\"");
//	//printf("c:\\test\\test.c\n");// \t被编译器识别为转移字符  \t - tab
//
//	// \a：报警
//	// \b：退格 Back
//	//printf("abcdefg\n");
//	//printf("abcd\befg\n");
//
//	//// \ddd：d d d表示1~3个八进制的数字
//	//printf("%c\n", '\130');
//	//// \xdd：d d表示2个十六进制数字
//	//printf("%c\n", '\x30');
//	//// \0：null字符，代表没有内容。
//
//	//strlen是求字符串长度的函数 - 统计的是字符串中\0之前的字符的个数，不包含\0
//	printf("%zd\n", strlen("abc"));
//	printf("%zd\n", strlen("c:\test\130\test.c\n"));
//	return 0;
//}


//int main()
//{
//	;//空语句
//	3 + 4;//表达式语句
//	printf("hehe\n");//函数调用语句
//
//	return 0;
//}

// char //character
// [signed] char //有符号的
// unsigned char //无符号的

//#include<stdbool.h>
//int main()
//{
//	//_Bool flag = false;
//	bool flag = true;
//	if (flag)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//sizeof 计算的结果的类型是size_t，size_t是一种无符号的整数，这种整数的值在打印的时候，使用%zd
//int --- %d
//char --- %c
//字符串 --- %s
//sizeof 计算的结果（返回值）的单位是字节
//int main()
//{
//	printf("%zd\n", sizeof(char));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(short));
//	printf("%zd\n", sizeof(_Bool));
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	printf("%zd\n", sizeof(long double));
//	return 0;
//}


//int main()
//{
//	int a = 10;/*
//	printf("%zd\n", sizeof(a));
//	printf("%zd\n", sizeof(int));*/
//
//	//printf("%zd\n", sizeof(3.14));//double
//	//printf("%zd\n", sizeof(3.14f));//float
//	short s = 2;
//	printf("%zd\n", sizeof(s = a + 1));
//	printf("s=%d\n", s);
//
//	return 0;
//}


//int main()
//{
//	int age;
//	char ch;
//	float f;
//	double d;
//	_Bool num;
//	return 0;
//}

int b = 100;
int main()
{
	int a = 10;
	printf("%d", b);
	return 0;
}