#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	printf("are you ok\?\?\n");
//	return 0;
//}

// 
//#include<string.h>
//
//int main()
//{
//	//printf("%C\n", '\'');
//	//printf("%s\n", "\"");
//	//printf("c:\\test\\test.c\n");// \t��������ʶ��Ϊת���ַ�  \t - tab
//
//	// \a������
//	// \b���˸� Back
//	//printf("abcdefg\n");
//	//printf("abcd\befg\n");
//
//	//// \ddd��d d d��ʾ1~3���˽��Ƶ�����
//	//printf("%c\n", '\130');
//	//// \xdd��d d��ʾ2��ʮ����������
//	//printf("%c\n", '\x30');
//	//// \0��null�ַ�������û�����ݡ�
//
//	//strlen�����ַ������ȵĺ��� - ͳ�Ƶ����ַ�����\0֮ǰ���ַ��ĸ�����������\0
//	printf("%zd\n", strlen("abc"));
//	printf("%zd\n", strlen("c:\test\130\test.c\n"));
//	return 0;
//}


//int main()
//{
//	;//�����
//	3 + 4;//���ʽ���
//	printf("hehe\n");//�����������
//
//	return 0;
//}

// char //character
// [signed] char //�з��ŵ�
// unsigned char //�޷��ŵ�

//#include<stdbool.h>
//int main()
//{
//	//_Bool flag = false;
//	bool flag = true;
//	if (flag)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//sizeof ����Ľ����������size_t��size_t��һ���޷��ŵ�����������������ֵ�ڴ�ӡ��ʱ��ʹ��%zd
//int --- %d
//char --- %c
//�ַ��� --- %s
//sizeof ����Ľ��������ֵ���ĵ�λ���ֽ�
//int main()
//{
//	printf("%zd\n", sizeof(char));
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(short));
//	printf("%zd\n", sizeof(_Bool));
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(long long));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//	printf("%zd\n", sizeof(long double));
//	return 0;
//}


//int main()
//{
//	int a = 10;/*
//	printf("%zd\n", sizeof(a));
//	printf("%zd\n", sizeof(int));*/
//
//	//printf("%zd\n", sizeof(3.14));//double
//	//printf("%zd\n", sizeof(3.14f));//float
//	short s = 2;
//	printf("%zd\n", sizeof(s = a + 1));
//	printf("s=%d\n", s);
//
//	return 0;
//}


//int main()
//{
//	int age;
//	char ch;
//	float f;
//	double d;
//	_Bool num;
//	return 0;
//}

int b = 100;
int main()
{
	int a = 10;
	printf("%d", b);
	return 0;
}