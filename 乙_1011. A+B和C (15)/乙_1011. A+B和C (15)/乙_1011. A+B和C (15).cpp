// ��_1011. A+B��C (15).cpp : �������̨Ӧ�ó������ڵ㡣
/*
��������[-2��31��, 2��31��]�ڵ�3������A��B��C�����ж�A+B�Ƿ����C��

�����ʽ��
�����1�и���������T(<=10)���ǲ��������ĸ�����������T�����������ÿ��ռһ�У�˳�����A��B��C���������Կո�ָ���

�����ʽ��
��ÿ�������������һ���������Case #X: true�����A+B>C�����������Case #X: false��������X�ǲ��������ı�ţ���1��ʼ����

����������
4
1 2 3
2 3 4
2147483647 0 2147483646
0 -2147483648 -2147483647
���������
Case #1: false
Case #2: true
Case #3: true
Case #4: false
*/

#include "stdafx.h"

#include <iostream>
using namespace std;

bool Judge(long long a, long long b, long long c)
{
	if((a+b)>c){
		return true;
	}
	else
	{
		return false;
	}
}


int main()
{
	int n;
	cin>>n;

	long long a, b, c;
	bool result[10];
	for(int i=0; i<n; i++)
	{
		cin>>a>>b>>c;
		result[i] = Judge(a, b, c);
	}
	for(int i=0; i<n; i++)
	{
		cout<<"Case #"<<(i+1)<<": "<<boolalpha<<result[i]<<endl;
	}
	return 0;
}

