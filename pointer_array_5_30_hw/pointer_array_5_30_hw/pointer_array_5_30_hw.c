#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//qsortģ��ʵ��
//ģ��qsort�Ĺ���ʵ��һ��ͨ�õ�ð������
//����
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void swap(char* m, char* n, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *m;
//		*m = *n;
//		*n = tmp;
//		m++;
//		n++;
//	}
//}
//void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("����ǰ������:>");
//	print(arr, sz);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	printf("����������:>");
//	print(arr, sz);
//}
//---------------------------------------------------------------------------------------------------------------------

//qsortʹ����ϰ
//��ϰʹ�ÿ⺯����qsort����������͵�����

void print_int(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void print_double(double arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%lf ", arr[i]);
	}
	printf("\n");
}

void print_char(char arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%c ", arr[i]);
	}
	printf("\n");
}

void print_str(char** arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s ", arr[i]);
	}
	printf("\n");
}




int cmp_str(const void* e1, const void* e2)
{
	return strcmp(*(char**)e1 , *(char**)e2);
}
int cmp_char(const void* e1, const void* e2)
{
	return *(char*)e1 - *(char*)e2;
}
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

int cmp_double(const void* e1, const void* e2)
{
	return (*(double*)e1 - *(double*)e2)>0? 1:-1;
}
struct Stu
{
	char name[20];
	int age;
};

void print_stuct_age(struct Stu* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i].age);
	}
	printf("\n");
}

void print_stuct_name(struct Stu* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s ", arr[i].name);
	}
	printf("\n");
}

int sort_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age-((struct Stu*)e2)->age;
}

int sort_by_name(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}




int main()
{
	//����
	int i = 0;
	int arr1[] = { 5,4,3,2,1,0 };
	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
	printf("����ǰ����������:>");
	print_int(arr1, sz1);
	qsort(arr1, sz1, sizeof(arr1[0]), cmp_int);
	printf("��������������:>");
	print_int(arr1, sz1);

    //������
	double arr2[] = { 5.2,4.7,3.3,2.5,1.6 };
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
	printf("����ǰ�ĸ���������:>");
	print_double(arr2, sz2);
	qsort(arr2, sz2, sizeof(arr2[0]), cmp_double);
	printf("�����ĸ���������:>");
	print_double(arr2, sz2);

	//�ַ���
	char arr3[] = { 'f','e','d','c','b','a' };
	int sz3 = sizeof(arr3) / sizeof(arr3[0]);
	printf("����ǰ���ַ�������:>");
	print_char(arr3, sz3);
	qsort(arr3, sz3, sizeof(arr3[0]), cmp_char);
	printf("�������ַ�������:>");
	print_char(arr3, sz3);

	//�ַ���
	char* arr4[] = { "abc","defg","bdh","xvb","asdfg" };
	int sz4 = sizeof(arr4) / sizeof(arr4[0]);
	printf("����ǰ���ַ�������:>");
	print_str(arr4, sz4);
	qsort(arr4, sz4, sizeof(arr4[0]), cmp_str);
	printf("�������ַ�������:>");
	print_str(arr4, sz4);

	//�ṹ��
	struct Stu s[5] = { {"zhangsan",20},{"lisi",22},{"wangwu",30},{"zhouyi",18},{"qianer",35} };
	int sz5 = sizeof(s) / sizeof(s[0]);
	printf("�������������Ľṹ������:>");
	qsort(s, sz5, sizeof(s[0]), sort_by_age);
	print_stuct_age(s, sz5);
	printf("�������������Ľṹ������:>");
	qsort(s, sz5, sizeof(s[0]), sort_by_name);
	print_stuct_name(s, sz5);

}













