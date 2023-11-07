#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 5;
//	int b = 10;
//	printf("a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	for (int i = 31; i >=0; i--)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			printf("1");
//			count++;
//		}
//		else
//			printf("0");
//	}
//	printf("\n%d个1", count);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("偶数位：");
//	for (int i = 31; i >=0; i-=2)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			printf("1 ");
//		}
//		else
//			printf("0 ");
//	}
//	printf("\n奇数位：");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			printf("1 ");
//		}
//		else
//			printf("0 ");
//	}
//	return 0;
//}

//int main() {
//    int a, b;
//    while (scanf("%d %d", &a, &b) != EOF) {
//        int tmp = a ^ b;
//        int count = 0;
//        while (tmp)
//        {
//            tmp = tmp & (tmp - 1);
//            count++;
//        }
//        printf("%d\n", count);
//    }
//    return 0;
//}