#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <stdlib.h>
#include<stack>
using namespace std;

class Polish{
private:
public:
    void notation(int a[],string b[],int size_of_a, int size_of_b);
    void calculation(int a[],string b[],int size_of_a, int size_of_b);
};

void Polish::notation(int a[],string b[],int size_of_a, int size_of_b){
    for(int i=0;i<size_of_b;i++){
        if (b[size_of_b-i-1]=="+"){
            a[i+1]=a[i]+a[i+1];
        }
        if (b[size_of_b-i-1]=="-"){
            a[i+1]=a[i]-a[i+1];
        }
        if (b[size_of_b-i-1]=="*"){
            a[i+1]=a[i]*a[i+1];
        }
        if (b[size_of_b-i-1]=="/"){
            a[i+1]=a[i]/a[i+1];
        }
    }
    cout<<a[size_of_b]<<endl;
};

void Polish::calculation(int a[],string b[],int size_of_a, int size_of_b){
    int num1;
    int num2;
    string sym1;
    stack <int> myNumber;
    stack <string> mySymbol;
    for(int i=size_of_a-1;i>=0;i--){
        myNumber.push(a[i]);
    }
    for(int i=0;i<size_of_b;i++){
        mySymbol.push(b[i]);
    }

    while(mySymbol.empty()==0){
    num1=myNumber.top();
    myNumber.pop();
    num2=myNumber.top();
    myNumber.pop();
    sym1=mySymbol.top();
    mySymbol.pop();

    if (sym1=="+"){
        num2=num2+num1;
    }
    else if (sym1=="-"){
        num2=num1-num2;
    }
    else if (sym1=="*"){
        num2=num1*num2;
    }
    else if (sym1=="/"){
        num2=num1/num2;
    }
    else {
        cout<<"Error"<<endl;
    }
    myNumber.push(num2);
    }
    cout<<myNumber.top()<<endl;
}


int main(){
    string input;
    int space=1;
    getline(cin,input);
    istringstream str1(input);
    for(int i=0;i<input.length();i++){
        if (input[i]==' '){
            space++;
        }
    }
    string numbers_symbols[space];
    for(int i=0;i<space;i++){
        str1>>numbers_symbols[i];
    }
    int size_of_symbols=0;
    for(int i=0;i<space;i++){
        if(numbers_symbols[i]=="+"||numbers_symbols[i]=="-"||numbers_symbols[i]=="*"||numbers_symbols[i]=="/"){
            size_of_symbols++;
        }
    }
    int size_of_numbers=space-size_of_symbols;
    if (size_of_numbers-1!=size_of_symbols){
        cout<<"Error"<<endl;
        return 0;
    }
    string symbols[size_of_symbols];
    int numbers[size_of_numbers];
    for(int i=0;i<size_of_symbols;i++){
        symbols[i]=numbers_symbols[i];
       // cout<<"symbols:"<<symbols[i]<<endl;
    }

    for(int i=0;i<size_of_numbers;i++){
        numbers[i]=(atoi(numbers_symbols[i+size_of_symbols].c_str()));
       // cout<<"numbers:"<<numbers[i]<<endl;
    }
    Polish case1;
    case1.calculation(numbers,symbols,size_of_numbers,size_of_symbols);
}
