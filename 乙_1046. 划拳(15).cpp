#include <iostream>
using namespace std;

int main()
{
	int n, count_a, count_b;
	cin>>n;
	
	count_a = count_b = 0;

	for(int i=0; i<n; i++)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		if((a+c)==b && (a+c)!=d)
			count_b++;
		else if((a+c)!=b && (a+c)==d)
			count_a++;
	}
	cout<<count_a<<" "<<count_b<<endl;

	return 0;
}

