#include "RandomComputer.h"
#include "Computer.h"
#include <stdlib.h>
#include <iostream>
#include <time.h>
using namespace std;

void RandomComputer::random_move(){
    srand( (unsigned)time( NULL ) );
    string Array[3]={"P","R","S"};
    for (int i=0;i<computer_times;i++){
        int n=rand()%2;
        computer_strategy[i+1]=n;
    }
}
