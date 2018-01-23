#include <iostream>
using namespace std;

int main() {
    string input, output;
    cin>>input>>output;

    int dict[128] = {0};
    for(auto c: output){
        if(islower(c)) dict[c-32] = 1;
        else dict[c] = 1;
    }

    for(auto c:input){
        if(islower(c)){
            if(dict[c-32]==0){
                cout<<char(c-32);
                dict[c-32] = 1; //输出之后，就置1
            }
        }else if(dict[c] == 0){
            cout<<c;
            dict[c] = 1; //输出之后，就置1
        }
    }

    return 0;
}