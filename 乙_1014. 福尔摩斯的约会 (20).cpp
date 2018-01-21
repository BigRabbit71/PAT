#include <iostream>
using namespace std;

int main() {
    string str1, str2, str3, str4;
    cin>>str1>>str2>>str3>>str4;

    string d;
    char up, s_h;
    int h, m;

    string same1;
    for(int i=0; i<min(str1.size(), str2.size()); i++){
        if(str1[i] == str2[i]) {
            same1 += str1[i];
        }
    }

    // get day
    for(auto a : same1){
        if(isupper(a)){
            up = a;
            break;
        }
    }

    switch (up-'A'){
        case 0:{
            d = "MON";
            break;
        }
        case 1:{
            d = "TUE";
            break;
        }
        case 2:{
            d = "WED";
            break;
        }
        case 3:{
            d = "THU";
            break;
        }
        case 4:{
            d = "FRI";
            break;
        }
        case 5:{
            d = "SAT";
            break;
        }
        case 6:{
            d = "SUN";
            break;
        }
        default:
            break;
    }

    // get hour
    s_h = same1[1];
    if(s_h <= '9'){
        h = s_h - '0';
    }else{
        h = s_h - 'A' + 10;
    }

    // get minute
    for(int i=0; i<min(str3.size(), str4.size()); i++){
        if(isalpha(str3[i]) && str3[i] == str4[i]) {
            m = i;
            break;
        }
    }


    cout<<d<<" ";
//    printf("%s", d.c_str());
    printf("%02d:%02d", h, m);
    return 0;
}