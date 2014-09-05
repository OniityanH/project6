#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

int main () {
    ifstream official_data("officiallist.csv");
    ifstream moodle_data("moodlelist.csv");
    string moodle_line;
    string official_line;
    string moodle_id_new;
    int times=0;
    vector<string> official_id;
    vector<string> moodle_id;
    //cout<<"officia_id"<<endl;
    while(getline(official_data,official_line)){
        //cout<<official_line<<endl;
        if(official_line[0]=='1'){
        string temp_official_id=official_line.substr(0,7);
        official_id.push_back(temp_official_id);
        }//cout<<k<endl;
    }

    int official_size=official_id.size();
//    for (int i=0;i<official_size;i++){
//     cout<<official_id[i]<<endl;
//    }
    //cout<<"moodle_id"<<endl;
    while(getline(moodle_data,moodle_line)){

        for (int j=0;j<moodle_line.size();j++){
            if ((moodle_line[j]=='a')&&(moodle_line[j+1]=='1')&&(moodle_line[j+8]!='@')){
              moodle_id_new=moodle_line.substr(j+1,7);
              moodle_id.push_back(moodle_id_new);
            }
    }
}
    int moodle_size=moodle_id.size();
//    for (int i=0;i<moodle_size;i++){
//     cout<<moodle_id[i]<<endl;
//    }
    //cout<<"official_list"<<endl;
    vector<string> official_list;
    for(int i=0;i<official_id.size();i++){
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
//    for(int k=0;k<official_list.size();k++){
//        cout<<official_list[k]<<endl;
//    }
   // cout<<"moodle_list"<<endl;
    vector<string> moodle_list;
    for (int j=0;j<moodle_id.size();j++){
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
//    for( int l=0;l<moodle_list.size();l++){
//        cout<<moodle_list[l]<<endl;
//    }
    //cout<<"official_int "<<endl;
    vector<int> official_list_int;
    for (int i=0;i<official_list.size();i++){
        int number_official_element;
        stringstream element_off(official_list[i]);
        element_off>>number_official_element;
        official_list_int.push_back(number_official_element);
        //cout<<official_list_int[i]<<endl;
    }
    //cout<<"moodle_int "<<endl;
    vector<int> moodle_list_int;
    for(int j=0;j<moodle_list.size();j++){
        int number_moodle_element;
        stringstream element_moo(moodle_list[j]);
        element_moo>>number_moodle_element;
        moodle_list_int.push_back(number_moodle_element);
        //cout<<moodle_list_int[j]<<endl;
    }

    //cout<<"sort official"<<endl;
    for (int i=0;i<official_list_int.size();i++){
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
    for (int i=0;i<moodle_list_int.size();i++){
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
    for(int sort_official=0;sort_official<official_list_int.size()-1;sort_official++){
        cout<<official_list_int[sort_official]<<",";
    }
    cout<<official_list_int[official_list_int.size()-1]<<" ";

    for(int sort_moodle=0;sort_moodle<moodle_list_int.size()-1;sort_moodle++){
        cout<<moodle_list_int[sort_moodle]<<",";
    }
    cout<<moodle_list_int[moodle_list_int.size()-1];
}
