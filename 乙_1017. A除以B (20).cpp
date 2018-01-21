#include <iostream>
using namespace std;

int main() {
    string Q;
    int quotient;
    int R, remainder;
    cin>>Q>>R;
    int temp;
    if(Q.size()==1 && (Q[0]-'0') < R) cout<<"0 "<<Q[0]<<endl;
    else{
        temp = Q[0] - '0';
        for(int i=1; i<Q.size(); i++){
            quotient = (temp*10 + (Q[i]-'0')) / R;
            cout<<quotient;
            temp = (temp*10 + (Q[i]-'0')) % R;
        }
        remainder = temp;
        cout<<" "<<remainder<<endl;
    }

    return 0;
}