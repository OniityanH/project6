#include "Referee.h"
#include "Human.h"
#include "Computer.h"
#include<string>
#include<iostream>
#include <stdlib.h>

main(){
    Human H1;
    Computer C1;
    Referee R1;

    cout<<"plz input size:"<<endl;
    int input_size;
    cin>>input_size;
    H1.human(input_size);
    H1.human_choice();
    H1.display_hum();

    C1.computer(input_size);
    C1.computer_choice();
    C1.display_com();
}
