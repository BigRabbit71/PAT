#include <iostream>
using namespace std;

int main()
{
	int N, M;
	cin>>N>>M;

	int *score_full = new int[M];
	int *answer = new int[M];
	int *score = new int[N];
	

	for(int i=0; i<M; i++)
		cin>>score_full[i];
	for(int i=0; i<M; i++)
		cin>>answer[i];

	for(int i=0; i<N; i++)
	{
		score[i] = 0;
		for(int j=0; j<M; j++)
		{
			int a;
			cin>>a;

			if(a == answer[j])
				score[i] += score_full[j];
		}
	}

	for(int i=0; i<N; i++)
		cout<<score[i]<<endl;

	delete[] score_full;
	delete[] answer;
	delete[] score;
	
	return 0;
}

