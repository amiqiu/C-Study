#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("������");
//	}
//	else
//	{
//		if (age <= 44)
//		{
//			printf("����");
//		}
//		else
//		{
//			if (age <= 59)
//			{
//				printf("������");
//			}
//			else
//			{
//				if (age <= 90)
//				{
//					printf("����");
//				}
//			}
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int r = (2 == 2);
//	printf("%d\n", r);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	//���һ��������һ��������Ƚ���ȣ�����ɳ�������==�����
//	if (5 == a)
//		printf("hehe\n");
//	return 0;
//}

//int main()
//{
//	int x = 10;
//	int y = 12;
//	int z = 14;
//	//if (x < y < z)//����
//	if (x < y && y < z)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (18 <= age && age <= 36)
//	{
//		printf("����\n");
//	}
//	return 0;
//}

//���������� ��Ŀ������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//scanf("%d", &a);
//	//b = (a > 5 ? 3 : -3);
//	//printf("%d\n", b);
//	scanf("%d%d", &a, &b);
//	int m = (a > b ? a : b);
//	printf("%d\n", m);
//	return 0;
//}

//! �߼�ȡ�������
//&& �������
//|| �������

//int main()
//{
//	int flag = 0;
//	//���flagΪ�٣���ӡ���Ǻǡ�
//	if (!flag)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month >=3 && month <=5)
//	{
//		printf("����\n");
//	}
//	return 0;
//}

//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month == 1 || month == 2 || month == 12)
//	{
//		printf("����\n");
//	}
//	return 0;
//}

//�����жϹ���
//1���ܱ�4�����Ҳ���100����
//2���ܱ�400����
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		printf("����");
//	}
//	else
//	{
//		printf("��������");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	i = a++ || ++b || d++;
//	//  1   ||  ��·
//	// a=1  || b=3 || d=4
//	printf("a=%d\nb=%d\nc=%d\nd=%d\n", a, b, c, d);
//	printf("%d\n", i);
//	return 0;
//}

//switch (expression) {
//case value1: statement
//case value2: statement
//default: statement
//}
//switch (expression) ��expression ���������ͱ��ʽ
//case ������������ͳ������ʽ

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 3 == 0)
//	{
//		printf("��3����������Ϊ0");
//	}
//	else if (num % 3 == 1)
//	{
//		printf("��3����������Ϊ1");
//	}
//	else if (num % 3 == 2)
//	{
//		printf("��3����������Ϊ2");
//	}
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	switch (num % 3)
//	{
//	case 1:
//		printf("��3����������Ϊ1");
//		break;
//	case 2:
//		printf("��3����������Ϊ2");
//		break;
//	case 0:
//		printf("��3����������Ϊ0");
//		break;
//	}
//	return 0;
//}
// �ַ�����ASCII�봢��ģ�ASCII��������

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	//case 1:
//	//	printf("����һ\n");
//	//	break;
//	//case 2:
//	//	printf("���ڶ�\n");
//	//	break;
//	//case 3:
//	//	printf("������\n");
//	//	break;
//	//case 4:
//	//	printf("������\n");
//	//	break;
//	//case 5:
//	//	printf("������\n");
//	//	break;
//	//case 6:
//	//	printf("������\n");
//	//	break;
//	//case 7:
//	//	printf("������\n");
//	//	break;
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		printf("%d ", num % 10);
//		//num = num / 10;
//		num /= 10;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//} 

//����һ��1~100֮��3�ı���������֮��
int main()
{
	int i = 0;
	int n = 0;
	//for (i = 1; i <= 100; i++)
	//{
	//	if (i % 3 == 0)
	//	{
	//		n += i;
	//	}
	//}
	for (i = 3; i <= 100; i += 3)
	{
		n += i;
	}
	printf("%d\n", n);
	return 0;
}