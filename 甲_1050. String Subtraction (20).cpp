#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	string s1, s2;
	// In order to get the space, use getline() function.
	getline(cin, s1);
	getline(cin, s2);

	vector<int> exist_flags(128, 0);
	for(auto c:s2){
		exist_flags[c] = 1;
	}

	for(auto c:s1){
		if(!exist_flags[c]) cout<<c;
	}

	return 0;
}

