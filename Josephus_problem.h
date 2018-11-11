//
// Created by Lexie on 2018/11/10.
//

#ifndef LINKED_LIST_JOSEPHUS_PROBLEM_H
#define LINKED_LIST_JOSEPHUS_PROBLEM_H

#endif //LINKED_LIST_JOSEPHUS_PROBLEM_H

struct LNode{
    int serial_number;
    struct LNode *next;
};

class Josephus_problem{
public:
    Josephus_problem(int a,int m,int c);
    void CreateList();
    void Sorting();
    void Delete(int del_num);
private:
    int amount;
    int unfo;
    int circle;
    int current_amount;
    LNode *head = new LNode;
};