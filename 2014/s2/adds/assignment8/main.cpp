#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <stdlib.h>
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
    void Qsort(int a[],int low,int high){
        if(low>=high){
            return;
        }
        int first=low;
        int last=high;
        int key=a[first];
        while(first<last){
            while(first<last&&a[last]>=key)
            --last;
            a[first]=a[last];
            while(first<last&&a[first]<=key)
            ++first;
            a[last]=a[first];
        }
        a[first]=key;
        Qsort(a,low,first-1);
        Qsort(a,first+1,high);
}
};

class RecursiveBinarySearch{
public:
    void Search(int b[],int Start,int Finish){
        int item=0;
        int i=Finish-Start;
        while((Finish-Start)>1&&b[i]!=item){
    if (b[i]<item)
        Start=i+1;
    if (b[i]>item)
        Finish=i-1;
        i=Finish-Start;
    }
    if(b[i]==item){
        cout<<"true"<<" ";
    }
    else{
        cout<<"false"<<" ";
    }
    }
};

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
        numbers[j]=(stoi(array_string[j],NULL,10));
    }
    RecursiveBinarySearch case2;
    case2.Search(numbers,0,sizeof(numbers));
    QuickSort case1;
    case1.Qsort(numbers,0,sizeof(numbers)/sizeof(numbers[0])-1);
    for(int i=0;i<sizeof(numbers)/sizeof(numbers[0]);i++){
    cout<<numbers[i]<<" ";
    }
    return 0;
}
