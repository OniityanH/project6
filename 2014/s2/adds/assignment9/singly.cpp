#include "singly.h"
#include <cstdlib>
#include <iostream>

using namespace std;

void singly::AddNode(node *&head, node *&tail, int data){
    if(empty(head)){                    // we consider 2 cases,1. add a number to a empty linked list
        node *temp=new node;            //2. add anumber to a unempty linked list
        temp->data=data;                        //1. we just create a temp node with value and this node
        temp->next=NULL;                        // will point to NULL because the linked list is empty
        head=temp;                              //then head node and tail node only equal to this temp ecause only 1 number in the linked list
        tail=temp;
    }
    else{                                       //2.
    node *temp=new node;

    temp->data=data;
    temp->next=NULL;

    tail->next=temp;
    tail=temp;
    }
}

void singly::DelHead(node *&head, node *&tail){
    if(empty(head)){
        cout<<"empty 0";
    }
    else if (head==tail){
        delete head;
        head=NULL;
        tail=NULL;
    }
    else{
        node *temp=head;
        head=head->next;
        delete temp;
    }
}

void singly::Print(node *curr){
    if(empty(curr)){
        cout<<"empty 0";
        return;
    }
    else{
        while(curr!=NULL){
            while(curr->next!=NULL){
                cout<<curr->data<<"->";
                curr=curr->next;
            }
            break;
        }
        cout<<curr->data;
    }
}

int singly::length(node *&head){
    int length1=0;
    node *temp=head;
    while (temp!=NULL){
        length1++;
        temp=temp->next;
    }
    return length1;
}

void singly::MidNode(node *curr, int length1){
    if (length1 != 0){
        int l=(length1%2);
        int len=length1/2;
        if (l==0){
            for(int i=0;i<len-1;i++){
                curr=curr->next;
            }
            cout<<" "<<curr->data;
            curr=curr->next;
            cout<<" "<<curr->data;
        }
        else{
            for(int j=0;j<len;j++){
                curr=curr->next;
            }
            cout<<" "<<curr->data;
        }
    }
}
