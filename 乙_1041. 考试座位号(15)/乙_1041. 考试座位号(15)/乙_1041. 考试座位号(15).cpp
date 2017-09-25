// 乙_1041. 考试座位号(15).cpp : 定义控制台应用程序的入口点。
/*
输入格式：
输入第一行给出一个正整数N（<=1000），随后N行，每行给出一个考生的信息：“准考证号 试机座位号 考试座位号”。
其中准考证号由14位数字组成，座位从1到N编号。输入保证每个人的准考证号都不同，
并且任何时候都不会把两个人分配到同一个座位上。
考生信息之后，给出一个正整数M（<=N），随后一行中给出M个待查询的试机座位号码，以空格分隔。

输出格式：
对应每个需要查询的试机座位号码，在一行中输出对应考生的准考证号和考试座位号码，中间用1个空格分隔。

输入样例：
4
10120150912233 2 4
10120150912119 4 1
10120150912126 1 3
10120150912002 3 2
2
3 4
输出样例：
10120150912002 2
10120150912119 1

*/
#include "stdafx.h"

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N, M;
	cin>>N;
	string *id = new string[N];
	int *s_num = new int[N];
	int *k_num = new int[N];
	for(int i=0; i<N; i++)
		cin>>id[i]>>s_num[i]>>k_num[i];

	cin>>M;
	int *s_num_search = new int[M];
	for(int i=0; i<M; i++)
		cin>>s_num_search[i];
	for(int i=0; i<M; i++)
	{
		for(int j=0; j<N; j++)
		{
			if(s_num_search[i] == s_num[j])
				cout<<id[j]<<" "<<k_num[j]<<endl;
		}
	}

	return 0;
}

