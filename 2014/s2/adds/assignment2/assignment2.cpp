#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

class Computer{
    private:
        string computer_strategy;//array of computer choice
    public:
        void computer(string hum1){
        computer_strategy=hum1;//contractor
        }
};

class Human{
    private:
        string  human_strategy;//array of human choice
    public:
        void human(string hum1){
        human_strategy=hum1;//contractor
        }
};

class Referee{
    public:
        void referee(){

        Human human1;//human object array
        Computer computer1;//computer object array

        string human_size_plus;//human array with times
        cout<<"input ur choice:"<<endl;
        cin>>human_size_plus;//input human choice
        int times=human_size_plus[0]-48;//times

        string computer_choice;//computer array with times
        computer_choice[0]=times+48;
        for(int i=1;i<times+1;i++){
            computer_choice[i]=82;
        }
        cout<<"computer choice:"<<endl;
        for(int i=0;i<times+1;i++){
            cout<<computer_choice[i];//computer choice always R
        }
        cout<<" "<<endl;
        human1.human(human_size_plus);
        computer1.computer(computer_choice);

        string human_result[times];
        cout<<"ur result:"<<endl;
        for(int j=1;j<times+1;j++){//compare human and computer
            if (human_size_plus[j]==computer_choice[j]){//they tie
                human_result[j-1]='T';
            }
            if (human_size_plus[j]-computer_choice[j]==-3){//human  p com s
                human_result[j-1]='L';
            }
            if (human_size_plus[j]-computer_choice[j]==-2){//human  p com r
                human_result[j-1]='W';
            }
            if (human_size_plus[j]-computer_choice[j]==3){//human  s com p
                human_result[j-1]='W';
            }
            if (human_size_plus[j]-computer_choice[j]==1){//human  s com r
                human_result[j-1]='L';
            }
            if (human_size_plus[j]-computer_choice[j]==2){//human  r com p
                human_result[j-1]='L';
            }
            if (human_size_plus[j]-computer_choice[j]==-1){//human  r com s
                human_result[j-1]='W';
            }
        }
        for(int i=0;i<times;i++){
            cout<<human_result[i];//out put the result
        }
}
};

int main (){
    Referee A1;
    A1.referee();//access
}
