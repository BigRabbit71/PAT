#include <iostream>
#include <string>
using namespace std;

int main()
{
	string N;
	cin>>N;

	int count[10] = {0};
	for(int i=0; i<N.size(); i++)
	{
		int num;
		num = N[i] - '0';
		count[num]++;
	}

	for(int i=0; i<10; i++)
	{
		if(count[i] > 0)
			cout<<i<<":"<<count[i]<<endl;
	}

	return 0;
}

