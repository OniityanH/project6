#include "Computer.h"
#include<iostream>
#include<string>
using namespace std;
Computer::Computer(char input_com)
{
    set_computer(input_com);
}

void Computer::set_computer(char com_choice){
    com_element=com_choice;
}

char Computer::get_com_choice(){
    return com_element;
}
