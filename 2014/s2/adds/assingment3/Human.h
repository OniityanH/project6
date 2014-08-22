#ifndef HUMAN_H
#define HUMAN_H
#include "Referee.h"
#include "Computer.h"
#include<string>
#include<iostream>
#include <stdlib.h>
using namespace std;

class Human{
    protected:
        string* human_strategy;//array of computer choice
        int human_times;
    public:
        void human(int times1);
        void human_choice();
        void display_hum();
};

#endif // HUMAN_H
