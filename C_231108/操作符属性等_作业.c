#define _CRT_SECURE_NO_WARNINGS 1

// 单身狗1
// 在一个整型数组中，只有一个数字出现一次，
// 其他数组都是成对出现的，请找出那个只出现一次的数字。
// 例如：
// 数组中有：1 2 3 4 5 1 2 3 4，只有5出现一次，其他数字都出现2次，找出5
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

