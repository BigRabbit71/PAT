// 最大子列和.cpp : 定义控制台应用程序的入口点。
//
/*
“最大子列和”则被定义为所有连续子列元素的和中最大者。例如给定序列{ -2, 11, -4, 13, -5, -2 }，其连续子列{ 11, -4, 13 }有最大的和20。

输入格式:
输入第1行给出正整数K (≤100000)；第2行给出K个整数，其间以空格分隔。

输出格式:
在一行中输出最大子列和。如果序列中所有整数皆为负数，则输出0。

输入样例:
6
-2 11 -4 13 -5 -2

输出样例:
20

作者: DS课程组
单位: 浙江大学
时间限制: 50000ms
内存限制: 64MB


*/
#include "stdafx.h"
#include <iostream>
#define MAXN 100001
using namespace std;

int MaxSubseqSum(int A[], int N)
{
	int ThisSum, MaxSum;
	int i;
	ThisSum = MaxSum = 0;

	for(i=0; i<N; i++)
	{
		ThisSum += A[i];
		if(ThisSum > MaxSum)
		{
			MaxSum = ThisSum;
		}
		else if(ThisSum < 0)
		{
			ThisSum = 0;
		}
	}

	return MaxSum;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int k, a[MAXN];
	cin>>k;
	for(int i=0; i<k; i++)
	{
		cin>>a[i];
	}

	cout<<MaxSubseqSum(a, k);


	return 0;
}

