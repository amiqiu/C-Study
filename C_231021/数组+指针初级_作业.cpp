#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����
//int main()
//{
//	int arr[10];
//	
//	//int count = 10;
//	//int arr2[count];//�������ʽ�ſ���
//	//VS2019 2022 ������IDE ��֧��C99 �еı䳤����
//
//	//C99 ��׼֮ǰ ����Ĵ�Сֻ��˵�������ʽ
//	// C99 ��׼�������ˣ��䳤����ĸ��ʹ�������ڴ�����ʱ�����ʹ�ñ���
//	// �������������鲻�ܳ�ʼ��
//	//
//	return 0;
//}
//

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr1[10] = { 1,2,3 };//����ȫ��ʼ����ʣ���Ԫ��Ĭ�϶���0
//	int arr2[10] = { 0 };//����ȫ��ʼ����ʣ���Ԫ��Ĭ�϶���0
//	int arr3[] = { 0 };//ʡ������Ĵ�С����������ʼ��
//	//����Ĵ�С�Ǹ��ݳ�ʼ����������ȷ����
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

// һά�������ڴ�Ĵ洢
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

//ʹ��ָ���ӡ��������
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
//�ο��𰸣�
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


//�ַ�������
// ��һ���ַ���str�����ݵߵ��������������
// ���ݷ�Χ��1��len(str)��10000
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
//�ο��𰸣�
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
// ע�⣺���������OJʱ������Ҫ����ѭ�����룬
// ��Ϊÿ���㷨�����ж����������������֤��
// �ο�����main����д����
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


//��ӡ����
//int main()
//{
//	int num = 0;
//in:
//	scanf("%d", &num);
//	while (num % 2 != 1)
//	{
//		printf("����������\n");
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
//�ο��𰸣�
//˼·��
//��ϸ�۲�ͼ�Σ����Է��֣���ͼ�������ɿո��*���ղ�ͬ�����������ɵġ�
//�����ǣ�������ո񣬺����*��ÿ����
//  �ո񣺴������£�һ�м���һ��
//  *��2*i+1�ķ�ʽ����
//
//�����ǣ�������ո񣬺����*��ÿ����
//  �ո񣺴������£�ÿ�ж�һ���ո�
//  *�� �������£�����2*(line-1-i)-1�ķ�ʽ���٣�
//  ���У�line��ʾ�ܹ��ж�����
//����������ʽ���������Ǻ��������еĿո��*�ֱ�������ɡ�

//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d", &line);//7
//	//��ӡ�ϰ벿��
//	for (i = 0; i < line; i++)
//	{
//		//��ӡһ��
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//
//	//��ӡ�°벿��
//	for (i = 0; i < line - 1; i++)
//	{
//		//��ӡһ��
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


//��ӡˮ�ɻ���
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
//�ο��𰸣�
/*
˼·��
����Ĺؼ�����ֻҪ֪���ж�һ�������Ƿ�Ϊˮ�ɻ����ķ�ʽ�������ӭ�ж��⡣�ٶ�����һ������data�������ⷽʽ���£�
1. ��ȡdata�Ǽ�λ��
2. ��ȡdata��ÿ��λ���ϵ����ݣ�����������������
3. ��data��ÿ��λ�ϵ��������������ɺ��ڼ�������Ƿ���data��ȼ��ɣ�
��ȣ���Ϊˮ�ɻ���
���򣺲���
����ʵ�ֲο����´��롣
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
//		//�ж�i�Ƿ�Ϊˮ�ɻ���
//		//1. ���ж����ֵ�λ��
//		while (tmp / 10)
//		{
//			count++;
//			tmp = tmp / 10;
//		}
//
//		//2. ����ÿһλ�Ĵη���
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//
//		//3. �ж�
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

//�������
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
//�ο��𰸣�
/*
˼·��
ͨ���۲���Է��֣��ñ��ʽ�ĵ�i������i��a���֣���ˣ�
�����i��Ϊtemp�����i+1��Ϊtemp*10+a
����ο����´���
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