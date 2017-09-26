// 乙_1066. 图像过滤(15).cpp : 定义控制台应用程序的入口点。
/*
图像过滤是把图像中不重要的像素都染成背景色，使得重要部分被凸显出来。现给定一幅黑白图像，
要求你将灰度值位于某指定区间内的所有像素颜色都用一种指定的颜色替换。

输入格式：
输入在第一行给出一幅图像的分辨率，即两个正整数M和N（0 < M, N <= 500），另外是待过滤的灰度值区间端点A和B（0 <= A < B <= 255）、以及指定的替换灰度值。
随后M行，每行给出N个像素点的灰度值，其间以空格分隔。所有灰度值都在[0, 255]区间内。
输出格式：
输出按要求过滤后的图像。即输出M行，每行N个像素灰度值，每个灰度值占3位（例如黑色要显示为000），其间以一个空格分隔。行首尾不得有多余空格。

输入样例：
3 5 100 150 0
3 189 254 101 119
150 233 151 99 100
88 123 149 0 255
输出样例：
003 189 254 000 000
000 233 151 099 000
088 000 000 000 255
*/

#include "stdafx.h"

#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
	int M, N, min, max, replace;
	cin>>M>>N>>min>>max>>replace;

	vector<vector<int>> data(M, vector<int>(N));
	for(int i=0; i<M; i++)
	{
		for(int j=0; j<N; j++)
		{
			cin>>data[i][j];
			if(data[i][j]>=min && data[i][j]<=max)
				data[i][j] = 0;
		}
	}

	for(int i=0; i<M; i++)
	{
		for(int j=0; j<N; j++)
		{
			if(j < N-1)
				printf("%03d ", data[i][j]);
			else
				printf("%03d", data[i][j]);
		}
		if(i < M-1)
			cout<<endl;
	}

	return 0;
}

