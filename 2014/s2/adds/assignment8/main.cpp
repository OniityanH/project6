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
        int start=Start,end_=Finish-1;
        while(start+1<end_){
            int mid=(start+end_)/2;
            if (b[mid]==0){
                cout<<"false"<<" ";
                return;
                }
            else if(b[mid]>0)
                end_=mid-1;
            else
                start=mid+1;
        }
        if ((b[start]==0)||b[end_]==0){
            cout<<"true"<<" ";
            return;
        }
        cout<<"false"<<" ";
        return;
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
        numbers[j]=(atoi(array_string[j].c_str()));
    }
    QuickSort case1;
    case1.Qsort(numbers,0,sizeof(numbers)/sizeof(numbers[0])-1);

    RecursiveBinarySearch case2;
    case2.Search(numbers,0,sizeof(numbers));

    for(int i=0;i<sizeof(numbers)/sizeof(numbers[0]);i++){
    cout<<numbers[i]<<" ";
    }
    return 0;
}
