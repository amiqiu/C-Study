#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int data[10] = { 1,2,3,4,5,6,7,8,9,10 };//��ȫ��ʼ��
//	int data2[10] = { 1,2,3,4,5 };//����ȫ��ʼ����ʣ��Ԫ��Ĭ�ϳ�ʼ��0
//	//int data3[3] = { 1,2,3,4 };//err
//	int data4[] = { 1,2,3,4,5 };//���������ʼ���ˣ�ʡ���������С�趨
//	//���������������ĳ�ʼ��������ȷ���������ʵ��С
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
//		//& ȡ��ַ���� %p ��ӡ��ַ
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
//	printf("%d\n", sizeof(arr));//�������������ܴ�С����λ�����ֽ�
//	printf("%d\n", sizeof(arr[0]));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//}

// ��ά����
// 
//
//int main()
//{
//	int arr1[3][5] = { 1,2,3,4,5,6,7 };//����ȫ��ʼ��
//	//���γ�ʼ��ÿһ�У�������ʱ�򣬳�ʼ����һ��
//	int arr2[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7 };//��ȫ��ʼ��
//	int arr3[3][5] = { {1,2,3},{4,5,6},{7,8,9} };//���г�ʼ��
//	//��ά�����ʼ�����п���ʡ�ԣ��в�����
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

// ��ά������һ��һά����
// ��ά�����е�ÿһ��Ԫ�ض���������ŵ�
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

// C99�ı䳤����
// C99֮ǰ������Ĵ�С�����ó���ָ����
// C99֮�������˱䳤����ĸ�������ñ�����ָ������Ĵ�С
// �ź����ǣ�VSĬ���ǲ�֧��C99�ı䳤�����
//

//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!!!!!";
//	char arr2[] = "########################";
//	int left = 0;
//	//int sz = strlen(arr1) - 1;//��ȡ��С string.h
//	int sz = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	int right = sz;
//	while (left < right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//˯��1000ms windows.h
//		system("cls");//�����Ļ stdlib.h
//		left++;
//		right--;
//	}
//	return 0;
//}

// ���ֲ���
// ��������ݲ����۰����
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
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
		else if (arr[mid] < key)
			left = mid+1;
		else
			right = mid-1;
	}
	if (left > right)
		printf("�Ҳ���\n");
	return 0;
}