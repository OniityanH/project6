#include "New_referee.h"
#include "Referee.h"
#include "FistfullODollars.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "PaperDoll.h"
using namespace std;
New_referee::New_referee1(){
    cout<<"choose ur computer"<<endl;
    string typeofcom;
    cin>>typeofcom;
    if (typeofcom=="RandomComputer"){
        Random R1;
        Human H1;
        cout<<"plz input size:"<<endl;
        int input_size;
        cin>>input_size;
        H1.human(input_size);
        H1.human_choice();
        H1.display_hum();
        cout<<"\n"<<endl;
        C1.computer(input_size);
        C1.computer_choice();
        C1.display_com();
        compare(H1, R1);
    }

    if (typeofcom=="Bureaucrat"){
        Bureaucrat R1;
        Human H1;
        cout<<"plz input size:"<<endl;
        int input_size;
        cin>>input_size;
        H1.human(input_size);
        H1.human_choice();
        H1.display_hum();
        cout<<"\n"<<endl;
        C1.computer(input_size);
        C1.computer_choice();
        C1.display_com();
        compare(H1, R1);
    }

    if (typeofcom=="FistfullODollars"){
        FistfullODollars R1;
        Human H1;
        cout<<"plz input size:"<<endl;
        int input_size;
        cin>>input_size;
        H1.human(input_size);
        H1.human_choice();
        H1.display_hum();
        cout<<"\n"<<endl;
        C1.computer(input_size);
        C1.computer_choice();
        C1.display_com();
        compare(H1, R1);
    }

    if (typeofcom=="Toolbox"){
        Toolbox R1;
        Human H1;
        cout<<"plz input size:"<<endl;
        int input_size;
        cin>>input_size;
        H1.human(input_size);
        H1.human_choice();
        H1.display_hum();
        cout<<"\n"<<endl;
        C1.computer(input_size);
        C1.computer_choice();
        C1.display_com();
        compare(H1, R1);
    }


    if (typeofcom=="Crescendo"){
        Crescendo R1;
        Human H1;
        cout<<"plz input size:"<<endl;
        int input_size;
        cin>>input_size;
        H1.human(input_size);
        H1.human_choice();
        H1.display_hum();
        cout<<"\n"<<endl;
        C1.computer(input_size);
        C1.computer_choice();
        C1.display_com();
        compare(H1, R1);
    }

    if (typeofcom=="PaperDoll"){
        PaperDoll R1;
        Human H1;
        cout<<"plz input size:"<<endl;
        int input_size;
        cin>>input_size;
        H1.human(input_size);
        H1.human_choice();
        H1.display_hum();
        cout<<"\n"<<endl;
        C1.computer(input_size);
        C1.computer_choice();
        C1.display_com();
        compare(H1, R1);
    }
}
