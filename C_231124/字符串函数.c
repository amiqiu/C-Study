#define _CRT_SECURE_NO_WARNINGS 1

#include<string.h>
#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = strlen(arr);
//	printf("%zd", len);
//	return 0;
//}

//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("大于\n");
//	}
//	else
//	{
//		printf("小于等于\n");
//	}
//	return 0;
//}
#include<assert.h>
size_t my_strlen1(const char* str)
{
	size_t count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

size_t my_strlen2(const char* str)
{
	assert(str);
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}

//size_t my_strlen3(const char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(str + 1);
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = my_strlen(arr);
//	printf("%zd", len);
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "xxxxxxxxxxx";
//	char arr2[] = "hello";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

void my_strcpy(char* dest, char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest++ = *src++)
	{
		;
	}
}

//int main()
//{
//	char arr1[20] = {0};
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//void my_strcat(char* dest, char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	int ret = strcmp("bbq", "abcdef");
//	if(ret>0)
//		printf("大于\n");
//	else if(ret==0)
//		printf("等于\n");
//	else
//		printf("小于\n");
//	return 0;
//}

int my_strcmp1(const char* s1, const char* s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == "\0")
		{
			return 0;
		}
		s1++;
		s2++;
	}
	if (*s1 > *s2)
	{
		return 1;
	}
	else
		return 0;
}

int my_strcmp(const char* s1, const char* s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == "\0")
		{
			return 0;
		}
		s1++;
		s2++;
	}
	return *s1 - *s2;
}

//int main()
//{
//	int ret = my_strcmp("bbq", "abcdef");
//	if (ret > 0)
//		printf("大于\n");
//	else if (ret == 0)
//		printf("等于\n");
//	else
//		printf("小于\n");
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "xxxxxxxxxxx";
//	char arr2[] = "hello";
//	strncpy(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[20] = "abcdefabcdef";
//	char arr2[] = "deq";
//	char* ret = strstr(arr1, arr2);
//	if (ret != NULL)
//		printf("%s\n", ret);
//	else
//		printf("找不到\n");
//
//	return 0;
//}

my_strstr(char* str1,char* str2)
{
	char* cur = str1;
	char* s1 = NULL;
	char* s2 = NULL;
	assert(str1 && str2);
	if (*str2 == '\0')
	{
		return (char*)str1;
	}
	while (*cur)
	{
		s1 = cur;
		s2 = str2;
		while (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char*)cur;
		}
		cur++;
	}
	return NULL;
}

int main()
{
	char arr1[20] = "abcdef";
	char arr2[] = "bcd";
	char* ret = my_strstr(arr1, arr2);
	if (ret != NULL)
		printf("%s\n", ret);
	else
		printf("找不到\n");

	return 0;
}