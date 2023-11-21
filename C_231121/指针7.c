#define _CRT_SECURE_NO_WARNINGS 1




//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));//arr是数组首元素的地址 6
//	printf("%d\n", strlen(arr+0));//arr + 0是数组首元素的地址，6
//	printf("%d\n", strlen(*arr));//? 传递的是'a' - 97 //err
//	printf("%d\n", strlen(arr[1]));//? 'b' - 98 //err
//	printf("%d\n", strlen(&arr));//6 &arr虽然是数组地址，但也是指向数组的起始位置 6
//	printf("%d\n", strlen(&arr+1));//随机值
//	printf("%d\n", strlen(&arr[0]+1));//第二个元素的地址 5
//}

//int main()
//{
//	char* p = "abcdef";
//	printf("%zd\n", sizeof(p));//计算p这个指针变量的大小 4/8
//	printf("%zd\n", sizeof(p+1));//p+1是字符'b'的地址，地址大小是4/8个字节
//	printf("%zd\n", sizeof(*p));// 'a' 1
//	printf("%zd\n", sizeof(p[0]));//p[0] --> *(p+0) --> *p 1
//	printf("%zd\n", sizeof(&p));//二级指针，是指针变量p的地址，4/8
//	printf("%zd\n", sizeof(&p+1));//&p+1是指向p指针变量后面的空间，跳过一个指针变量的大小
//	printf("%zd\n", sizeof(&p[0]+1));//&p[0] + 1是'b'的地址 4/8
//}

int my_strlen(const char* str)
{
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return 0;
}

//int main()
//{
//	int* p = "abcdef";
//	printf("%d\n", strlen(p));//p是数组首元素的地址 6
//	printf("%d\n", strlen(p+1));//'b' 5
//	printf("%d\n", strlen(*p));//err
//	printf("%d\n", strlen(p[0]));///p[0] -- *(p+0) -- *p -- 'a'/err
//	printf("%d\n", strlen(&p));//随机值
//	printf("%d\n", strlen(&p+1));//随机值
//	printf("%d\n", strlen(&p[0] + 1));//5
//}

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%zd\n", sizeof(a));//12*4 = 48
//	printf("%zd\n", sizeof(a[0][0]));//4
//	printf("%zd\n", sizeof(a[0]));//第1行1维数组的数组名，
//	//数组名单独放在sizeof内部 16
//	printf("%zd\n", sizeof(a[0]+1));//这里表示数组首元素，也就是a[0][0]的地址，
//	//+1是a[0][1]的地址
//	printf("%zd\n", sizeof(*(a[0] + 1)));//元素'0'，4
//	printf("%zd\n", sizeof(a+1));//a表示二维数组的数组名，但没&，
//	//也没有单独放在sizeof内部，所以这里的a是数组首元素的地址，应该是第一行的地址
//	//a+1是第二行的地址，4/8
//	printf("%zd\n", sizeof(*(a + 1)));//*(a+1) --> a[1] - 第二行的数组名
//	printf("%zd\n", sizeof(&a[0]+1));//&a[0]是第一行的地址，+1是第二行地址，4/8
//	printf("%zd\n", sizeof(*(&a[0] + 1)));//16
//	printf("%zd\n", sizeof(*a));//这里的a是第一行的地址，*a就是第一行，16
//	//*a -- *(a+0) -- a[0]
//	printf("%zd\n", sizeof(a[3]));//这里不存在越界
//	//因为sizeof内部的表达式不会参与真实运算，16
//}

#include<stdio.h>
//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d %d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//struct Test
//{
//	int Num;
//	char* pcName;
//	short sData;
//	char cha[2];
//	short sBa[4];
//}*p = (struct Test*)0x100000;
//
//int main()
//{
//	printf("%#x\n", p + 0x1);//0x100000+20=0x100014
//	printf("%#x\n", (unsigned long)p + 0x1);//0x100000+1=0x100001
//	printf("%#x\n", (unsigned int*)p + 0x1);//0x100000+4=0x100004
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//{ 1,3,5 }
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//}

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);//cpp[-2] --> *(cpp-2)
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}

//int main()
//{
//	int ch = getchar();
//	if (ch >= 'A' && ch < 'Z')
//	{
//		printf("大写\n");
//	}
//	else if (ch >= 'a' && ch <= 'z')
//	{
//		printf("小写\n");
//	}
//	return 0;
//}

#include<ctype.h>
//int main()
//{
//	int ch = getchar();
//	if (islower(ch))
//	{
//		printf("小写\n");
//	}
//	else if(isupper(ch))
//	{
//		printf("大写\n");
//	}
//	return 0;
//}

int main()
{
	char arr[] = "I Am A Student";
	int i = 0;
	while (arr[i])
	{
		if (isupper(arr[i]))
		{
			//arr[i] += 32;
			arr[i] = tolower(arr[i]);
		}
		putchar(arr[i]);
		i++;
	}
	return 0;
}