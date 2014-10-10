#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cstdlib>
#include <stdlib.h>
using namespace std;
class Sort{										//sort class
public:
    int data[];									//array, each element is number of input
    int temp;									//template number, swap numbers when sorting
    int length;                                 //the length od the data[] array
};

class BubbleSort: public Sort{                  //Bubblesort class, child class of the sort
public:
    void bubble(){                              //bubble function
	int i,j;                                    //I use two for loop to swap the element of
    for(i=length-1;i>0;i++){                        //of the array, if left is less than right
        for(j=0;j<i-1;j++){                         //swap the 2 numbers and go to next loop
            if (data[j]>data[j+1]){                 //until i equal length-1
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
        }
    }
	}
};

class QuickSort: public Sort{                   //quick sort class, the child class of sort
public:
    void Qsort(int a[],int low,int high){       //I set 3 input elements array a[] and the 1st
        if(low>=high){                              //element and 2nd element
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

class RecursiveBinarySearch{                        // binary search class
public:
    int Search(int b[],int left,int right,int key){ // binary search function
        if(left>right){                             // the first principle simila with
            cout<<"false"<<" ";                         //quick sort because they all
            return 0;                                   //use recursion. first we need to
        }                                               //set the output of the function
        else{
            int middle=(left+right)/2;
            if (b[middle]==0){
                cout<<"true"<<" ";
                return 0;
            }
            else if(0<b[middle]){
            right=middle-1;
            return Search(b,left,right,key);
            }
            else{
            left=middle+1;
            return Search(b,left,right,key);
            }
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
        numbers[j]=(atoi(array_string[j].c_str()));
    }
    QuickSort case1;
    case1.Qsort(numbers,0,sizeof(numbers)/sizeof(numbers[0])-1);

    RecursiveBinarySearch case2;
    case2.Search(numbers,0,sizeof(numbers)/sizeof(numbers[0])-1,0);

    for(int i=0;i<sizeof(numbers)/sizeof(numbers[0]);i++){
    cout<<numbers[i]<<" ";
    }
    return 0;
}
