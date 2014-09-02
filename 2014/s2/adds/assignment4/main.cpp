#include "Palindrome.h"
#include "Fibonacci.h"
#include "Palindrome.cpp"
#include "Fibonacci.cpp"
#include "EfficientFibonacci.h"
#include "EfficientFibonacci.cpp"
#include <iostream>
#include <string>
#include <sstream>

int main(){
Palindrome Palin;
Fibonacci Fib;
int res;
int i;
std::string input_value;
std::string str1;
std::string numbers;
std::cout<<"enter your value:"<<std::endl;
getline(std::cin,input_value);
std::istringstream e1(input_value);
std::cout<<"enter your string "<<std::endl;
getline(e1,str1,' ');
std::cout<<"enter your number"<<std::endl;
getline(e1,numbers,' ');
std::stringstream e2(numbers);
e2>>res;
std::cout<<Palin.reverseString(str1)<<"   ";
if (Palin.isPalindrome(str1)==1){
    std::cout<<"Yes"<<std::endl;
}
else{
    std::cout<<"No"<<std::endl;
}

for (int j=0; j<numbers.length();j++){
    if (isdigit(numbers[j])){
        std::cout<<Fib.n_Fibonacci(res)<<std::endl;
    }
    else {
        i=1;
    }
}
if (i==1){
    std::cout<<"Error"<<std::endl;
}
return 0;
}

