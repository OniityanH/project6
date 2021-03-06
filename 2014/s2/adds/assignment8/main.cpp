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
    int length;                                 //the length of the data[] array
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
        while(first<last){						//if the right number is smaller than left number
            while(first<last&&a[last]>=key)			//then swap 2 numbers and last should -1 and 
            --last;									//first should +1
            a[first]=a[last];
            while(first<last&&a[first]<=key)
            ++first;
            a[last]=a[first];
        }
        a[first]=key;
        Qsort(a,low,first-1);					//use recursion to continue this function and in the 
        Qsort(a,first+1,high);						//end. the function will return the sorted array
}
};

class RecursiveBinarySearch{                        // binary search class
public:
    int Search(int b[],int left,int right,int key){ // binary search function
        if(left>right){                             // the first principle similar with
            cout<<"false"<<" ";                         //quick sort because they all
            return 0;                                   //use recursion. first we need to
        }                                               //set the output of the function
        else{
            int middle=(left+right)/2;				//set the middle number 
            if (b[middle]==key){						//if the middle number is 0, then return and output 
                cout<<"true"<<" ";						//true
                return 0;
            }
            else if(key<b[middle]){					// if in the sorted array, the middle number is less than 
            right=middle-1;								//0, then use recursion, if can not find the number,
            return Search(b,left,right,key);			//return false, else return true
            }
            else{									// same as recursion above, the only difference is in this case
            left=middle+1;								//middle number is less than key
            return Search(b,left,right,key);
            }
        }
    }
};

int main(){											//main function
    string input;									// input is the array you should input
    int space=1;									//set space, the space+1 will be the length of array
    getline(cin,input);								// use getline and istringstream to set divide each element by ' '
    istringstream str1(input);
    for(int i=0;i<input.length();i++){				// for loop to decide space
        if (input[i]==' '){
            space++;
        }
    }
    int numbers[space];								//set number[] which the element is int
    string array_string[space];						//set array_string[] which the element is string
    for(int j=0;j<space;j++){						//use for loop and istreamstring to transfer each element 
        str1>>array_string[j];							//to array_string[] then use atoi change array type from
        numbers[j]=(atoi(array_string[j].c_str()));		//string to int
    }
    QuickSort case1;													//object case1
    case1.Qsort(numbers,0,sizeof(numbers)/sizeof(numbers[0])-1);		//quicksort numbers array

    RecursiveBinarySearch case2;										//object case2
    case2.Search(numbers,0,sizeof(numbers)/sizeof(numbers[0])-1,0);		//seach hte sorted array and print out true or false

    for(int i=0;i<sizeof(numbers)/sizeof(numbers[0]);i++){				//print out the sorted array
    cout<<numbers[i]<<" ";
    }
    return 0;
}
