#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

// �ṹ��
// ����֪ʶ
// �ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա������
// �ṹ��ÿ����Ա�����ǲ�ͬ���͵ı���
// ���飺һ����ͬ����Ԫ�صļ���
// �ṹ�壺һ�鲻һ����ͬ����Ԫ�صļ���
// 
// ���ӣ�
// ������������
// �ˣ�����+�Ա�+����+���...
// ���Ӷ��󣬲�������������ֱ������
// ���ýṹ����������������
//

//����һ��ѧ��
//����+����+�Ա�
//

//�����ṹ������
//struct Stu
//{
//	//��Ա�����������������ṹ�������������
//	char name[20];
//	int age;
//	char sex[5];//�� Ů ����
//}s2, s3, s4;//s2 ss3 s4 ���ǽṹ����� - ȫ�ֱ���
//
//typedef struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//} Stu;
//
////ͨ�����ʹ����ı���
//int main()
//{
//	struct Stu s1;//�ֲ�����
//	Stu s2;//��C�����У�û�жԽṹ������typedef��struct�ؼ��ʲ���ʡ��
//	return 0;
//}

// �ṹ���Ա
// �����Ǳ��������顢ָ�룬�����������ṹ��
//

//struct S
//{
//	int a;
//	char arr[5];
//	int* p;
//};
//
//struct B
//{
//	char ch[10];
//	struct S s;
//	double d;
//};
//
//int main()
//{
//
//	return 0;
//}

// �ṹ���Ա����
//
//
//struct S
//{
//	int a;
//	char arr[5];
//	int* p;
//}s1 = { 100,"bit",NULL };
//
//struct S s2 = { 98, "hehe",NULL };
//
//struct B
//{
//	char ch[10];
//	struct S s;
//	double d;
//};
//
//int main()
//{
//	struct S s3 = { .arr = "abc",.p = NULL,.a = 1 };
//	printf("%d %s %p\n", s3.a, s3.arr, s3.p);//. �ǽṹ��Ա���ʲ�����
//	struct B sb = { "hello",{20,"qqq",NULL},3.14 };
//	printf("%s %d %s %p %.2lf\n", sb.ch, sb.s.a, sb.s.arr, sb.s.p, sb.d);
//
//	return 0;
//}

#include<string.h>
//������
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void set_stu(struct Stu t)
//{
//	t.age = 20;
//	//t.name = "zhangsan";
//	strcpy(t.name, "zhangsan");
//}
//
//void print_stu(struct Stu t)
//{
//	printf("%s %d\n", t.name, t.age);
//}
//
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(s);//��ֵ����
//	print_stu(s);
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//void set_stu(struct Stu* ps)
//{
//	//(*ps).age = 20;
//	//strcpy((*ps).name, "zhangsan");
//	ps->age = 20;
//	strcpy(ps->name, "zhangsan");
//
//}
//
//void print_stu(struct Stu t)
//{
//	printf("%s %d\n", t.name, t.age);
//}
//
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(&s);//��ֵ����
//	print_stu(s);
//	return 0;
//}
// 
//void print_stu(struct Stu* ps)
//{
//	printf("%s %d\n", ps->name, ps->age);
//}
//
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(&s);//��ֵ����
//	print_stu(&s);
//	return 0;
//}

//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ
//int main()
//{
//	int money = 20;//Ǯ
//	int num = 0;//��ˮ
//	int null = 0;//��ƿ
//	int sum = 0;//�ȵ�����ˮ
//	num = money / 1;
//	while (num != 0)
//	{
//		sum += num;
//		null += num;
//		num = 0;
//		num += null / 2;
//		null %= 2;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//�ο��𰸣�
// ����һ��
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	while (empty > 1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}
// ������������������ˮ����ƿ�ӻ��Ĺ���Ļ������Է��֣�
// ��ʵ���Ǹ��Ȳ����У�money*2-1
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = 0;
//	if (money <= 0)
//	{
//		total = 0;
//	}
//	else
//	{
//		total = money * 2 - 1;
//	}
//	printf("total = %d\n", total);
//	return 0;
//}