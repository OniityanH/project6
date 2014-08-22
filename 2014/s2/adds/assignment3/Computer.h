#ifndef COMPUTER_H
#define COMPUTER_H
#include "Referee.h"
#include "Human.h"
#include<string>
#include<iostream>
#include <stdlib.h>
using namespace std;

class Computer{
    protected:
        string* computer_strategy;//array of computer choice
        int computer_times;
    public:
        void computer(int times1){
            computer_times=times1;
            computer_strategy= new string[times1+1];
        }
        void computer_choice();
        void display_com();
};

#endif // COMPUTER_H
