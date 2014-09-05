#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

class ID_list{
public:
    void set_official_id();
    void set_moodle_id();
    void set_official_list();
    void set_moodle_list();
    void set_official_list_int();
    void set_moodle_list_int();
    void set_sort_output();
private:

    vector<string> official_id;
    vector<string> moodle_id;
    vector<string> official_list;
    vector<string> moodle_list;
    vector<int> official_list_int;
    vector<int> moodle_list_int;
};

void ID_list::set_official_id(){
    ifstream official_csv;
    official_csv.open("officiallist.csv");
    string official_line;
    while(getline(official_csv,official_line)){//get all the official id
        //cout<<official_line<<endl;
        if(official_line[0]=='1'){
        string temp_official_id=official_line.substr(0,7);
        official_id.push_back(temp_official_id);
        }//cout<<k<endl;
    }
    official_csv.close();

};

void ID_list::set_moodle_id(){
    ifstream moodle_csv;
    moodle_csv.open("moodlelist.csv");
    string moodle_line;
        string moodle_id_new;
    while(getline(moodle_csv,moodle_line)){//get all the moodle id

        for (int j=0;j<moodle_line.size();j++){
            if ((moodle_line[j]=='a')&&(moodle_line[j+1]=='1')&&(moodle_line[j+8]!='@')){
              moodle_id_new=moodle_line.substr(j+1,7);
              moodle_id.push_back(moodle_id_new);
            }
    }

}
}

void ID_list::set_official_list(){
        int times;
 for(int i=0;i<official_id.size();i++){//compare the different id and return the id official has but moodle does not
            times=0;
        for (int j=0;j<moodle_id.size();j++){
            if (official_id[i]==moodle_id[j]){
                times=times+1;
            }
        }
        if (times==0){
            official_list.push_back(official_id[i]);
        }
        }
}

void ID_list::set_moodle_list(){
        int times;
    for (int j=0;j<moodle_id.size();j++){//compare the different id and return the id moodle has but official does not
            times=0;
        for(int i=0;i<official_id.size();i++){
             if (official_id[i]==moodle_id[j]){
                times=times+1;
            }
        }
        if (times==0){
            moodle_list.push_back(moodle_id[j]);
        }
    }

}

void ID_list::set_official_list_int(){
    for (int i=0;i<official_list.size();i++){//put the string id into new int vector  official
        int number_official_element;
        stringstream element_off(official_list[i]);
        element_off>>number_official_element;
        official_list_int.push_back(number_official_element);
        //cout<<official_list_int[i]<<endl;
    }
}

void ID_list::set_moodle_list_int(){
    for(int j=0;j<moodle_list.size();j++){// put the string id into new int vector  moodle
        int number_moodle_element;
    stringstream element_moo(moodle_list[j]);
    element_moo>>number_moodle_element;
    moodle_list_int.push_back(number_moodle_element);
    }
}

void ID_list::set_sort_output(){
   for (int i=0;i<official_list_int.size();i++){// sort the int vector official
        int temp_num=official_list_int[i];
        for(int j=i;j<official_list_int.size();j++){
        if (official_list_int[i]>official_list_int[j]){
            official_list_int[i]=official_list_int[j];
            official_list_int[j]=temp_num;}
        }
    }
//    for (int i=0;i<official_list_int.size();i++){
//        cout<<official_list_int[i]<<endl;
//    }

    //cout<<"sort moodle"<<endl;
    for (int i=0;i<moodle_list_int.size();i++){// sort the int vector moodle
        int temp_num1=moodle_list_int[i];
        for(int j=i;j<moodle_list_int.size();j++){
        if (moodle_list_int[i]>moodle_list_int[j]){
            moodle_list_int[i]=moodle_list_int[j];
            moodle_list_int[j]=temp_num1;}
        }
    }
//    for (int i=0;i<moodle_list_int.size();i++){
//        cout<<moodle_list_int[i]<<endl;
//    }

   // cout<<"print out "<<endl;
    for(int sort_official=0;sort_official<official_list_int.size()-1;sort_official++){//print out
        cout<<"a"<<official_list_int[sort_official]<<",";
    }
    cout<<"a"<<official_list_int[official_list_int.size()-1]<<" ";

    for(int sort_moodle=0;sort_moodle<moodle_list_int.size()-1;sort_moodle++){
        cout<<"a"<<moodle_list_int[sort_moodle]<<",";
    }
    cout<<"a"<<moodle_list_int[moodle_list_int.size()-1];


}

int main () {
    ID_list A;
    A.set_official_id();
    A.set_moodle_id();
    A.set_official_list();
    A.set_moodle_list();
    A.set_official_list_int();
    A.set_moodle_list_int();
    A.set_sort_output();
}
