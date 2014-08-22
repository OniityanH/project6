#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H
#include "Computer.h"
#include <iostream>
using namespace std;

class RandomComputer:public Computer{
    public:
        void random_move();
    protected:
    private:
};

#endif // RANDOMCOMPUTER_H
