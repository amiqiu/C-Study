#define _CRT_SECURE_NO_WARNINGS 1

// ����1
// ��һ�����������У�ֻ��һ�����ֳ���һ�Σ�
// �������鶼�ǳɶԳ��ֵģ����ҳ��Ǹ�ֻ����һ�ε����֡�
// ���磺
// �������У�1 2 3 4 5 1 2 3 4��ֻ��5����һ�Σ��������ֶ�����2�Σ��ҳ�5
//
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++) 
	{
		int flg = 1;
		for (int j = 0; j < sz; j++)
		{
			if (i != j)
			{
				if (arr[i] == arr[j])
				{
					flg = 0;
					break;
				}

			}
		}
		if (flg == 1)
			printf("%d ", arr[i]);
	}
	return 0;
}

