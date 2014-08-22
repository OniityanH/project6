#include "Bureaucrat.h"
#include "Computer.h"
#include <stdlib.h>
#include <iostream>
#include <time.h>
using namespace std;

void Bureaucrat::Bureaucrat_move(){
    for(int i=1;i<computer_times;i++){
        computer_strategy[i+1]='P';
    }
}
