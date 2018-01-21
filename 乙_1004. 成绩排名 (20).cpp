/*
读入n名学生的姓名、学号、成绩，分别输出成绩最高和成绩最低学生的姓名和学号。

输入格式：每个测试输入包含1个测试用例，格式为
  第1行：正整数n
  第2行：第1个学生的姓名 学号 成绩
  第3行：第2个学生的姓名 学号 成绩
  ... ... ...
  第n+1行：第n个学生的姓名 学号 成绩
其中姓名和学号均为不超过10个字符的字符串，成绩为0到100之间的一个整数，这里保证在一组测试用例中没有两个学生的成绩是相同的。
输出格式：对每个测试用例输出2行，第1行是成绩最高学生的姓名和学号，第2行是成绩最低学生的姓名和学号，字符串间有1空格。

输入样例：
3
Joe Math990112 89
Mike CS991301 100
Mary EE990830 95
输出样例：
Mike CS991301
Joe Math990112
*/

//测试点1有错！！！！！

#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;

    int score, min_score=101, max_score=-1;
    string name, id, min_name, max_name, min_id, max_id;

    for(int i=0; i<n; i++)
    {
        cin>>name>>id>>score;
        if(score < min_score)
        {
            min_score = score;
            min_name = name;
            min_id = id;
        }
        else if(score > max_score)
        {
            max_score = score;
            max_name = name;
            max_id = id;
        }
    }

    cout<<max_name<<" "<<max_id<<endl;
    cout<<min_name<<" "<<min_id<<endl;

    return 0;
}