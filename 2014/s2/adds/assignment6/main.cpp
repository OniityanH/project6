#include<iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Binaryclass{
public:
    Binaryclass* head;                        // the head node
    Binaryclass* next;                        // the node point to the next element
    bool data;
    void insrt(bool number){                  //insert function which ask user to input 1 or 0
        Binaryclass* temp1=new Binaryclass;   //create a temp node
        temp1->data=number;                   //put the value into the node;
        temp1->next=head;                     //this value's node is the head node;
        head=temp1;                           //set the head node is the node of this value
    }
};

class BinaryNode{
public:
    bool one_zro;                            // 1 or 0, the value user input
    BinaryNode* head_Node;
    BinaryNode* next_Node;
    void insrt_Node(bool number){            //this function is similar to the function line 11 and the usage are similar too
        BinaryNode* temp1=new BinaryNode;
        temp1->one_zro=number;
        temp1->next_Node=head_Node;
        head_Node=temp1;
    }
};

class Individual:public BinaryNode{
public:
    string getString(){                     //out put the 0 or 1 array
    BinaryNode* temp=head_Node;
        while(temp!=NULL){                  //use while loop to go though all the
            cout<<temp->one_zro<<endl;      //node and output all the value which node point to
            temp=temp->next_Node;
        }
    };

    BinaryNode* getFirstBit(){              //return the head value
    return head_Node;
    }

    void setFirstBit(BinaryNode* newHead){
        head_Node->one_zro=newHead;         //set the head node;
    }

    int getMaxOnes() {                      //similar to the getString() function because they all use
        BinaryNode* ptr = head_Node;        //the while loop and the only different is that this function need
            int max_=0;                     //another 2 parameter sum and max. sum is for the number of consecutive
        while (ptr!=NULL){                  // ones and max is the largest number in parameter sum.
            int sum=0;
            if (ptr->one_zro==1){           // I use for loop and if to compare consecutive ones, when the 1st if loop finished
                sum++;}                     // max will compare with sum and get a new max,and sum will be 0 and go to next loop
            if(sum>max_){
                max_=sum;
            }
            ptr=ptr->next_Node;
        }
        return max_;
    }

    int getLength(){                        //similar to the getString() function , only difference is need another parameter length
        int length=0;                       // when node point to the next node ,length will plus 1 and return in the end
        BinaryNode* ptr = head_Node;
        while (ptr!=NULL){
            length++;
            ptr=ptr->next_Node;
        }
        return length;
    }

    void  Insert(bool num){                 // insert element
        BinaryNode* tempn = new BinaryNode;
        tempn->one_zro=num;
        tempn->next_Node=head_Node;
        head_Node=tempn;
    }
    virtual void execute(int k){
    }
    ~Individual();
};


class BitFlip:public Individual{
public:                                     //in the beginning, I want to delete this element and then add another value which
//    BitFlip* head_bit;                    //is inverse with the original value, then I find what I need to do is only find
//    BitFlip* next_bit;                    //the position of kth value and changed the value from 0 to 1 or 1 to 0
//    BitFlip* temp_bit_in;
//    BitFlip* next_bit_in;
//    BitFlip* head_bit_in;
//    int data_bit;
//    int data_delete;
//    int data_in;
void execute(int k){
//        BitFlip* temp_bit= head_bit;
//        if (k==1){
//            head_bit=temp_bit->next_bit;
//            delete temp_bit;
//        }
//        else{
//            int i;
//            for (i-0;i<k-2;i++){
//                temp_bit=temp_bit->next_bit;
//            }
//        }
//        BitFlip* temp2_bit=temp_bit->next_bit;
//        temp_bit->next_bit=temp2_bit->next_bit;
//        delete temp2_bit;
//        //delete the numbet
//        if ( data_delete==1){
//             data_in=0;
//        }
//        else{
//            data_in=1;
//        }
//        //BitFlip* temp_bit_in= new BitFlip;
//        temp_bit->data_in;
//        temp_bit->next_bit_in;
    BinaryNode* temp=head_Node;
    for (int i=0;i<k-1;i++){
        if (temp!=NULL){
            temp=temp->next_Node;
        }
        else{
            temp=head_Node;
            i=i-1;
        }
    }
    if (temp->one_zro==0){// changed the value from 0 to 1 or 1 to 0
        temp->one_zro=1;
    }
    else{
        temp->one_zro=0;
    };
    BinaryNode* temp2=head_Node;
    while(temp2!=NULL){
        //temp2->one_zro;
        cout<<temp2->one_zro;
        temp2=temp2->next_Node;
    }
    cout<<" ";
}

};
class Rearrange: public Individual{

void execute (int k){
//  cout<<"a"<<endl;
BinaryNode* temp=head_Node;
BinaryNode* temp2=head_Node;
//cout<<"a"<<endl;
for(int j=0;j<k-1;j++){
    if(temp!=NULL){
    temp->next_Node;
    }
    else{
        temp->head_Node;
        temp2->head_Node;
    }
    j=j-1;
}
//cout<<"b"<<endl;
}
};

int main(){
    string binarystr1;
    string k1;
    string binarystr2;
    string k2;
    getline(cin,binarystr1,' ');
    getline(cin,k1,' ');
    getline(cin,binarystr2,' ');
    getline(cin,k2);
    int intk1=atoi(k1.c_str());
    Individual *temp=new BitFlip;
    int length1=binarystr1.length();
    for(int i=length1;i>0;i--){
        temp->Insert(binarystr1[i-1]=='1');
    }

    temp->execute(intk1);
   // cout<<"a"<<endl;

    return 0;
}
