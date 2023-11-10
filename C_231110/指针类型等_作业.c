#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#include <string.h>

//int main() {
//    char ch[10000] = { '\0' };
//    char* p = ch;
//    gets(ch);
//    int sz = strlen(ch);
//    for (int i = sz - 1; i >= 0; i--)
//    {
//        printf("%c", *(p + i));
//    }
//    printf("\n");
//    return 0;
//}

//int main()
//{
//	char ch[100] = { '\0' };
//	char* const p = ch;
//	gets(ch);
//	int sz = strlen(ch);
//	int k = 0;
//	scanf("%d", &k);
//	while (k)
//	{
//		*(p + sz) = *p;
//		for (int i = 0; i < sz; i++)
//		{
//			*(p + i) = *(p + i) ^ *(p + i + 1);
//			*(p + i + 1) = *(p + i) ^ *(p + i + 1);
//			*(p + i) = *(p + i) ^ *(p + i + 1);
//		}
//		k--;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%c", *(p + i));
//	}
//	return 0;
//}

//int my_strlen(char* ch)
//{
//	char* start = ch;
//	while (*ch)
//	{
//		ch++;
//	}
//	return ch - start;
//}
//
//int main()
//{
//	char ch[20] = { '\0' };
//	gets(ch);
//	int len = my_strlen(ch);
//	printf("%d\n", len);
//	return 0;
//}