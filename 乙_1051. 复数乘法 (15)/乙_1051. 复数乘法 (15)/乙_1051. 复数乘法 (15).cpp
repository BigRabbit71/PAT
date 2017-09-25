// 乙_1051. 复数乘法 (15).cpp : 定义控制台应用程序的入口点。
/*
复数可以写成(A + Bi)的常规形式，其中A是实部，B是虚部，i是虚数单位，满足i2 = -1；也可以写成极坐标下的指数形式(R*e(Pi))，
其中R是复数模，P是辐角，i是虚数单位，其等价于三角形式 R(cos(P) + isin(P))。
现给定两个复数的R和P，要求输出两数乘积的常规形式。

输入格式：
输入在一行中依次给出两个复数的R1, P1, R2, P2，数字间以空格分隔。

输出格式：
在一行中按照“A+Bi”的格式输出两数乘积的常规形式，实部和虚部均保留2位小数。注意：如果B是负数，则应该写成“A-|B|i”的形式。

输入样例：
2.3 3.5 5.2 0.4
输出样例：
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

