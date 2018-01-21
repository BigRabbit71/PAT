#include "stdafx.h"

#include <stdio.h>
#include <iostream>

using namespace std;

int Count(int n)
{
	int step = 0;
	while(n != 1)
	{
		if(n%2 !=0)
			n = (3*n+1);
		n = n/2;
		step++;	
	}
	return step;
}

int main()
{
	int n;
	cin>>n;

	cout<<Count(n);

	return 0;
}

