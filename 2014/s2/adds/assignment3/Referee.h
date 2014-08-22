#ifndef REFEREE_H
#define REFEREE_H
#include "Human.h"
#include "Computer.h"
#include<string>
#include<iostream>
#include <stdlib.h>
using namespace std;

class Referee: public Human,public Computer{
    public:
        void referee(){
        cout<<"constractor called"<<endl;
        }
        void compare(string array1,string array2);
        void display_res();

};

#endif // REFEREE_H
