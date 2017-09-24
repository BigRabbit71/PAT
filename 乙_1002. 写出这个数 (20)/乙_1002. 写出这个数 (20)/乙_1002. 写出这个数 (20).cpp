// 乙_1002. 写出这个数 (20).cpp : 定义控制台应用程序的入口点。
/*
读入一个自然数n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

输入格式：每个测试输入包含1个测试用例，即给出自然数n的值。这里保证n小于10的100次。
输出格式：在一行内输出n的各位数字之和的每一位，拼音数字间有1 空格，但一行中最后一个拼音数字后没有空格。

输入样例：
1234567890987654321123456789
输出样例：
yi san wu
*/

#include "stdafx.h"

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;


int main()
{
	string n;
	cin>>n;

	int sum = 0; 
	string pinyin[10] ={"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};

	for(int i=0; i<n.size(); i++)
	{
		sum += n[i] - '0';	//转成数字
	}

	string str_sum = to_string(sum);

	if(sum == 0)
		cout<<pinyin[0];
	else
	{
		for(int i=0; i<str_sum.size()-1; i++)
		{
			cout<<pinyin[str_sum[i]-'0']<<" ";
		}
		cout<<pinyin[str_sum[str_sum.size()-1] - '0'];
	}

	return 0;
}

