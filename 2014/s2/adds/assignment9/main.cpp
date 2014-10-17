#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include "linked_list.h"

using namespace std;

int main()
{
    node *head=NULL;                        //create head and tail node
    node *tail=NULL;
    string input;
    int lenghtofarray1ay=1;                 //in the beginning, set the length of array of string is 1;
    linked_list case1;
    getline(cin, input);
    int len = input.length();               //get the length of linked lsit
    for(int i=0; i < len; i++){
       if (input[i]==' '){
        lenghtofarray1ay++;                 //now the length of array is fixed
       }
    }

    string array1[lenghtofarray1ay];
    istringstream str1(input);
    for (int j=0;j<lenghtofarray1ay;j++){           //get a string array with length is lenghtofarray1ay
    getline(str1,array1[j],' ');                    //use istringstream to put string element to array
    }

    int num=0;
    string str;

    for(int k=0;k<lenghtofarray1ay;k++){
        if(array1[k][0]=='A'){
            str = array1[k].substr(1,array1[k].length());   //if A appears, string array element to int array element
            num = atoi(str.c_str());
            case1.AddNode(head,tail,num);                   //addnode in the end of the linked list
            num = 0;
        }
        else if (array1[k][0]=='R'){                        //if R appears, delete the 1st value
                if(case1.empty(head)){
                }
                else{
                    case1.DelHead(head,tail);
                }
        }
    }

    case1.Print(head);                                      // print out linked list
    case1.MidNode(head,case1.length(head));                 //find the middle 1 or 2 value

    delete [] head;                                         //delocate the node
}
