#include "EfficientFibonacci.h"
#include<iostream>
int EfficientFibonacci::n_Fibonacci(int nth,int elementnum=1,int l=0){
    if (nth==1){
        return elementnum;
    }
    if (nth==0){
        return 0;
    }
    else{
        return n_Fibonacci(nth-1,elementnum+l,elementnum);
    }
}
