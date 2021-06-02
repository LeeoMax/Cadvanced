#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
////实现一个函数，可以左旋字符串中的k个字符
//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_rotation(char* str, int num)
//{
//	assert(str != NULL);
//	int sz = strlen(str);
//	reverse(str, str + num - 1);
//	reverse(str + num, str + sz - 1);
//	reverse(str, str + sz - 1);
//}
//int main()
//{
//	char str[20] = " ";
//	printf("请输入需要旋转的字符串:>");
//	gets(str);
//	int num = 0;
//	printf("请输入需要左旋字符中字符的位置:>");
//	scanf("%d", &num);
//	left_rotation(str, num);
//	printf("左旋后的字符串为:>%s\n", str);
//}
//---------------------------------------------------------------------------------------------------------------------

//字符串旋转结果
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC

void reverse(char* left, char* right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_rotation(char* str, int num)
{
	assert(str != NULL);
	int sz = strlen(str);
	reverse(str, str + num - 1);
	reverse(str + num, str + sz - 1);
	reverse(str, str + sz - 1);
}
int judge_left_rotation(char* str1, char* str2)
{
	int len = strlen(str1);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		left_rotation(str1, 1);
		int ret = strcmp(str1, str2);
		if (ret == 0)
		{
			return 1;
			break;
		}
	}
	return 0;
}
int main()
{
	//char str1[] = "AABCD";
	//char str2[] = "BCDAA";
	char str1[] = "abcd";
	char str2[] = "ABCD";
	int ret=judge_left_rotation(str1, str2);
	if (ret == 1)
	{
		printf("字符串str2是字符串str1旋转之后的字符串");
	}
	else
	{
		printf("字符串str2不是字符串str1旋转之后的字符串");
	}
}




