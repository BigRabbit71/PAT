// ��_1051. �����˷� (15).cpp : �������̨Ӧ�ó������ڵ㡣
/*
��������д��(A + Bi)�ĳ�����ʽ������A��ʵ����B���鲿��i��������λ������i2 = -1��Ҳ����д�ɼ������µ�ָ����ʽ(R*e(Pi))��
����R�Ǹ���ģ��P�Ƿ��ǣ�i��������λ����ȼ���������ʽ R(cos(P) + isin(P))��
�ָ�������������R��P��Ҫ����������˻��ĳ�����ʽ��

�����ʽ��
������һ�������θ�������������R1, P1, R2, P2�����ּ��Կո�ָ���

�����ʽ��
��һ���а��ա�A+Bi���ĸ�ʽ��������˻��ĳ�����ʽ��ʵ�����鲿������2λС����ע�⣺���B�Ǹ�������Ӧ��д�ɡ�A-|B|i������ʽ��

����������
2.3 3.5 5.2 0.4
���������
-8.68-8.23i
*/

#include "stdafx.h"

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
	float R1, R1_temp, P1, R2, R2_temp, P2, R, P;
	cin>>R1>>P1>>R2>>P2;

	R1_temp = R1*cos(P1);
	R2_temp = R2*cos(P2);
	P1 = R1*sin(P1);
	P2 = R2*sin(P2);
	R = R1_temp*R2_temp - P1*P2;
	P = R1_temp*P2 + R2_temp*P1;

	
	if(R>0 || R<-0.005)
		printf("%.2f", R);
	else if(R<=0 && R>=-0.005)
		printf("0.00");

	if(P>0)
		printf("+%.2fi", P);
	else if(P<=0 && P>=-0.005)
		printf("+0.00i");
	else
		printf("%.2fi",P);

	return 0;
}

