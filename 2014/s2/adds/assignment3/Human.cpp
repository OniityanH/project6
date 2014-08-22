#include "Referee.h"
#include "Human.h"
#include "Computer.h"
#include<string>
#include<iostream>
#include <stdlib.h>
using namespace std;

void Human::human_choice(){
    human_strategy[0]=human_times+48;
    for (int i=1;i<human_times+1;i++){
        cout<<"plz input "<<i<<" choice:"<<endl;
        cin>>human_strategy[i];
    }
};

void Human::display_hum(){
    for(int j=0;j<human_times+1;j++){
        cout<<human_strategy[j];
    }
};

//main(){
//    Human H1;
//    cout<<"plz input size:"<<endl;
//    int input_size_hum;
//    cin>>input_size_hum;
//    H1.human(input_size_hum);
//    H1.human_choice();
//    H1.display_hum();
//}
