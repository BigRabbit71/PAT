#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N, M;
	cin>>N;
	string *id = new string[N];
	int *s_num = new int[N];
	int *k_num = new int[N];
	for(int i=0; i<N; i++)
		cin>>id[i]>>s_num[i]>>k_num[i];

	cin>>M;
	int *s_num_search = new int[M];
	for(int i=0; i<M; i++)
		cin>>s_num_search[i];
	for(int i=0; i<M; i++)
	{
		for(int j=0; j<N; j++)
		{
			if(s_num_search[i] == s_num[j])
				cout<<id[j]<<" "<<k_num[j]<<endl;
		}
	}

	return 0;
}

