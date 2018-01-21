// 乙_1026. 程序运行时间(15).cpp : 定义控制台应用程序的入口点。
/*
要获得一个C语言程序的运行时间，常用的方法是调用头文件time.h，其中提供了clock()函数，可以捕捉从程序开始运行到clock()被调用时所耗费的时间。
这个时间单位是clock tick，即“时钟打点”。同时还有一个常数CLK_TCK，给出了机器时钟每秒所走的时钟打点数。
于是为了获得一个函数f的运行时间，我们只要在调用f之前先调用clock()，获得一个时钟打点数C1；在f执行完成后再调用clock()，获得另一个时钟打点数C2；
两次获得的时钟打点数之差(C2-C1)就是f运行所消耗的时钟打点数，再除以常数CLK_TCK，就得到了以秒为单位的运行时间。

这里不妨简单假设常数CLK_TCK为100。现给定被测函数前后两次获得的时钟打点数，请你给出被测函数运行的时间。
输入格式：
输入在一行中顺序给出2个整数C1和C2。注意两次获得的时钟打点数肯定不相同，即C1 < C2，并且取值在[0, 107]。
输出格式：
在一行中输出被测函数运行的时间。运行时间必须按照“hh:mm:ss”（即2位的“时:分:秒”）格式输出；不足1秒的时间四舍五入到秒。

输入样例：
123 4577973
输出样例：
12:42:59
*/

#include "stdafx.h"

#include <iostream>
#include <time.h>
#include <math.h>
#include <iomanip>

#define CLK_TCK 100

using namespace std;

int main()
{
	float C1, C2;
	cin>>C1>>C2;

	int time = 0;
	time = floor((C2-C1)/CLK_TCK + 0.5);

	int h, m, s;
	h=m=s=0;
	s = time%60;
	m = (time/60)%60;
	h = time/3600;

	cout<<setw(2)<<setfill('0')<<h<<":"<<setw(2)<<setfill('0')<<m<<":"<<setw(2)<<setfill('0')<<s<<endl;

	return 0;
}

