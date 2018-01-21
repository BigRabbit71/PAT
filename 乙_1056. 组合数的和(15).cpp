#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int *p = new int[n];
	for(int i=0; i<n; i++)
	{
		cin>>p[i];
	}

	int sum = 0;
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
			sum += (p[i]*10+p[j]) + (p[j]*10+p[i]);
	}

	cout<<sum<<endl;

	return 0;
}

