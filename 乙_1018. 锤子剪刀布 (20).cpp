#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;

    char a, b;
    // [win lose equal]
    int a_count[3] = {0};
    int b_count[3] = {0};
    // [B C J]
    int a_win_count[3] = {0};
    int b_win_count[3] = {0};

    for(int i=0; i<n; i++){
        cin>>a>>b;
        if(a == b){
            a_count[2]++;
            b_count[2]++;
        }else if(a=='B' && b=='C'){
            a_count[0]++;
            b_count[1]++;
            a_win_count[0]++;
        }else if(a=='B' && b=='J'){
            a_count[1]++;
            b_count[0]++;
            b_win_count[2]++;
        }else if(a=='C' && b=='B'){
            a_count[1]++;
            b_count[0]++;
            b_win_count[0]++;
        }else if(a=='C' && b=='J'){
            a_count[0]++;
            b_count[1]++;
            a_win_count[1]++;
        }else if(a=='J' && b=='B'){
            a_count[0]++;
            b_count[1]++;
            a_win_count[2]++;
        }else if(a=='J' && b=='C'){
            a_count[1]++;
            b_count[0]++;
            b_win_count[1]++;
        }
    }
    cout<<a_count[0]<<" "<<a_count[2]<<" "<<a_count[1]<<endl;
    cout<<b_count[0]<<" "<<b_count[2]<<" "<<b_count[1]<<endl;

    int a_temp_index = 0;
    int a_temp_max = a_win_count[0];
    for(int i=1; i<3; i++){
        if(a_win_count[i] > a_temp_max){
            a_temp_max = a_win_count[i];
            a_temp_index = i;
        }
    }

    if(a_temp_index == 0) cout<<"B ";
    else if(a_temp_index == 1) cout<<"C ";
    else cout<<"J ";

    int b_temp_index = 0;
    int b_temp_max = b_win_count[0];
    for(int i=1; i<3; i++){
        if(b_win_count[i] > b_temp_max){
            b_temp_max = b_win_count[i];
            b_temp_index = i;
        }
    }
    if(b_temp_index == 0) cout<<'B'<<endl;
    else if(b_temp_index == 1) cout<<'C'<<endl;
    else cout<<'J'<<endl;

    return 0;
}