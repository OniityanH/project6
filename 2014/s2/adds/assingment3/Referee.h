#ifndef REFEREE_H
#define REFEREE_H
#include "Human.h"
#include "Computer.h"
#include<string>
#include<iostream>
#include <stdlib.h>
using namespace std;

class Referee:public Human, Computer{
    public:
        void referee(){
        cout<<"constractor called"<<endl;
        }
        void compare();
        void display_res();

};

#endif // REFEREE_H
