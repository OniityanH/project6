#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <stdlib.h>
#include <stack>
#include "adds10.h"
#include "adds10.cpp"
using namespace std;
int main(){
    string input;                           //set the input string
    int space=1;                            //set space and we will get the length of the input string
    getline(cin,input);                     //gerline function cin the input string
    istringstream str1(input);              //use istringstream to set each number abd symbol to another two array
    for(int i=0;i<input.length();i++){      //get the length of the input array
        if (input[i]==' '){
            space++;
        }
    }
    string numbers_symbols[space];          //sett a string each elements is numbers and symbols
    for(int i=0;i<space;i++){
        str1>>numbers_symbols[i];           //push numbers into the new array
    }
    int size_of_symbols=0;                  //set size of the symbols
    for(int i=0;i<space;i++){
        if(numbers_symbols[i]=="+"||numbers_symbols[i]=="-"||numbers_symbols[i]=="*"||numbers_symbols[i]=="/"){
            size_of_symbols++;              //get size of the symbols
        }
    }
    int size_of_numbers=space-size_of_symbols;//get size of the numebrs
    if (size_of_numbers-1!=size_of_symbols){
        cout<<"Error"<<endl;                //if size of numbers is not equal to the size of symbol, cout error
        return 0;
    }
    string symbols[size_of_symbols];        //set a array which include only symbol
    int numbers[size_of_numbers];           //set a array which include only numbers
    for(int i=0;i<size_of_symbols;i++){
        symbols[i]=numbers_symbols[i];      //push each elements into symbol array
    }

    for(int i=0;i<size_of_numbers;i++){
        numbers[i]=(atoi(numbers_symbols[i+size_of_symbols].c_str()));//push each elements into numbers array
    }
    Polish case1;           //set an object
    case1.calculation(numbers,symbols,size_of_numbers,size_of_symbols);//excess the function and get the result.
}
