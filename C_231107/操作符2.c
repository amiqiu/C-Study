#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

// ����һ��ѧ��
// ����+����+�ɼ�
//

//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//} s3, s4;//Ҳ�ǽṹ�������ȫ�ֱ�����
//
//
//int main()
//{
//	//�ṹ��������ֲ�������
//	struct Stu s1 = { "zhangsan", 20, 95.5f };
//	struct Stu s2 = { "lisi", 18, 87.5 };
//	struct Stu s5 = { .score = 98.5f, .name = "hehe", .age = 18 };
//
//	//�ṹ��ָ��
//	struct Stu* ps = &s1;
//	printf("%s %d %f\n", ps->name, ps->age, ps->score);
//
//
//	return 0;
//}

//struct Point
//{
//	int x;
//	int y;
//};
//
//struct Data
//{
//	int num;
//	struct Point p;
//};
//
//int main()
//{
//	struct Data d = { 5, {10, 11} };
//	// . �ṹ��Ա���ʲ�����
//	// �ṹ�����.��Ա��
//	printf("numb=%d p.x=%d p.y=%d\n", d.num, d.p.x, d.p.y);
//	return 0;
//}

// �����������ԣ����ȼ��������
// ���ȼ������ڲ����������ȼ��ߵ���ִ�У����ȼ��͵ĺ�ִ��
//

// ���ʽ��ֵ
// ��������
// C����������������������������ȱʡ(Ĭ��)�������͵ľ��������е�
// ����ת��
// 
//

//int main()
//{
//	//�ַ����������ͼ���ģ���Ϊ�ַ��Ĵ洢��ASCII����ʽ
//	//char���͵�ȡֵ��Χ��-128~127
//	//char ��ռ��1�ֽڣ�1�ֽ�8��bitλ
//	//01111101 - c1
//	//00001010 - c2
//	//10000111
//	//10000110
//	//11111001
//	char c1 = 125;
//	char c2 = 10;
//	char c3 = c1 + c2;
//	printf("%d\n", c3);
//	printf("%d\n", c1 + c2);
//	return 0;
//}

//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//	printf("%d\n", i);
//	return 0;
//}

int main()
{
	int a = 0x11223344;
	int b = 10;
	int* pb = &b;// *pb �ȼ���b
	*pb = 20;
	printf("%d\n", b);
	char ch = 'w';
	char* pc = &ch;
	printf("%p\n", &a);//& ȡ��ַ������
	return 0;
}