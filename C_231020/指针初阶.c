#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d\n", (a >= b ? a : b));
//	return 0;
//}

//ÿ���ڴ涼��һ��Ψһ�ı��
//���==��ַ==ָ��
//�ܽ᣺ָ����ǵ�ַ��ƽʱ˵��ָ��ָ����ָ�����

//int main()
//{
//	int a = 100;
//	int* pa = &a;//pa��ר��������ŵ�ַ�ģ������pa�ͱ���Ϊָ�����
//	//paָ��Ķ����������int
//	//int arr[10];
//	//printf("%p\n", &a);
//
//	//ָ�������32λƽ̨��4���ֽ�
//	//ָ�������64λƽ̨��8���ֽ�
//
//	return 0;
//}

//ָ��+-����
//int main()
//{
//	int a = 0x11223344;//0x��ͷ��16��������
//	int* pa = &a;
//	char* pc = &a;
//	//*pa = 0;
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc+1);
//	//ָ�����;���ָ��+/-1 ����ʱ�Ĳ���
//	//����ָ��+1����4���ֽ�
//	//�ַ�ָ��+1����1���ֽ�
//	return 0;
//}


//Ұָ��
//ָ��ָ���λ���ǲ���֪�ģ�����ġ�����ȷ�ġ�û����ȷ���Ƶģ�
//����
//1.û�г�ʼ��
//int main()
//{
//	//int a = 10;
//	//int* pa = &a;
//	//*pa = 20;
//	//printf("%d\n", a);
//	int* p;//�ֲ���������ʼ��ʱ�����������ֵ
//	*p = 20;
//	printf("%d\n", *p);
//	return 0;
//}
//2.ָ��Խ��
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		*(p++) = i;
//	}
//	return 0;
//}
//3.ָ��ָ��ռ��ͷ�
//int* test()
//{
//	int a = 110;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}

//���Ұָ��
//1.ָ���ʼ��,
//2.С��ָ��Խ��
//3.ָ��ָ��ռ��ͷţ���ʹ��NULL
//4.���ⷵ�ؾֲ������ĵ�ַ
//5.ָ��ʹ��֮ǰ�����Ч��
// 
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int* ptr = NULL;//ptr��һ����ָ�룬���ָ�벻��ֱ��ʹ�ã�û��ָ��
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = &arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		*p = i;
//		p++;
//	}
//	p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i[arr]);
//		printf("%d ", *(p+i));
//	}
//	//2+3 --> 3+2
//	//arr[i] --> i[arr]
//	return 0;
//}

//��ָ����+-
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[5] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	printf("%d\n", &arr[0] - &arr[9]);
//	//ָ��-ָ��õ��ľ���ֵ����ָ����ָ��֮���Ԫ�ظ���
//	//ָ��-ָ��������ǰ�������ǣ�
//	//����ָ��ָ�����ͬһ�ռ�
//	//printf("%d\n", &ch[4] - &arr[0]);
//	return 0;
//}
//
//int my_strlen(char* s)
//{
//	int count = 0;
//	while (*s != '\0')
//	{
//		count++;
//		s++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = { "abcdef" };
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//
//�ݹ�汾
//int my_strlen(char* s)
//{
//	if (*s == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(s + 1);
//}
//
//int main()
//{
//	char arr[] = { "abcdef" };
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//
//int my_strlen(char* s)
//{
//	char* start = s;
//	//while (*s != '\0')
//	while (*s)
//	{
//		s++;
//	}
//	return s - start;
//}
//
//int main()
//{
//	char arr[] = { "abcdef" };
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//ָ��Ĺ�ϵ���㣨�ȴ�С��
//int main()
//{
//	float values[5];
//	float* vp;
//	for (vp = &values[5]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}
//	//
//	//for (vp = &values[4]; vp >= &values[0];vp--)
//	//{
//	//	*vp = 0;
//	//}
//	//����ָ����ָ������Ԫ�رȽϣ�����������ָ��֮ǰ��Ԫ�رȽ�
//	return 0;
//}

//ָ�������
// ָ�������������
// ָ������Ĵ�С�ǹ̶���4/8���ֽڣ�ר����������ŵ�ַ��
// ������һ�������Ŀռ䣬���Է�һ�����߶��������ͬ������
// ��ϵ��
// �����У���������ʵ��������Ԫ�صĵ�ַ�������� == ��ַ == ָ��
// ��֪��������Ԫ�صĵ�ַ��ʱ��������������ŵģ�
// ͨ��ָ��Ϳ��Ա�����������
// �����ǿ���ͨ��ָ��������
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%p == %p\n", p + i, &arr[i]);
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

int main()
{
	int a = 10;
	int* p = &a;//һ��ָ�������ָ�����Ҳ�Ǳ�����
	//���������ڴ��п��ٿռ�ģ��Ǳ������е�ַ
	int** pp = &p;//����ָ����������һ�������ĵ�ַ

	return 0;
}