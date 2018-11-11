//
// Created by Lexie on 2018/11/10.
//

#include "Josephus_problem.h"
#include <iostream>

using namespace std;

Josephus_problem::Josephus_problem(int a,int m,int c)
:amount(a),unfo(m),circle(c),current_amount(amount)
{
    //
}

void Josephus_problem::CreateList() {
    LNode *curr_node = new LNode;
    curr_node = head;
    for(int i = 0;i < amount; i++){
        LNode *node = new LNode;
        node->serial_number = i + 1;
        if(i == 0){
            curr_node = node;
            head = node;
            head->next = head;
        } else{
            curr_node->next = node;
            node->next = head;
            curr_node = node;
        }
        node = NULL;
    }
    curr_node = NULL;
}

void Josephus_problem::Sorting() {
    LNode *curr_node = new LNode;
    curr_node = head;
    int pos = 0;
    for(;pos<unfo-1;pos++){
        curr_node = curr_node->next;
    }
    for(int i = 1;current_amount > 0;i++){
        if(i == circle){
            cout << curr_node->serial_number<< " ";
            i = 0;
            current_amount = current_amount - 1;
            Delete(curr_node->serial_number);
        }
        curr_node = curr_node->next;
    }
    curr_node = NULL;
}

void Josephus_problem::Delete(int del_num){
    if(del_num == head ->serial_number){
        head = head->next;
    }
    LNode *temp = head;
    LNode *previous = head;
    for(int i = 0; i < amount;i++){
        if(temp->serial_number == del_num){
            previous->next = temp->next;
            temp = temp->next;
        }
        previous = temp;
        temp = temp->next;
    }
    temp = NULL;
    previous = NULL;
}