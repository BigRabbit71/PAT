// ��_1061. �ж���(15).cpp : �������̨Ӧ�ó������ڵ㡣
/*
�ж�������кܼ򵥣������Ҫ����д���򵥵ĳ��������ʦ���Ⲣͳ��ѧ�����ж���ĵ÷֡�

�����ʽ��
�����ڵ�һ�и�������������100��������N��M���ֱ���ѧ���������ж���������
�ڶ��и���M��������5������������ÿ���������ֵ��
�����и���ÿ�����Ӧ����ȷ�𰸣�0�����ǡ���1�����ǡ������N�У�ÿ�и���һ��ѧ���Ľ�����ּ���Կո�ָ���
�����ʽ��
���������˳�����ÿ��ѧ���ĵ÷֣�ÿ������ռһ�С�

����������
3 6
2 1 3 3 4 5
0 0 1 0 1 1
0 1 1 0 0 1
1 0 1 0 1 0
1 1 0 0 1 1
���������
13
11
12
*/

#include "stdafx.h"

#include <iostream>
using namespace std;

int main()
{
	int N, M;
	cin>>N>>M;

	int *score_full = new int[M];
	int *answer = new int[M];
	int *score = new int[N];
	

	for(int i=0; i<M; i++)
		cin>>score_full[i];
	for(int i=0; i<M; i++)
		cin>>answer[i];

	for(int i=0; i<N; i++)
	{
		score[i] = 0;
		for(int j=0; j<M; j++)
		{
			int a;
			cin>>a;

			if(a == answer[j])
				score[i] += score_full[j];
		}
	}

	for(int i=0; i<N; i++)
		cout<<score[i]<<endl;

	delete[] score_full;
	delete[] answer;
	delete[] score;
	
	return 0;
}

