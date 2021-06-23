#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("% d % d", a + b, c);
//	return 0;
//}


//杨辉三角
//在屏幕上打印杨辉三角
//void yang_triangle(int input)
//{
//	int arr[100][100] = { 0 ,1 };
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= input; i++)
//	{
//
//		for (j = 1; j <= i; j++)
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (i = 1; i <= input; i++)
//	{
//		for (j = 1; j <= input - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//	int input = 0;
//
//	printf("请输入要打印杨辉三角的行数:>");
//	scanf("%d", &input);
//	yang_triangle(input);
//	return 0;
//}

//void yang_triangle(int arr[10][10])
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (i==j||j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//}
//void print(int arr[10][10])
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10-1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int input = 0;
//	int arr[10][10] = { 0 };
//	yang_triangle(arr);
//	print(arr);
//	return 0;
//}
//----------------------------------------------------------------------------------------------------------------------

//猜凶手
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词 :
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。

//int main()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("killer is %c\n", killer);
//		}
//	}
//	return 0;
//}
//----------------------------------------------------------------------------------------------------------------------


//猜名次
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次

//int main()
//{
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	int D = 0;
//	int E = 0;
//	for (A = 1; A <= 5; A++)
//	{
//		for (B = 1; B <= 5; B++)
//		{
//			for (C = 1; C <= 5; C++)
//			{
//				for (D = 1; D <= 5; D++)
//				{
//					for (E = 1; E <= 5; E++)
//					{
//						if (A * B * C * D * E == 120)
//						{
//							if (((B == 2) + (A == 3) == 1) &&
//								((B == 2) + (E == 4) == 1) &&
//								((C == 1) + (D == 2) == 1) &&
//								((C == 5) + (D == 3) == 1) &&
//								((E == 4) + (A == 1) == 1))
//							{
//								printf("A=%d B=%d C=%d D=%d E=%d\n", A, B, C, D, E);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//
//
//	return 0;
//}

作业标题
杨氏矩阵
作业内容

有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。


要求：时间复杂度小于O(N)