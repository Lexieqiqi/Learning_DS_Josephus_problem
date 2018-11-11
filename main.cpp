#include <iostream>
#include "Josephus_problem.h"
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main() {
    cout << "请输入围坐在圆桌周围的人数n：";
    string amount,unfo,circle;
    cin>>amount;
    cin.sync();
    int a = stoi(amount);
    cout << "请输入第一次开始报数人的位置m：";
    cin>>unfo;
    cin.sync();
    int b = stoi(unfo);
    cout << "你希望报数到第几个数的人出列？";
    cin>>circle;
    int c = stoi(circle);


    Josephus_problem *test = new Josephus_problem(a,b,c);
    test->CreateList();
    cout << "出列的顺序如下：";
    test->Sorting();
    return 0;
}