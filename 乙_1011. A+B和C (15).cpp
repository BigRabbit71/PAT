#include <iostream>
using namespace std;

bool Judge(long long a, long long b, long long c)
{
	if((a+b)>c){
		return true;
	}
	else
	{
		return false;
	}
}


int main()
{
	int n;
	cin>>n;

	long long a, b, c;
	bool result[10];
	for(int i=0; i<n; i++)
	{
		cin>>a>>b>>c;
		result[i] = Judge(a, b, c);
	}
	for(int i=0; i<n; i++)
	{
		cout<<"Case #"<<(i+1)<<": "<<boolalpha<<result[i]<<endl;
	}
	return 0;
}

