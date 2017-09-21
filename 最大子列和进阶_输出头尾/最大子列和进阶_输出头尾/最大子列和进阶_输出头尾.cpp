/*
The Maximum Subsequence is the continuous subsequence which has the largest sum of its elements. For example, given sequence { -2, 11, -4, 13, -5, -2 }, its maximum subsequence is { 11, -4, 13 } with the largest sum being 20.
Now you are supposed to find the largest sum, together with the first and the last numbers of the maximum subsequence.

Input Specification:
Each input file contains one test case. Each case occupies two lines. 
The first line contains a positive integer K (≤10000). 
The second line contains K numbers, separated by a space.

Output Specification:
For each test case, output in one line the largest sum, together with the first and the last numbers of the maximum subsequence. 
The numbers must be separated by one space, but there must be no extra space at the end of a line. 
In case that the maximum subsequence is not unique, output the one with the smallest indices i and j (as shown by the sample case). 
If all the K numbers are negative, then its maximum sum is defined to be 0, and you are supposed to output the first and the last numbers of the whole sequence.

Sample Input:
10
-10 1 2 3 4 -5 -23 3 7 -21

Sample Output:
10 1 4
*/

#include "stdafx.h"
#include <iostream>
#define MAXN 10001
using namespace std;

void MaxSubseqSum(int A[], int N)
{
	int ThisSum, MaxSum;
	int i, start, start_temp, end, negative_flag, positive_flag;
	ThisSum = 0;
	MaxSum = 0;
	start = start_temp = 0;
	end = N-1;
	negative_flag = 1;
	positive_flag = 0;

	for(i=0; i<N; i++)
	{
		if(A[i] >= 0)
			negative_flag = 0;
		if(A[i] > 0)
			positive_flag = 1;

		ThisSum += A[i];
		if(ThisSum > MaxSum)
		{
			MaxSum = ThisSum;
			start = start_temp; 
			end = i;
		}
		else if(ThisSum < 0)
		{
			ThisSum = 0;
			start_temp = i+1;
		}
	}

	
	if(negative_flag == 1)//全是负数
		cout<<0<<" "<<A[0]<<" "<<A[N-1];
	else if(negative_flag == 0 && positive_flag == 0)//只有负数和0
		cout<<0<<" "<<0<<" "<<0;
	else
		cout<<MaxSum<<" "<<A[start]<<" "<<A[end];


}

int main()
{
	int k, a[MAXN];

	cin>>k;
	for(int i=0; i<k; i++)
	{
		cin>>a[i];
	}

	MaxSubseqSum(a, k);

	return 0;
}

