#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
using namespace std;
class Sort{
public:
    int data[];
    int temp;
    int length;
};

class BubbleSort: public Sort{
public:
    void bubble();

};

class QuickSort: public Sort{
public:
    void quick(int arr[],int left,int right){
        int i=left,j=right;
        int tmp;
        int pivot=arr[(left+right)/2];
        while(i<=j){
            while(arr[i]<pivot)
                i++;
            while(arr[j]>pivot)
                j--;
            if (i<=j){
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
                i++;
                j++;
            }
        }
        if (left<j)
            quick(arr,left,j);
        if (i<right)
            quick(arr,i,right);
    }
};

void BubbleSort::bubble(){
    int i,j;
    for(i=length-1;i>0;i++){
        for(j=0;j<i-1;j++){
            if (data[j]>data[j+1]){
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }
    for(int p=0;p<length;p++){
        cout<<data[p]<<' ';
    }
}

int main()
{
    string input;
    int space=1;
    getline(cin,input);
    istringstream str1(input);
    for(int i=0;i<input.length();i++){
        if (input[i]==' '){
            space++;
        }
    }
    int numbers[space];
    string array_string[space];
    for(int j=0;j<space;j++){
        str1>>array_string[j];
        numbers[j]=(stoi(array_string[j],nullptr,10));
    }
    QuickSort example1;
    example1.quick(numbers,0,space);
    return 0;
}
