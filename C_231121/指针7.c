#define _CRT_SECURE_NO_WARNINGS 1




//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));//arr��������Ԫ�صĵ�ַ 6
//	printf("%d\n", strlen(arr+0));//arr + 0��������Ԫ�صĵ�ַ��6
//	printf("%d\n", strlen(*arr));//? ���ݵ���'a' - 97 //err
//	printf("%d\n", strlen(arr[1]));//? 'b' - 98 //err
//	printf("%d\n", strlen(&arr));//6 &arr��Ȼ�������ַ����Ҳ��ָ���������ʼλ�� 6
//	printf("%d\n", strlen(&arr+1));//���ֵ
//	printf("%d\n", strlen(&arr[0]+1));//�ڶ���Ԫ�صĵ�ַ 5
//}

//int main()
//{
//	char* p = "abcdef";
//	printf("%zd\n", sizeof(p));//����p���ָ������Ĵ�С 4/8
//	printf("%zd\n", sizeof(p+1));//p+1���ַ�'b'�ĵ�ַ����ַ��С��4/8���ֽ�
//	printf("%zd\n", sizeof(*p));// 'a' 1
//	printf("%zd\n", sizeof(p[0]));//p[0] --> *(p+0) --> *p 1
//	printf("%zd\n", sizeof(&p));//����ָ�룬��ָ�����p�ĵ�ַ��4/8
//	printf("%zd\n", sizeof(&p+1));//&p+1��ָ��pָ���������Ŀռ䣬����һ��ָ������Ĵ�С
//	printf("%zd\n", sizeof(&p[0]+1));//&p[0] + 1��'b'�ĵ�ַ 4/8
//}

int my_strlen(const char* str)
{
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return 0;
}

//int main()
//{
//	int* p = "abcdef";
//	printf("%d\n", strlen(p));//p��������Ԫ�صĵ�ַ 6
//	printf("%d\n", strlen(p+1));//'b' 5
//	printf("%d\n", strlen(*p));//err
//	printf("%d\n", strlen(p[0]));///p[0] -- *(p+0) -- *p -- 'a'/err
//	printf("%d\n", strlen(&p));//���ֵ
//	printf("%d\n", strlen(&p+1));//���ֵ
//	printf("%d\n", strlen(&p[0] + 1));//5
//}

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%zd\n", sizeof(a));//12*4 = 48
//	printf("%zd\n", sizeof(a[0][0]));//4
//	printf("%zd\n", sizeof(a[0]));//��1��1ά�������������
//	//��������������sizeof�ڲ� 16
//	printf("%zd\n", sizeof(a[0]+1));//�����ʾ������Ԫ�أ�Ҳ����a[0][0]�ĵ�ַ��
//	//+1��a[0][1]�ĵ�ַ
//	printf("%zd\n", sizeof(*(a[0] + 1)));//Ԫ��'0'��4
//	printf("%zd\n", sizeof(a+1));//a��ʾ��ά���������������û&��
//	//Ҳû�е�������sizeof�ڲ������������a��������Ԫ�صĵ�ַ��Ӧ���ǵ�һ�еĵ�ַ
//	//a+1�ǵڶ��еĵ�ַ��4/8
//	printf("%zd\n", sizeof(*(a + 1)));//*(a+1) --> a[1] - �ڶ��е�������
//	printf("%zd\n", sizeof(&a[0]+1));//&a[0]�ǵ�һ�еĵ�ַ��+1�ǵڶ��е�ַ��4/8
//	printf("%zd\n", sizeof(*(&a[0] + 1)));//16
//	printf("%zd\n", sizeof(*a));//�����a�ǵ�һ�еĵ�ַ��*a���ǵ�һ�У�16
//	//*a -- *(a+0) -- a[0]
//	printf("%zd\n", sizeof(a[3]));//���ﲻ����Խ��
//	//��Ϊsizeof�ڲ��ı��ʽ���������ʵ���㣬16
//}

#include<stdio.h>
//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d %d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//struct Test
//{
//	int Num;
//	char* pcName;
//	short sData;
//	char cha[2];
//	short sBa[4];
//}*p = (struct Test*)0x100000;
//
//int main()
//{
//	printf("%#x\n", p + 0x1);//0x100000+20=0x100014
//	printf("%#x\n", (unsigned long)p + 0x1);//0x100000+1=0x100001
//	printf("%#x\n", (unsigned int*)p + 0x1);//0x100000+4=0x100004
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };//{ 1,3,5 }
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//}

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);//cpp[-2] --> *(cpp-2)
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}

//int main()
//{
//	int ch = getchar();
//	if (ch >= 'A' && ch < 'Z')
//	{
//		printf("��д\n");
//	}
//	else if (ch >= 'a' && ch <= 'z')
//	{
//		printf("Сд\n");
//	}
//	return 0;
//}

#include<ctype.h>
//int main()
//{
//	int ch = getchar();
//	if (islower(ch))
//	{
//		printf("Сд\n");
//	}
//	else if(isupper(ch))
//	{
//		printf("��д\n");
//	}
//	return 0;
//}

int main()
{
	char arr[] = "I Am A Student";
	int i = 0;
	while (arr[i])
	{
		if (isupper(arr[i]))
		{
			//arr[i] += 32;
			arr[i] = tolower(arr[i]);
		}
		putchar(arr[i]);
		i++;
	}
	return 0;
}