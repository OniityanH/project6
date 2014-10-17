#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include "singly.h"


using namespace std;

int main()
{
    node *head=NULL;
    node *tail=NULL;
    string input;
    int lenghtofarray1ay=1;
    singly case1;
    getline(cin, input);
    int len = input.length();
    for(int i=0; i < len; i++){
       if (input[i]==' '){
        lenghtofarray1ay++;
       }
    }

    string array1[lenghtofarray1ay];
    istringstream str1(input);
    for (int j=0;j<lenghtofarray1ay;j++){
    getline(str1,array1[j],' ');
    }

    int num=0;
    string str;

    for(int k=0;k<lenghtofarray1ay;k++){
        if(array1[k][0]=='A'){
            str = array1[k].substr(1,array1[k].length());
            num = atoi(str.c_str());
            case1.AddNode(head,tail,num);
            num = 0;
        }
            else if (array1[k][0]=='R'){
                if(case1.empty(head)){
                }
                else{
                    case1.DelHead(head,tail);
                }
            }
    }

    case1.Print(head);
    case1.MidNode(head,case1.length(head));

    delete [] head;
}
