#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int Func(char s1[], char s2[])
//{
//	char arr[1000] = { 0 };
//	strcpy(arr, s1);
//	strcat(arr, s1);
//	int ret = strstr(arr, s2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	char s1[10];
//	char s2[10];
//	gets(s1);
//	gets(s2);
//	int ret = Func(s1, s2);
//	if (ret == 1)
//		printf("yes");
//	else
//		printf("no");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char k;
//	for (char k = 'a'; k <= 'd'; k++)
//	{
//		if (((k != 'a') + (k == 'c') + (k == 'd') + (k != 'd')) == 3)
//		{
//			printf("Ð×ÊÖÊÇ%c\n", k);
//		}
//	}
//	return 0;
//}

#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int num[100][100] = { 0 };
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (j == i || j == 1)
			{
				num[i][j] = 1;
				printf("%d ", num[i][j]);
			}
			else
			{
				num[i][j] = num[i - 1][j - 1] + num[i - 1][j];
				printf("%d ", num[i][j]);
			}
		}
		printf("\n");
	}
}