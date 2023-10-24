#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int data[10] = { 1,2,3,4,5,6,7,8,9,10 };//完全初始化
//	int data2[10] = { 1,2,3,4,5 };//不完全初始化，剩余元素默认初始化0
//	//int data3[3] = { 1,2,3,4 };//err
//	int data4[] = { 1,2,3,4,5 };//数组如果初始化了，省略了数组大小设定
//	//编译器会根据数组的初始化内容来确定数组的真实大小
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };//int [10]
//	for (int i = 0; i < 10; i++)
//		scanf("%d", arr[i]);
//	for (int i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//		//& 取地址符号 %p 打印地址
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//
//	int arr[10];
//	printf("%d\n", sizeof(arr));//计算的是数组的总大小，单位就是字节
//	printf("%d\n", sizeof(arr[0]));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}

// 二维数组
// 
//
//int main()
//{
//	int arr1[3][5] = { 1,2,3,4,5,6,7 };//不完全初始化
//	//依次初始化每一行，当不够时候，初始化下一行
//	int arr2[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };//完全初始化
//	int arr3[3][5] = { {1,2,3},{4,5,6},{7,8,9} };//按行初始化
//	//二维数组初始化，行可以省略，列不可以
//	int arr4[][5] = { 1,2,3,4,5,6 };
//
//	return 0;
//}

//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };
//	printf("%d\n", arr[2][4]);
//	return 0;
//}

//int main()
//{
//	int arr[3][5] = { 0 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

// 二维数组是一个一维数组
// 二维数组中的每一个元素都是连续存放的
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, & arr[i][j]);
//		}
//	}
//	return 0;
//}

// C99的变长数组
// C99之前，数组的大小都是用常量指定的
// C99之后，引入了变长数组的概念，可以用变量来指定数组的大小
// 遗憾的是，VS默认是不支持C99的变长数组的
//

//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!!!!!";
//	char arr2[] = "########################";
//	int left = 0;
//	//int sz = strlen(arr1) - 1;//获取大小 string.h
//	int sz = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	int right = sz;
//	while (left < right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//睡眠1000ms windows.h
//		system("cls");//清空屏幕 stdlib.h
//		left++;
//		right--;
//	}
//	return 0;
//}

// 二分查找
// 有序的数据才能折半查找
//

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int key = 0;
	scanf("%d", &key);
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] == key)
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
		else if (arr[mid] < key)
			left = mid+1;
		else
			right = mid-1;
	}
	if (left > right)
		printf("找不到\n");
	return 0;
}