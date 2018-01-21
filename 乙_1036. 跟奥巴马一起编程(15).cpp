#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	int n;
	char a;
	cin>>n>>a;
	string line(n, a);

	cout<<line<<endl;
	for(int i=1; i<(floor(n/2.0 + 0.5)-1); i++)
	{
		cout<<a;
		for(int j=0; j<(n-2); j++)
			cout<<" ";
		cout<<a<<endl;
	}
	cout<<line<<endl;

	return 0;
}

