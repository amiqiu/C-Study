#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//�ж�2�����Ĵ�С
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    while (scanf("%d%d", &num1, &num2) != EOF)
//    {
//        if (num1 > num2)
//            printf("%d>%d\n", num1, num2);
//        else if (num1 < num2)
//            printf("%d<%d\n", num1, num2);
//        else
//            printf("%d=%d\n", num1, num2);
//    }
//    return 0;
//}

//�߶�ͼ��
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//��ӡ3�ı�������
//int main() {
//    int i = 0;
//    for (i = 1; i <= 100; i++)
//    {
//        if (i % 3 == 0)
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}


//�Ӵ�С���
//#include <stdio.h>
//
//int main() {
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d%d%d", &a, &b, &c);
//    if (a < b)
//    {
//        a = a ^ b;
//        b = a ^ b;
//        a = a ^ b;
//    }
//    if (a < c)
//    {
//        a = a ^ c;
//        c = a ^ c;
//        a = a ^ c;
//    }
//    if (b < c)
//    {
//        b = b ^ c;
//        c = b ^ c;
//        b = b ^ c;
//    }
//    printf("%d %d %d", a, b, c);
//    return 0;
//}