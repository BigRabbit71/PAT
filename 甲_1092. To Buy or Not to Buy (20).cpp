#include <iostream>
using namespace std;

int dict[256] = {0};

int main() {
    string shop, eva;
    cin>>shop>>eva;

    for(auto c:shop){
        dict[c]++;
    }

    int miss = 0;
    for(auto c:eva){
        if(dict[c]) dict[c]--;
        else miss++;
    }

    if(miss) cout<<"No "<<miss<<endl;
    else cout<<"Yes "<<(shop.size()-eva.size())<<endl;

    return 0;
}