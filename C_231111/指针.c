#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	
//	//...
//	p = NULL;
//
//	//...
//	if (p != NULL)
//	{
//		//...
//	}
//	return 0;
//}

//#define NDEBUG
//#include<assert.h>
//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	//...
//	p = NULL;
//	assert(p != NULL);
//	printf("%d\n", *p);
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
//	int ret = Add(a, b);//传值调用
//	printf("%d\n", ret);
//	return 0;
//}

//#include<string.h>
//
//size_t my_strlen(const char* s)
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
//	char arr[] = "abcdef";
//	//int len = strlen(arr);
//	//size_t len = strlen(arr);
//	size_t len = my_strlen(arr);
//	printf("%zd\n", len);
//	return 0;
//}

//void Swap1(int x, int y)
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//
//void Swap2(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d\n", a, b);
//	Swap2(&a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//int*
//	printf("%p\n", arr+1);//+4
//
//	printf("%p\n", &arr[0]);//int*
//	printf("%p\n", &arr[0] + 1);//+4
//
//	printf("%p\n", &arr);//
//	printf("%p\n", &arr+1);//+40
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	//p <==> arr
//	for (int i = 0; i < sz; i++)
//	{
//		scanf("%d", p + i);
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		//*(i+arr)->*(arr+i)->arr[i]
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

// 冒泡排序：
// 思想：相邻的两个元素比较，如果不满足顺序就交换
//

void BubbleSort(int arr[], int sz)
{
	for (int i = 0; i < sz - 1; i++)
	{
		int flg = 1;
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flg = 0;
			}
		}
		if (flg == 1)
		{
			break;
		}
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//数组排序，升序
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr,sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}