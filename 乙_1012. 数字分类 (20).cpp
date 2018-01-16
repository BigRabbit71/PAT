#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    vector<float> A(5, 0);

    cin>>n;
    vector<int> num;

    int temp = 0;
    int flag = 1;
    int len = 0;
    for(int i=0; i<n; i++){
        cin>>temp;
        if(temp%5 == 0 && temp%2 == 0)
            A[0] += temp;
        if(temp%5 == 1){
            A[1] += flag*temp;
            flag *= -1;}
        if(temp%5 == 2)
            A[2]++;
        if(temp%5 == 3){
            A[3] += temp;
            len++;
        }
        if(temp%5 == 4) {
            if (temp > A[4])
                A[4] = temp;
        }
    }

    for(int i=0; i<3; i++){
        if(A[i] < 0.1)
            cout<<"N ";
        else
            cout<<A[i]<<" ";
    }
    if(A[3] < 1)
        cout<<"N ";
    else{
        A[3] /= len;
        printf("%.1f ", A[3]);
    }

    if(A[4] < 1)
        cout<<"N";
    else
        cout<<A[4];

    return 0;
}