#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

// һ��ָ��
// char*
// int*
// ����ָ��
// char**
// int**
// ָ������ - �����飬ÿ��Ԫ����ָ��
// char* arr[5]
// double* arr[5]
// ����ָ�� - ָ�룬��ָ�������ָ��
// int arr[10];
// int (*pa)[10] = &arr;
// char* ar[5];
// (*par)[5] = &arr;
// 
// ����ָ�� - ָ�� - ��ָ������ָ��
// 
//int test(char* c, int n)
//{
//	//..
//	return 0;
//}
//
//int main()
//{
//	int (*pf)(char*, int*) = &test;//test
//	(*pf)("abcdef", 10);
//	test("abcde", 10);
//	pf("abc", 10);
//	return 0;
//}

//void(*signal(int, void(*)(int)))(int);
//// signal��һ����������
//// signal�����ĵ�һ��������������int
//// signal�����ĵڶ��������Ǻ���ָ�룺void(*)(int)
//// �������ָ��ָ��ĺ���������int���ͣ�����������void
//// signal�����ķ�������Ҳ��һ������ָ�룺void(*)(int)
//// �������ָ��ָ��ĺ���������int���ͣ�����������void
////
//
//typedef void(*pf_t)(int);
//
//pf_t signal(int, pf_t);
//

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}
//
//int main()
//{
//	int (*pf)(int, int) = Add;
//	int (*pfArr[4])(int, int) = { Add, Sub, Mul, Div };//����ָ������
//
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d ", pfArr[i](6, 2));
//	}
//
//	return 0;
//}

// ʵ��һ��������
// ����������ܹ����������ļӼ��˳�
//

void menu()
{
	printf("*****************************\n");
	printf("*****  1.add    2.sub  ******\n");
	printf("*****  3.mul    4.div  ******\n");
	printf("*****  0.exit          ******\n");
	printf("*****************************\n");

}

void calc(int (*pf)(int, int))
{
	int x = 0;
	int y = 0;
	printf("������������������");
	scanf("%d%d", &x, &y);
	printf("%d\n", pf(x, y));
}

//int main()
//{
//	int input = 0;
//	//int x = 0;
//	//int y = 0;
//	do
//	{
//		menu();
//		printf("�����룺");
//		scanf("%d", &input);
//		//int (*pfArr[])(int, int) = { NULL, Add, Sub, Mul, Div };
//		//							 0		1	 2	  3		4
//		//if (input == 0)
//		//{
//		//	printf("�˳�������\n");
//		//}
//		//else if (input >= 1 && input <= 4)
//		//{
//
//		//	printf("������������������");
//		//	scanf("%d%d", &x, &y);
//		//	printf("%d\n", pfArr[input](x,y));
//		//}
//		//else
//		//{
//		//	printf("������ѡ��\n");
//		//}
//		switch (input)
//		{
//		case 1:
//			calc(Add);//��ɼ���
//			//printf("������������������");
//			//scanf("%d%d", &x,&y);
//			//printf("%d\n", Add(x,y));
//			break;
//		case 2:
//			calc(Sub);
//			//printf("������������������");
//			//scanf("%d%d", &x, &y);
//			//printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			calc(Mul);
//			//printf("������������������");
//			//scanf("%d%d", &x, &y);
//			//printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			calc(Div);
//			//printf("������������������");
//			//scanf("%d%d", &x, &y);
//			//printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("������ѡ��\n");
//			break;
//		}
//	} while (input);
//}

// ����ָ���ʹ�ã�qsort
// qsort �ǿ⺯���������������������⺯�����͵�����
//

void bubble_sort(int arr[], int sz)
{
	//����
	for (int i = 0; i < sz - 1; i++)
	{
		//һ��ð������Ĺ���
		int flg = 1;
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
				flg = 0;
			}
		}
		if (flg == 1)
		{
			break;
		}
	}
}

void printf_arr(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//int main()
//{
//	int arr[10] = { 4,2,6,7,3,5,1,8,0,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	return 0;
//}

//void qsort(
//	void* base,//baseָ����Ҫ���������ĵ�һ��Ԫ��
//	size_t num,//baseָ��������е�Ԫ�ظ������������Ԫ�صĸ�����
//	size_t size,//baseָ���������Ԫ�صĴ�С����λ���ֽڣ�
//	int (*compar)(const void*, const void*)
//	//����ָ�� - ָ��ĺ����������Ƚ������е�����Ԫ�ص�
//	);

int cmp_int(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;
}

#include <stdlib.h>

void test1()
{
	int arr[10] = { 4,2,6,7,3,5,1,8,0,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf_arr(arr, sz);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	printf_arr(arr, sz);
}

struct Stu
{
	char name[20];
	int age;
};

//��������Ƚ�
int cmp_stu_by_age(const void* p1, const void* p2)
{
	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
}

//�������ֱȽ�
#include<string.h>
int cmp_stu_by_name(const void* p1, const void* p2)
{
	// strcmp���� - �Ƚ��ַ�����С
	//
	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
}

void test2()
{
	struct Stu arr[] = { {"zhangsan",20},{"lisi",28},{"wangwu",18} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);

}

int main()
{
	//test1();
	test2();
	return 0;
}