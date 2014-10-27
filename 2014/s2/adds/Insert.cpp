#include<iostream>
using namespace std;



struct node{

node* next;
int data;
void addnode(int,int);
void delnode(int);
void print();
void Insert(int n,int data);
void del(int);
void reverse_();
};

node* head;

void Insert(int n,int data){
    node* temp1=new node;
    temp1->data=data;
    temp1->next=NULL;
    if (n==1){
        temp1->next=head;
        head=temp1;
        return;
    }
    node* current=head;
    for(int i=0;i<n-2;i++){
        current=current->next;
    }
    temp1->next=current->next;
    current->next=temp1;
}

void add(int n,int a){
    node* temp=new node;
    node* temp2=new node;
    temp->data=a;
    temp->next=NULL;
    node* current=head;
    if (n!=1){
        for(int i=0;i<n-2;i++){
            current=current->next;
        }
        current->next=NULL;
        temp2=current->next;
        temp=temp2->next;
    }
    else{
        temp=head;
    }
}

void del(int n){
node* temp=new node;
node* current=head;
if (n==1){
    head=current->next;
    delete current;
    return;
}
for (int i=0;i<n-2;i++){
    current=current->next;
}
    temp=current->next;
    current->next=temp->next;
    delete temp;
}

void reverse_(){
    node* current, *prev, *next1;
    current=head;
    prev=NULL;
    while(current!=NULL){
        next1=current->next;
        current->next=prev;
        prev=current;
        current=next1;
    }
    head=prev;
}

void print(){
    node* current=head;

    while(current!=NULL){
        cout<<current->data<<endl;
        current=current->next;
    }

}

int main(){
    head=NULL;
    Insert(1,1);
    Insert(1,7);
    Insert(1,2);
    Insert(1,1);
    Insert(1,8);
    del(2);
    reverse_();
    print();
}
