#ifndef REFEREE_H
#define REFEREE_H
#include "Referee.h"
#include<iostream>
#include<string>
#include"human.h"
using namespace std;

class Referee
{
public:
    Referee();
    char compare(char H_moves,char C_moves);
private:
    char H_element;
    char C_element;
};

#endif // REFEREE_H
