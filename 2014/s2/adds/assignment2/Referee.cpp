#include "Referee.h"
#include<iostream>
#include<string>
#include"human.h"
using namespace std;

Referee::Referee()
{
}

char Referee::compare(char C_element,char H_element){
    if (H_element=='R'){
        return 'T';
    }
    else if (H_element=='P'){
        return 'W';
    }
    else if (H_element=='S'){
        return 'L';
    }
}
