#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;


int main()
{
	string n;
	cin>>n;

	int sum = 0; 
	string pinyin[10] ={"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};

	for(int i=0; i<n.size(); i++)
	{
		sum += n[i] - '0';	
	}

	string str_sum = to_string(sum);

	if(sum == 0)
		cout<<pinyin[0];
	else
	{
		for(int i=0; i<str_sum.size()-1; i++)
		{
			cout<<pinyin[str_sum[i]-'0']<<" ";
		}
		cout<<pinyin[str_sum[str_sum.size()-1] - '0'];
	}

	return 0;
}

