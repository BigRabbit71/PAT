// ��_1016. ����A+B (15).cpp : �������̨Ӧ�ó������ڵ㡣
/*������A�ġ�DA��Ϊ1λ���������֡�����Ϊ��A������DA��ɵ�������PA�����磺����A = 3862767��DA = 6����A�ġ�6���֡�PA��66����ΪA����2��6��
�ָ���A��DA��B��DB�����д�������PA + PB��

�����ʽ��
������һ�������θ���A��DA��B��DB���м��Կո�ָ�������0 < A, B < 1010��
�����ʽ��
��һ�������PA + PB��ֵ��

��������1��
3862767 6 13530293 3
�������1��
399
��������2��
3862767 1 13530293 8
�������2��
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

