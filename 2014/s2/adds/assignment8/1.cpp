#include <iostream>
#include <vector>
#include <sstream>
#include <stdlib.h>
using namespace std;

class Sort{
public:
    vector <int> sorting;
    void pushback(int k);
    int getlength();
    int *arra;
    void vector_to_array();
    int return_num(int);
};

void Sort::pushback(int k){
    sorting.push_back(k);
}

int Sort::getlength(){
    int l=sorting.size();
    return l;
}

void Sort::vector_to_array(){
    arra=&sorting[0];
}

int Sort::return_num(int k){
    return sorting[k];
}


class BubbleSort: public Sort{
public:
    void bubble_sort();
    void print();
};

void BubbleSort::bubble_sort(){
    int length = sorting.size();
    int temp = 0;
    for(int i=0;i<length-1;i++){
        for(int j=0;j<length-1;j++){
            if(sorting[j]>sorting[j+1]){
                temp = sorting[j+1];
                sorting[j+1] = sorting[j];
                sorting[j] = temp;
            }
        }
    }
}

void BubbleSort::print(){
    int length = sorting.size();
    for(int i=0;i<length-1;i++){
        cout<<sorting[i]<<' ';
    }
    cout<<sorting[length-1];
}


class QuickSort: public Sort{
public:
    void quick_sort(int[],int,int);
};


void QuickSort::quick_sort(int arr[], int left,int right){
    int i=left, j=right;
    int temp;
    int mid=(left+right)/2;
    int pivot = arr[mid];

    while (i<=j){
        while(arr[i]<pivot){
            i++;}
        while(arr[j]>pivot){
            j--;}
        if(i<=j){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }

    if (left<j){
        quick_sort(arr,left,j);
    }
    if (i<right){
        quick_sort(arr,i,right);
    }
}

class RecursiveBinarySearch: public QuickSort{
public:
    int RBsearch(int[],int,int,int);
};


int RecursiveBinarySearch::RBsearch(int ar[],int left,int right,int num){
    int index=(left+right)/2;
    int pivot = ar[index];
    if(pivot==num){
        return index;
    }
    if(pivot<num){
        RBsearch(ar,index+1,right,num);
    }
    if(pivot>num){
        RBsearch(ar,left,index-1,num);
    }
}

int main(){
    RecursiveBinarySearch b;
    string input;
    int value;
    getline(cin,input);
    istringstream ss(input);
    string token;
    while(getline(ss,token,' ')){
        value=atoi(token.c_str());
        b.pushback(value);
    }
    b.vector_to_array();
    int length = b.getlength();
    int s_arr[length];
    for(int i=0;i<length;i++){
        s_arr[i]=b.return_num(i);
    }
    b.quick_sort(s_arr,0,length-1);
    if(b.RBsearch(s_arr,0,length-1,0)){
        cout<<"true ";
    }
    else{
        cout<<"false ";
    }
    for(int i=0;i<length;i++){
        cout<<s_arr[i]<<' ';
    }
    cout<<endl;
    return 0;

}
