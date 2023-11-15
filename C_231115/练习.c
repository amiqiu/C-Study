#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//void Print(int* p,int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	return 0;
//}

//void Sort(int* p, int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int flg = 1;
//		for (int j = 0; j < sz - i; j++)
//		{
//			if (*(p + j) < *(p + j + 1))
//			{
//				int tmp = *(p + j + 1);
//				*(p + j + 1) = *(p + j);
//				*(p + j) = tmp;
//				flg = 0;
//			}
//		}
//		if (flg == 1)
//		{
//			return;
//		}
//	}
//	printf("\n");
//}
//void Print(int* p,int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 12,2,3,43,5,36,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	Sort(arr,sz);
//	Print(arr, sz);
//	return 0;
//}

void Func(int* p, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		while (left < right && (*(p + left) % 2 == 1))
		{
			left++;
		}
		while (left < right && (*(p + right) % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = *(p + left);
			*(p + left) = *(p + right);
			*(p + right) = tmp;
		}
	}
}
void Print(int* p,int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");
}
int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Func(arr, sz);
	Print(arr, sz);
	return 0;
}