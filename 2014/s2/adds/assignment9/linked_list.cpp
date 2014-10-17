#include "linked_list.h"
#include <cstdlib>
#include <iostream>

using namespace std;

void linked_list::AddNode(node *&head, node *&tail, int data){
    if(empty(head)){                    // we consider 2 cases,1. add a number to a empty linked list
        node *temp=new node;            //2. add anumber to a unempty linked list

        temp->data=data;                        //1. we just create a temp node with value and this node
        temp->next=NULL;                        // will point to NULL because the linked list is empty
        head=temp;                              //then head node and tail node only equal to this temp ecause only 1 number in the linked list
        tail=temp;
    }
    else{                                       //2.create a new node and use the tail node, tail node will point to this temp node and
    node *temp=new node;                        //then the tail node equal this temp node and point to NULL

    temp->data=data;
    temp->next=NULL;

    tail->next=temp;
    tail=temp;
    }
}

void linked_list::DelHead(node *&head, node *&tail){ // delete the head node
    if(empty(head)){                            // 3 cases empty and unempty and only 1 value
        cout<<"empty 0";                            //if linked list is empty, then print out empty 0
    }
    else if (head==tail){                           //if only 1 number, then just delete that node, tail head should be NULL
        delete head;
        head=NULL;
        tail=NULL;
    }
    else{                                           //if not empty, head node point to next node and delocated the 1st node
        node *temp=head;
        head=head->next;
        delete temp;
    }
}

void linked_list::Print(node *curr){           //2 cases empty and unempty,
    if(empty(curr)){                                //if empty, only print out empty 0;
        cout<<"empty 0";
        return;
    }
    else{                                           //if not empty
        while(curr!=NULL){                              //this line is for the 1st number in the linked list
            while(curr->next!=NULL){                    //use while to go through linkedlist and find the number should be print out
                cout<<curr->data<<"->";
                curr=curr->next;
            }
            break;
        }
        cout<<curr->data;                               //print out
    }
}

int linked_list::length(node *&head){                //use a node go throught linked list and get length of linked lsit
    int length1=0;
    node *temp=head;
    while (temp!=NULL){
        length1++;
        temp=temp->next;
    }
    return length1;
}

void linked_list::MidNode(node *curr, int length1){  //find the middle 1 or 2 node and print out
    if (length1 != 0){
        int OneORZero=(length1%2);              //decide 1 number or 2 should be printed out
        if (OneORZero==0){                      //if 2 number should be print out,go and ger the length/2 numebr
            for(int i=0;i<length1/2-1;i++){               //and length/2 +1 numebr , then usr linked list print out those number
                curr=curr->next;
            }
            cout<<" "<<curr->data;
            curr=curr->next;
            cout<<" "<<curr->data;
        }
        else{
            for(int j=0;j<length1/2;j++){             //if only 1 number should be print out, then go to the middle one and print out
                curr=curr->next;
            }
            cout<<" "<<curr->data;
        }
    }
}
