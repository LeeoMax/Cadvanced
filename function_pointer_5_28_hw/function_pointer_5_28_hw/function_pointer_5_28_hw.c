#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
////ʵ��һ�����������������ַ����е�k���ַ�
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
//	printf("��������Ҫ��ת���ַ���:>");
//	gets(str);
//	int num = 0;
//	printf("��������Ҫ�����ַ����ַ���λ��:>");
//	scanf("%d", &num);
//	left_rotation(str, num);
//	printf("��������ַ���Ϊ:>%s\n", str);
//}
//---------------------------------------------------------------------------------------------------------------------

//�ַ�����ת���
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC

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
		printf("�ַ���str2���ַ���str1��ת֮����ַ���");
	}
	else
	{
		printf("�ַ���str2�����ַ���str1��ת֮����ַ���");
	}
}




