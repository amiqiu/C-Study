#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//数组
//int main()
//{
//	int arr[10];
//	
//	//int count = 10;
//	//int arr2[count];//常量表达式才可以
//	//VS2019 2022 这样的IDE 不支持C99 中的变长数组
//
//	//C99 标准之前 数组的大小只能说常量表达式
//	// C99 标准中引入了：变长数组的概念，使得数组在创建的时候可以使用变量
//	// 但是这样的数组不能初始化
//	//
//	return 0;
//}
//

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr1[10] = { 1,2,3 };//不完全初始化，剩余的元素默认都是0
//	int arr2[10] = { 0 };//不完全初始化，剩余的元素默认都是0
//	int arr3[] = { 0 };//省略数组的大小，数组必须初始化
//	//数组的大小是根据初始化的内容来确定的
//	int arr4[] = { 1,2,3 };
//	//int arr5[];//err
//
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	char arr2[] = { 'a',98,'c' };
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//              0 1 2 3 4 5 6 7 8 9
//	printf("%d\n", arr[5]);
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	printf("%d\n", (sizeof(arr) / sizeof(arr[0])));
//
//	return 0;
//}

// 一维数组在内存的存储
// 
//

//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}

//使用指针打印数组内容
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//参考答案：
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}


//字符串逆序
// 将一个字符串str的内容颠倒过来，并输出。
// 数据范围：1≤len(str)≤10000
//
//#include<string.h>
//int main()
//{
//	char ch[10000] = "0";
//	gets_s(ch);
//	char* p = ch;
//	int i = 0;
//	for (i = strlen(ch)-1; i >=0; i--)
//	{
//		printf("%c", *(p+i));
//	}
//	return 0;
//}
//参考答案：
//#include<string.h>
//void Reverse(char* str)
//{
//	char* left = str;
//	char* right = str + strlen(str) - 1;
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char str[] = "hello bit";
//	Reverse(str);
//	for (int i = 0; i < strlen(str); i++)
//	{
//		printf("%c", *(str + i));
//	}
//	return 0;
//}
// 注意：如果是在线OJ时，必须要考虑循环输入，
// 因为每个算法可能有多组测试用例进行验证，
// 参考以下main函数写法，
//
//int main()
//{
//	char str[101] = { 0 };
//	while (gets_s(str))
//	{
//		Reverse(str);
//		printf("%s\n", str);
//		memset(str, 0, sizeof(str) / sizeof(str[0]));
//	}
//	return 0;
//}


//打印菱形
//int main()
//{
//	int num = 0;
//in:
//	scanf("%d", &num);
//	while (num % 2 != 1)
//	{
//		printf("请输入奇数\n");
//		goto in;
//	}
//	int i = 0;
//	int j = 0;
//	int mid = (num / 2) + 1;
//	for (i = 0; i <= num/2; i++)
//	{
//		for (j = 1; j <= num; j++)
//		{
//			if ((j <= mid + i) && (j >= mid - i))
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	for (i = num / 2-1; i >= 0; i --)
//	{
//		for (j = num; j >= 1; j--)
//		{
//			if ((j <= mid + i) && (j >= mid - i))
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
//参考答案：
//思路：
//仔细观察图形，可以发现，此图形中是由空格和*按照不同个数的输出组成的。
//上三角：先输出空格，后输出*，每行中
//  空格：从上往下，一行减少一个
//  *：2*i+1的方式递增
//
//下三角：先输出空格，后输出*，每行中
//  空格：从上往下，每行多一个空格
//  *： 从上往下，按照2*(line-1-i)-1的方式减少，
//  其中：line表示总共有多少行
//按照上述方式，将上三角和下三角中的空格和*分别输出即可。

//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);//7
//	//打印上半部分
//	for (i = 0; i < line; i++)
//	{
//		//打印一行
//		//打印空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//
//	//打印下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//打印水仙花数
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = 0;
//		int j = 0;
//		int sum = 0;
//		int k = i;
//		for (n = 0; k >= (int)pow(10, n);)
//		{
//			n++;
//		}
//		for (j = 1; j <= n; j++)
//		{
//			sum += (int)pow(k % 10, n);
//			k /= 10;
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//参考答案：
/*
思路：
此题的关键在于只要知道判断一个数据是否为水仙花数的方式，问题就迎刃而解。假定给定一个数据data，具体检测方式如下：
1. 求取data是几位数
2. 获取data中每个位置上的数据，并对其进行立方求和
3. 对data中每个位上的数据立方求和完成后，在检测其结果是否与data相等即可，
相等：则为水仙花数
否则：不是
具体实现参考以下代码。
*/
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 999999; i++)
//	{
//		int count = 1;
//		int tmp = i;
//		int sum = 0;
//		//判断i是否为水仙花数
//		//1. 求判断数字的位数
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//
//		//2. 计算每一位的次方和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//
//		//3. 判断
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

//计算求和
//#include<math.h>
//int main()
//{
//	int num = 0;
//	int i = 0;
//	int sum = 0;
//	scanf("%d", &num);
//	for (i = 1; i <= 5; i++)
//	{
//		sum += (num * (int)pow(10, 5 - i) * i);
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//参考答案：
/*
思路：
通过观察可以发现，该表达式的第i项中有i个a数字，因此：
假设第i项为temp，则第i+1项为temp*10+a
具体参考以下代码
*/
int main()
{
	int a = 0;
	int n = 0;
	int i = 0;
	int sum = 0;
	int tmp = 0;


	scanf("%d%d", &a, &n);
	for (i = 0; i < n; i++)
	{
		tmp = tmp * 10 + a;
		sum += tmp;
	}
	printf("%d\n", sum);

	return 0;
}