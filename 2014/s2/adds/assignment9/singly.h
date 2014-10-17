#ifndef SINGLY_H
#define SINGLY_H
#include<iostream>
using namespace std;
struct node{
    int data;                       //the number input
    node *next;                     //node point to next
};

class singly{
public:
    bool empty(node *head){         //empty function which determine the linked
        if(head == NULL){           //list is empty or not
            return true;
        }                           //if empty return true else return false ,this function will be used
        else{                       //in the function below
            return false;
        }
    }
    void AddNode(node *&head, node *&tail, int num);//add a number in the last position
    void DelHead(node *&head, node *&tail);//delete the 1st number
    void Print(node *curr);//print the number
    void MidNode(node *curr,int length1);//get the mid 1 or 2 number
    int length(node *&head);//get the length of the linked list
};

#endif // SINGLY_H
