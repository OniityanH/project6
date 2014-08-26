#ifndef COMPUTER_H
#define COMPUTER_H
#include<iostream>
#include<string>
using namespace std;
class Computer
{
    public:
        Computer(char);
        void set_computer(char com_choice);
        char get_com_choice();
    private:
        char com_element;
};

#endif // COMPUTER_H
