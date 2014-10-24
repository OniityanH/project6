#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <stdlib.h>
#include <stack>
#include "adds10.h"
using namespace std;

void Polish::calculation(int a[],string b[],int size_of_a, int size_of_b){  //the detail of the function
    int num1;                                                               //set a number which is the top number of the number stack;
    int num2;                                                               //set a number which is the 2nd top number of the number stack;
    string sym1;                                                            //set a string variable which is the top symbol of the symbol stack;
    stack <int> myNumber;                                                   //set number stack
    stack <string> mySymbol;                                                //set string stack
    for(int i=size_of_a-1;i>=0;i--){                                        //push each number in to stack
        myNumber.push(a[i]);
    }
    for(int i=0;i<size_of_b;i++){                                           //push each symbol in to stack
        mySymbol.push(b[i]);
    }

    while(mySymbol.empty()==0){                                             //when symbols exist in the symbol stack ,do this while loop
    num1=myNumber.top();
    myNumber.pop();                                                         //get the top number, and pop the top number
    num2=myNumber.top();
    myNumber.pop();                                                         //get the 2nd top number, and pop the top number
    sym1=mySymbol.top();
    mySymbol.pop();                                                         //get the top symbol, and pop the top symbol

    if (sym1=="+"){                                                         //if the symbol is +, num2 equal num2+num1
        num2=num2+num1;
    }
    else if (sym1=="-"){                                                    //if the symbol is -, num2 equal num1-num2
        num2=num1-num2;
    }
    else if (sym1=="*"){                                                    //if the symbol is *, num2 equal num2*num1
        num2=num1*num2;
    }
    else if (sym1=="/"){                                                    //if the symbol is /, num2 equal num1/num2
        num2=num1/num2;
    }
    else {                                                                  //if the symbol cannot be excessed, print error
        cout<<"Error"<<endl;
    }
    myNumber.push(num2);                                                    //push num2 into numstack and do the while loop again
    }

    cout<<myNumber.top()<<endl;                                             //print out hte result
}
