#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
//模拟实现strlen
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char str[] = "abcdef";
//	int len = my_strlen(str);
//	printf("string length=%d\n", len);
//	return 0;
//}
//-----------------------------------------------------------------------------------------------------------------------

//模拟实现strcpy
//char* my_strcpy(char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	char* first = str1;
//	while (*str2 != '\0')
//	{
//		*str1 = *str2;
//		str1++;
//		str2++;
//	}
//	*str1 = *str2;
//	return first;
//}
//int main()
//{
//	char str1[] = "###############";
//	char str2[] = "hello world!";
//	my_strcpy(str1, str2);
//	printf("%s\n", str1);
//
//	return 0;
//}
//---------------------------------------------------------------------------------------------------------------------

//模拟实现strcmp
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	while (*str1 == *str2 && *str1 != '\0')
//	{
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//
//}
//int main()
//{
//	char str1[] = "abcdef";
//	char str2[] = "abcefg";
//	int ret = my_strcmp(str1, str2);
//	if (ret > 0)
//	{
//		printf("str1 > str2");
//	}
//	else if (ret < 0)
//	{
//		printf("str1 < str2");
//	}
//	else
//	{
//		printf("str1 == str2");
//	}
//	return 0;
//}
//---------------------------------------------------------------------------------------------------------------------

//模拟实现strcat
char* my_strcat(char* str1, const char* str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	char* start = str1;
	while (*str1 != '\0')
	{
		str1++;
	}
	while (*str2 != '\0')
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
	*str1 = *str2;
	return start;
	
}
int main()
{
	char str1[15] = "hello ";
	char str2[] = "world!";
	my_strcat(str1, str2);
	printf("%s\n", str1);

	return 0;
}
//-----------------------------------------------------------------------------------------------------------------------

//模拟实现strstr
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	char* p = (char*)str1;
//	char* s2 = (char*)str2;
//	if (*s2 == '\0')
//	{
//		return NULL;
//	}
//	while (*p != '\0')
//	{
//		char* s1 = p;
//		char* s2 = (char*)str2;
//		while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return p;
//		}
//		p++;
//	}
//	return NULL;
//
//
//
//}
//int main()
//{
//	char str1[] = "abbbcdef";
//	char str2[] = "bbc";
//	printf("%s\n", my_strstr(str1, str2));
//	return 0;
//}

