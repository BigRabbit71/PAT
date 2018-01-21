#include <iostream>
#include <string>
using namespace std;

long long Search(string a, string da)
{
	long long pa=0;
	int count = 0;
	for(int i=0; i<a.size(); i++)
	{
		if(a[i] == da[0])
			count++;
	}

	for(int i=0; i<count; i++)
	{
		pa *= 10;
		pa += da[0] - '0';
	}

	return pa;
}

int main()
{
	string a, da, b, db;
	//long long pa, pb;

	cin>>a>>da>>b>>db;
	cout<<Search(a, da)+Search(b,db);

	return 0;
}

