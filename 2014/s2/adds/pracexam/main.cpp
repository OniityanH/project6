#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <stdlib.h>
#include <stack>
using namespace std;

void SelectionSort(int num[]);

struct Node {
    int data;
    Node();
    add(int n,int a);
    Node* link;

    Node* next;
    };

    Node* head;

void SelectionSort(int num[]){
      int i, j, first, temp;
      int numLength = sizeof(num);
      for (i= numLength-1;i>0;i--)
     {
           first=0;                 // initialize to subscript of first element
           for (j=1; j<=i; j++)   // locate smallest between positions 1 and i.
          {
                 if (num[j] < num[first])
                 first = j;
          }
         temp = num[first];   // Swap smallest found with element in position i.
         num[first] = num[i];
         num[i] = temp;
     }
     return;
}

Node(){
    head=NULL;
    next=NULL;
}

void add(int n,int a){
    Node* temp=new Node;
    Node* temp2=new Node;
    temp->data=a;
    temp->next=NULL;
    Node* current=head;
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

int main(){
    string input;									// input is the array you should input
    int space=1;							//set space, the space+1 will be the length of array
    getline(cin,input);								// use getline and istringstream to set divide each element by ' '
    istringstream str1(input);
    for(int i=0;i<input.length();i++){				// for loop to decide space
        if (input[i]==' '){
            space++;
        }
    }
    int numbers[space];								//set number[] which the element is int
    string array_string[space];						//set array_string[] which the element is string
    for(int j=0;j<space;j++){						//use for loop and istreamstring to transfer each element
        str1>>array_string[j];							//to array_string[] then use atoi change array type from
        numbers[j]=(atoi(array_string[j].c_str()));		//string to int
    }
    SelectionSort(numbers);
    for(int j=0;j<space;j++){						//use for loop and istreamstring to transfer each element
        cout<<numbers[j]<<endl;
    }
    Node();
    for(int j=1;j<space-1;j++){
        cout<<add(j, numbers[j])<<"->";
    }
    cout<<add(10,numbers[10]);
}
