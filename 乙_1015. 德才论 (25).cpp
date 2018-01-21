#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Student{
    long id;
    int de;
    int cai;
    int sum;
};

// 规定了怎样才是"小于"，即哪个排在前面
bool compare(Student stu_a, Student stu_b) {
    if(stu_a.sum > stu_b.sum) return true;
    else if(stu_a.sum == stu_b.sum) {
        if(stu_a.de > stu_b.de) return true;
        else if(stu_a.de == stu_b.de){
            if(stu_a.id < stu_b.id) return true;
        }
    }
    return false;
}

int main() {
    int n, l, h;
    cin>>n>>l>>h;

    vector<Student> stu1, stu2, stu3, stu4;
    Student stu;
    for(int i=0; i<n; i++){
        cin>>stu.id>>stu.de>>stu.cai;
        stu.sum = stu.de + stu.cai;
        if(stu.de>=l && stu.cai>=l) {
            if (stu.de >= h && stu.cai >= h)
                stu1.push_back(stu);
            else if (stu.de >= h && stu.cai >= l)
                stu2.push_back(stu);
            else if (stu.de >= l && stu.cai >= l && stu.de >= stu.cai)
                stu3.push_back(stu);
            else
                stu4.push_back(stu);
        }
    }

    sort(stu1.begin(), stu1.end(), compare);
    sort(stu2.begin(), stu2.end(), compare);
    sort(stu3.begin(), stu3.end(), compare);
    sort(stu4.begin(), stu4.end(), compare);

    cout<<(stu1.size()+stu2.size()+stu3.size()+stu4.size())<<"\n";
    for(int i=0; i<stu1.size(); i++)
        cout<<stu1[i].id<<" "<<stu1[i].de<<" "<<stu1[i].cai<<"\n";
    for(int i=0; i<stu2.size(); i++)
        cout<<stu2[i].id<<" "<<stu2[i].de<<" "<<stu2[i].cai<<"\n";
    for(int i=0; i<stu3.size(); i++)
        cout<<stu3[i].id<<" "<<stu3[i].de<<" "<<stu3[i].cai<<"\n";
    for(int i=0; i<stu4.size(); i++)
        cout<<stu4[i].id<<" "<<stu4[i].de<<" "<<stu4[i].cai<<"\n";

    return 0;
}