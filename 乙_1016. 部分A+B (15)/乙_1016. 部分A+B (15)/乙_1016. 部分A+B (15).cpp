// 乙_1016. 部分A+B (15).cpp : 定义控制台应用程序的入口点。
/*正整数A的“DA（为1位整数）部分”定义为由A中所有DA组成的新整数PA。例如：给定A = 3862767，DA = 6，则A的“6部分”PA是66，因为A中有2个6。
现给定A、DA、B、DB，请编写程序计算PA + PB。

输入格式：
输入在一行中依次给出A、DA、B、DB，中间以空格分隔，其中0 < A, B < 1010。
输出格式：
在一行中输出PA + PB的值。

输入样例1：
3862767 6 13530293 3
输出样例1：
399
输入样例2：
3862767 1 13530293 8
输出样例2：
0
*/
#include "stdafx.h"

#include <iostream>
#include <string>
using namespace std;

long long Search(string a, string da)
{
	long long pa=0;
	int count = 0;
	for(int i=0; i<a.size(); i++)
	{
		if(a[i] == da[0])
			count++;
	}

	for(int i=0; i<count; i++)
	{
		pa *= 10;
		pa += da[0] - '0';
	}

	return pa;
}

int main()
{
	string a, da, b, db;
	//long long pa, pb;

	cin>>a>>da>>b>>db;
	cout<<Search(a, da)+Search(b,db);

	return 0;
}

