#include "Palindrome.h"
#include "Palindrome.cpp"
#include "Fibonacci.h"
#include "Fibonacci.cpp"
int main(){
Palindrome Palin;
std::string str;
int a,i;
std::cout<<"enter your string "<<std::endl;
getline(std::cin,str);
std::cout<<"enter your number"<<std::endl;
std::cin>>a;
std::cout<<Palin.reverseString(str)<<"   ";
std::cout<<Palin.isPalindrome(str)<<"   ";
    std::cout<<n_Fibonacci(a)<<std::endl;
return 0;
}

