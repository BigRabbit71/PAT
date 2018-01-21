#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
	int M, N, min, max, replace;
	cin>>M>>N>>min>>max>>replace;

	vector<vector<int>> data(M, vector<int>(N));
	for(int i=0; i<M; i++)
	{
		for(int j=0; j<N; j++)
		{
			cin>>data[i][j];
			if(data[i][j]>=min && data[i][j]<=max)
				data[i][j] = 0;
		}
	}

	for(int i=0; i<M; i++)
	{
		for(int j=0; j<N; j++)
		{
			if(j < N-1)
				printf("%03d ", data[i][j]);
			else
				printf("%03d", data[i][j]);
		}
		if(i < M-1)
			cout<<endl;
	}

	return 0;
}

