#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	return 0;
//}

// ������
// 1.һС�δ���
// ���ĳ���ض�������
// �����ĺô���
// 1.���Բ������
// 2.���Ը��ã���������Ч��
// �⺯�� - �ֳɵ�
// �Զ��庯�� - �Լ�����ĺ���
// 
// C���Թ涨���﷨����
// C���Ա����ṩ�⺯��
// ����C���Թ涨�ˣ�һЩ�⺯���ĸ�����Ϣ
// scanf - ���֣��������������ͣ���������...
//

//#include<math.h>
//int main()
//{
//	double ret = sqrt(16.0);//sqrt - ��ƽ����
//	printf("%lf\n", ret);
//	return 0;
//}

//int Add(int a, int b)//������ʽ����
//{
//	return a + b;
//}
//
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int ret = Add(a, b);// a b��ʵ�ʲ���
//	printf("%d\n", ret);
//	return 0;
//}

// �βκ�ʵ��
// ʵ�� - ��������ʱ�����ݸ������ľ���ʵ��
//

//void menu()
//{
//	printf("**************************\n");
//	printf("**************************\n");
//	printf("**************************\n");
//	printf("**************************\n");
//}
//
//int main()
//{
//	menu();
//	return 0;
//}

//void set_arr(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = -1;
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print_arr(arr, sz);
//	set_arr(arr,sz);
//	print_arr(arr, sz);
//
//	return 0;
//}

//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//
//// 31 28 31 30 31 30 31 31 30 31 30 31
////    29
//int get_days_of_month(int y, int m)
//{
//	int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int day = days[m];
//	if (is_leap_year(y) && m == 2)
//	{
//		day++;
//	}
//	return day;
//}
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%d%d", &year, &month);
//	int d = get_days_of_month(year, month);
//	printf("%d\n", d);
//	return 0;
//}

//#include<string.h>
//
//int main()
//{
//	//size_t len = strlen("abcdef");
//	//printf("%zd\n", len);
//	printf("%zd\n", strlen("abcdef"));//��ʽ����
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

// �������� - ���߱��������������֣���������������
//int is_leap_year(int y);
//
//// �������� - ��һ�����������
////int is_leap_year(int y)
////{
////	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
////		return 1;
////	else
////		return 0;
////}
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int ret = is_leap_year(year);
//	if (ret == 1)
//		printf("������\n");
//	else
//		printf("��������\n");
//
//	return 0;
//}
//
//// ��������
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
//		return 1;
//	else
//		return 0;
//}

// ��ʵ�ϣ�����ҵ��д����
#include "add.h"

int main()
{
	int a = 10;
	int b = 20;

	int c = Add(a, b);
	printf("%d", c);
	return 0;
}