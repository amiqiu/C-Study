#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int main()
//{
//	char arr[] = "zhangsan@163.com";
//	char arr2[30] = { 0 };
//	strcpy(arr2, arr);
//	const char* p = "@.";
//	//strtok(arr2, p);
//	char* s = NULL;
//	for (s = strtok(arr2, p); s != NULL; s = strtok(NULL, p))
//	{
//		printf("%s\n", s);
//	}
//	return 0;
//}

// strerror
//

//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d: %s\n", i, strerror(i));
//	}
//}

//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	memcpy(arr2, arr1 + 3, 5 * sizeof(int));
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[10] = "helloworld";
//	char arr2[10] = { 0 };
//	memcpy(arr2, arr1, 5);
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%c ", arr2[i]);
//	}
//	return 0;
//}

//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1 + 3, 5 * sizeof(int));
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	memmove(arr1+2, arr1, 5 * sizeof(int));
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[] = { 1,2,3,4,8 };
//	int ret = memcmp(arr1, arr2, 17);
//	printf("%d\n", ret);
//	return 0;
//}

// �������ڴ��еĴ洢
// ������2���Ʊ�ʾ���������֣��� ԭ�롢����ͷ���
//

//�жϵ�ǰ�����Ǵ�˻���С��
int main()
{
	int a = 1;
	char* p = (char*)&a;
	int b = 0x11223344;
	if (*p == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}