#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int x){
    for(int i=2; i<x; i++){
        if(x%i == 0) return false;
    }
    return true;
}

int main() {
    int m, n;
    cin>>m>>n;

    vector<int> out;
    int count = 0;
    for(int x=2; x<=104729; x++){
        if(isPrime(x)){
            count++;
            if(count>=m && count<=n)
                out.push_back(x);
            //防止无穷压进数组，导致内存不足
            if(count>n) break;
        }
    }

    double rows = ceil((double)out.size()/10);
    for(int i=0; i<(out.size()-1); i++){
        if((i/10)<rows){
            if(((i+1)%10)==0) cout<<out[i]<<endl;
            else cout<<out[i]<<" ";
        }
        else{
            cout<<out[i]<<" ";
        }
    }
    // 防止空数组
    if(!out.empty())
        cout<<out[out.size()-1];
    return 0;
}