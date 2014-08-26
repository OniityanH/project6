#include <iostream>
#include"Computer.h"
#include"Human.h"
#include"Referee.h"
using namespace std;

int main(){

int times;
string H_string;
for (int i=0;i<times;i++){
    cin>>H_string;
}

Human H(' ');
Computer C('R');
Referee R;

for (int j=0;j<times;j++){
    H.set_human_choice(H_string[j]);
    char res=R.compare(C.get_com_choice(),H.get_human_choice());
    cout<<res<<" ";
}
return 0;
}
