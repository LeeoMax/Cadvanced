#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#define row 4
#define col 4
//���Ͼ���
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��O(N)

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
	printf("��������Ҫ���ҵ���:>");
	scanf("%d", &k);
	ret=search(arr, k);
	if (ret == 1)
	{
		printf("�ҵ���!\n");
	}
	else
	{
		printf("û�ҵ�!\n");
	}
	return 0;
}