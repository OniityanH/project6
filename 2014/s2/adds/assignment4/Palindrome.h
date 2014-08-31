#ifndef PALINDROME_H
#define PALINDROME_H
#include<iostream>
#include<string>

class Palindrome{
public:
    std::string reverseString(std::string);
    bool isPalindrome(std::string);
private:
    std::string string_reversed;
};

#endif // PALINDROME_H
