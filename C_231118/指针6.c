#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void bubble_sort(int arr[], int sz)
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
			return 0;
		}
	}
}

void print_arr(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//void test1()
//{
//	//排序一组整型数组
//	int arr[] = { 3,1,5,7,9,2,4,0,8,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}

#include<stdlib.h>
int cmp_int(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;
}

void test2()
{
	int arr[] = { 3,1,5,7,9,2,4,0,8,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}


void Swap(char* buf1, char* buf2, size_t width)
{
	for (int i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort2(
	void* base, size_t sz,
	size_t width,
	int (*cmp)(const void* p1, const void* p2))
{
	for (int i = 0; i < sz - 1; i++)
	{
		int flg = 1;
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1)*width) > 0)
			{
				/*int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;*/
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flg = 0;
			}
		}
		if (flg == 1)
		{
			return 0;
		}
	}
}

void test3()
{
	int arr[] = { 3,1,5,7,9,2,4,0,8,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort2(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}

struct Stu
{
	char name[20];
	int age;
};

#include<string.h>
int cmp_stu_by_name(const void* p1, const void* p2)
{
	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
}

int cmp_stu_by_age(const void* p1, const void* p2)
{
	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
}

void test4()
{
	struct Stu arr[] = { {"zhangsan",18},{"lisi",35},{"wangwu",15} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort2(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
	for (int i = 0; i < sz; i++)
	{
		printf("%s %d\n", arr[i].name, arr[i].age);
	}
}

int main()
{
	//test1();
	//test2();
	//test3();
	test4();
	return 0;
}

// 数组名的理解
// 数组名一般表示数组首元素的地址
// 两个例外：
// 1.sizeof(数组名)，数组名表示整个数组，计算的是整个数组的大小，单位字节
// 2.&数组名，数组名表示整个数组，取出数组的地址
// 除此之外，遇到的数组名都是数组首元素的地址
//