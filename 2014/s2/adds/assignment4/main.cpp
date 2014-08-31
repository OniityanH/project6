#include "Palindrome.h"
#include "Fibonacci.h"
int main(){
Palindrome Palin;
std::string str;
int a;
std::cout<<"enter your string "<<std::endl;
getline(std::cin,str);
std::cout<<"enter your number"<<std::endl;
std::cin>>a;
std::cout<<Palin.reverseString(str)<<"   ";
std::cout<<Palin.isPalindrome(str)<<"   ";
    std::cout<<n_Fibonacci(a)<<std::endl;
return 0;
}

