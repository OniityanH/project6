#include "Referee.h"
#include "Human.h"
#include "Computer.h"
#include<string>
#include<iostream>
#include <stdlib.h>
using namespace std;


void Computer::computer_choice(){
    computer_strategy[0]=computer_times+48;
    for (int i=1; i<computer_times+1;i++){
        computer_strategy[i]='R';
    }
}

void Computer::display_com(){
    for (int j=0;j<computer_times+1;j++){
        cout<<computer_strategy[j];
    }
}

//main(){
//    Computer A1;
//    cout<<"plz input size:"<<endl;
//    int input_size;
//    cin>>input_size;
//    A1.computer(input_size);
//    A1.computer_choice();
//    A1.display_com();
//}
