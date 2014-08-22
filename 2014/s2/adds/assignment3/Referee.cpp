#include "Referee.h"
#include "Human.h"
#include "Computer.h"
#include<string>
#include<iostream>
#include <stdlib.h>
using namespace std;


void Referee::compare(){
    cout<<"compare the result:"<<endl;
    for(int i=1;i<human_times+1;i++){
        if (human_strategy[i]==computer_strategy[i]){
            cout<<'T';}
        if (human_strategy[i]=="P"&&computer_strategy[i]=="S"){
            cout<<'L';}
        if (human_strategy[i]=="S"&&computer_strategy[i]=="P"){
            cout<<'W';}
        if (human_strategy[i]=="P"&&computer_strategy[i]=="S"){
            cout<<'W';}
        if (human_strategy[i]=="S"&&computer_strategy[i]=="R"){
            cout<<'L';}
        if (human_strategy[i]=="R"&&computer_strategy[i]=="P"){
            cout<<'L';}
        if (human_strategy[i]=="R"&&computer_strategy[i]=="S"){
            cout<<'W';}
        }
    }

