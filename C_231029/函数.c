#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//#include "add.h"
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", a, b);
//	int c = Add(a, b);
//	printf("%d", c);
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	return 0;
//}

//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//	for (int i = 0; i < 5; i++)
//	{
//		test();
//	}
//	
//	return 0;
//}

// static���ξֲ�����
// ������Ӱ���˱����Ĵ洢����
// һ���ֲ������Ǵ���ջ����
// ��static���κ�ͱ���ŵ���̬��
// ��Ϊ�洢���͵ı仯���������ڸ��ű仯���䳤��
// �����򲻱䣡
//

//�����ⲿ���ŵ�
//extern int g_val;
//
//int main()
//{
//	printf("%d", g_val);
//	return 0;
//}

// static����ȫ�ֱ���
// 1.����Ҫ֪��ȫ�ֱ����Ǿ����ⲿ�������Ե�
// 2.ȫ�ֱ�����static���κ��ⲿ�������Ա�����ڲ���������
// ���ȫ�ֱ���ֻ�����Լ����ڵ�.c�ļ���ʹ�ã������ļ�������
// �൱���������С
//

//����
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d", c);
//	return 0;
//}

// static���κ���
// 1.����Ҫ֪�������Ǿ����ⲿ�������Ե�
// 2.������static���κ��ⲿ�������Ա�����ڲ���������
// �������ֻ�����Լ����ڵ�.c�ļ���ʹ�ã������ļ���ʹ������
// Ҳ����ʹ��
//