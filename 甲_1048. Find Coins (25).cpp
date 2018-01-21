#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int N, M;
	cin>>N>>M;

	int *values = new int(10);
	//vector<int> flags(N, 0);
	
	// Get the coin values.
	int temp;
	for(int i=0; i<N; ++i){
		cin>>temp;
		values[i] = temp;
	}

	vector<int> V1;
	vector<int> V2;
	// Try the plus operation.
	for(int i=0; i<N; ++i){
		for(int j=0; j<N; ++j){
			if((values[i]+values[j]) == M && (values[i] <= values[j]) && (i != j)){
				V1.push_back(values[i]);
				V2.push_back(values[j]);
			}
		}
	}
	
	// Cout
	int min_index = 0;
	if(V1.size() == 0) cout<<"No Solution"<<endl;
	else{
		for(int i=1; i<V1.size(); ++i){
			if(V1[i] < V1[min_index]) min_index = i;
		}
		cout<<V1[min_index]<<" "<<V2[min_index]<<endl;
	}
	
	return 0;
}

