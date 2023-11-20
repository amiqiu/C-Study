#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Func(int arr[], int len)
{
	int ret = 0;
	for (int i = 0; i < len; i++)
	{
		ret ^= arr[i];
	}
	return ret;
}

//打印奇偶数位

void Func2(int n)
{
	for (int i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (n >> 1) & 1);
	}
	for (int i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (n >> 1) & 1);
	}
}

int Func3(int m, int n)
{
	int tmp = m ^ n;
	int count = 0;
	while (tmp != 0)
	{
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}

//int main()
//{
//	int arr[] = { 1,2,3,2,1 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int ret = Func(arr, len);
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}

#include<string.h>
void Reverse(char* str)
{
	char* left = str;
	char* right = str + strlen(str) - 1;
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}

}

//把str左移time个字符
void leftRound(char* str, int time)
{
	int len = strlen(str);
	time = time % len;
	for (int i = 0; i < time; i++)
	{
		int j = 0;
		char tmp = str[0];
		for (j = 0; j < len-1; j++)
		{
			str[j] = str[j + 1];
		}
		str[j] = tmp;
	}
}

void Reverse2(char* str, int start, int end)
{
	int left = start;
	int right = end;
	while (left < right)
	{
		char tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}

}

void leftRound2(char* str, int time)
{
	int len = strlen(str);
	time = time % len;
	Reverse2(str, 0, time - 1);
	Reverse2(str, time, len - 1);
	Reverse2(str, 0, len - 1);
}


//int main()
//{
//	char str[10000] = { 0 };
//	gets(str);
//	//Reverse(str);
//	//leftRound(str, 1);
//	leftRound2(str, 3);
//	printf("%s\n", str);
//}

void Func4(int arr[], int len)
{
	int left = 0;
	int right = len - 1;
	while (left < right)
	{
		while (left < right && arr[left] % 2 != 0)
		{
			left++;
		}
		while (left < right && arr[right] % 2 == 0)
		{
			right--;
		}
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Func4(arr, len);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//单身狗
