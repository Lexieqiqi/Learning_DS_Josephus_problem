#include <iostream>
#include "Josephus_problem.h"
#include <string>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main() {
    cout << "������Χ����Բ����Χ������n��";
    string amount,unfo,circle;
    cin>>amount;
    cin.sync();
    int a = stoi(amount);
    cout << "�������һ�ο�ʼ�����˵�λ��m��";
    cin>>unfo;
    cin.sync();
    int b = stoi(unfo);
    cout << "��ϣ���������ڼ��������˳��У�";
    cin>>circle;
    int c = stoi(circle);


    Josephus_problem *test = new Josephus_problem(a,b,c);
    test->CreateList();
    cout << "���е�˳�����£�";
    test->Sorting();
    return 0;
}