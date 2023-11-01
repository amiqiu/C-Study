#define _CRT_SECURE_NO_WARNINGS 1

// 调试（debug）
// 调试版本
// Release
// 发布版本
// 断点
// 打断程序的执行，让程序执行到想要的位置暂停
// F5运行到断点处
// F10 逐过程执行，会跳过一句函数
// F11 逐句执行
//

#include<stdio.h>

//void test()
//{
//	printf("test\n");
//}
//
//int main()
//{
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	test();
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//
//	return 0;
//}


// 想观察第8次循环
// 断点加条件
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

// 监视和内存观察
// 监视 - 开始调试后，在菜单栏中【调试】、【窗口】、【监视】
// 内存 - 开始调试后，在菜单栏中【调试】、【窗口】、【内存】
//
//int main()
//{
//	int arr[10] = { 0 };
//	int num = 100;
//	char c = 'w';
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}

// 阶乘
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	int ret = 1;
//	for (int j = 1; j <= n; j++)
//	{
//		ret = 1;
//		for (int i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
// 进阶
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

// 在VS2022、debug、x86环境
// 栈区内存使用习惯是从高到底的
// 数组在内存中是连续存放的
// 随着下标的增长，地址是由低到高变化的
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;//越界
//		printf("hehe\n");
//	}
//	return 0;
//}

//void test(int arr[3][5])
//{
//
//}
//
//int main()
//{
//	int arr[3][5] = {1,2,3,4,5,6,7,8,9,10};
//	test(arr);
//	return 0;
//}

// 编译错误
// 一般为语法错误
// 
// 链接错误
//