#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#define row 4
#define col 4
//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N)

int search(int arr[row][col], int k)
{
	int left = 0;
	int right = row - 1;
	while ((left < right)&&(right >= 0))
	{
		if (arr[left][right] < k)
		{
			left++;
		}
		else if (arr[left][right] > k)
		{
			right--;
		}
		else
		{
			return 1;
			break;
		}

	}
	if ((left >= right) || (right < 0))
	{
		return 0;
	}
}
int main()
{
	int arr[row][col] = { {1,4,7,11},{2,5,8,12},{3,6,9,16},{10,13,14,17} };
	int k = 0;
	int ret = 0;
	printf("请输入需要查找的数:>");
	scanf("%d", &k);
	ret=search(arr, k);
	if (ret == 1)
	{
		printf("找到了!\n");
	}
	else
	{
		printf("没找到!\n");
	}
	return 0;
}