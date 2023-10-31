#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
    int n = 0;
    int m = 0;
    int arr1[1000] = { 0 };
    int arr2[1000] = { 0 };
    // ‰»Î
    scanf("%d %d", &n, &m);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    //¥¶¿Ì
    int j = 0;
    i = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            printf("%d ", arr1[i]);
            i++;
        }
        else
        {
            printf("%d ", arr2[j]);
            j++;
        }
    }
    if (i == n)
    {
        for (; j < m; j++)
        {
            printf("%d ", arr2[j]);
        }
    }
    else
    {
        for (; i < n; i++)
        {
            printf("%d ", arr1[i]);
        }
    }
    return 0;
}

int main2()
{
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", arr[i]);
	}
	int max = arr[0];
	for (int i = 1; i < 10; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	printf("max = %d\n", max);
	return 0;
}

int main1()
{
	char* str1 = "abcdef";
	char* str2 = "abcfef";
	int ret = strcmp(str1, str2);
	printf("%d\n", ret);
	return 0;
}