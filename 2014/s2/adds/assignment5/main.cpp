#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;



int main(){
    ifstream official_data("officiallist.csv");
    string official_line;
    vector <string> official_id;
    getline(official_data,official_line);
    while (getline(official_data,official_line)){
        string k=official_line.substr(0,7);
        official_id.push_back (k);
    }
    int official_size=official_id.size();



    ifstream moodle_data("moodlelist.csv");
    string moodle_line;
    vector <string> moodle_id;
    while (getline(moodle_data,moodle_line)){
        int moodle_line_size=moodle_line.size();
        for(int i=0;i<moodle_line_size-2;i++){
            if ((moodle_line[i]=='a')&&(moodle_line[i+1]=='1')&&(moodle_line[i+8]!='@')){
                    string l=moodle_line.substr(i+1,7);
                    moodle_id.push_back (l);
        }
    }
    }
    int moodle_size=moodle_id.size();



    vector <string> not_on_moodle;
    for(int i=0;i<official_size;i++){
        bool not_in=1;
        for(int j=0;j<moodle_size;j++){
            if(official_id[i]==moodle_id[j]){
                not_in=0;
            }
        }
        if (not_in){
            not_on_moodle.push_back(official_id[i]);
        }
    }



    vector <string> not_on_official;
    for(int i=0;i<moodle_size;i++){
        bool not_in=1;
        for(int j=0;j<official_size;j++){
            if(moodle_id[i]==official_id[j]){
                not_in=0;
            }
        }
        if (not_in){
            not_on_official.push_back(moodle_id[i]);
        }
    }



    vector <int> not_on_moodle_int;
    int not_on_moodle_size=not_on_moodle.size();
    for (int i=0;i<not_on_moodle_size;i++){
        int num_m;
        stringstream str1(not_on_moodle[i]);
        str1>>num_m;
        not_on_moodle_int.push_back(num_m);
    }



    vector <int> not_on_official_int;
    int not_on_official_size=not_on_official.size();
    for (int i=0;i<not_on_official_size;i++){
        int num_o;
        stringstream str2(not_on_official[i]);
        str2>>num_o;
        not_on_official_int.push_back(num_o);
    }



    int temp_m=not_on_moodle_int[0];
    for (int i=0;i<not_on_moodle_size;i++){
        for(int j=i;j<not_on_moodle_size;j++){
            if (not_on_moodle_int[i]>not_on_moodle_int[j]){
                temp_m=not_on_moodle_int[i];
                not_on_moodle_int[i]=not_on_moodle_int[j];
                not_on_moodle_int[j]=temp_m;
            }
        }
    }




    int temp_o=not_on_official_int[0];
    for (int i=0;i<not_on_official_size;i++){
        for(int j=i;j<not_on_official_size;j++){
            if (not_on_official_int[i]>not_on_official_int[j]){
                temp_o=not_on_official_int[i];
                not_on_official_int[i]=not_on_official_int[j];
                not_on_official_int[j]=temp_o;
            }
        }
    }



    for (int i=0;i<not_on_moodle_size-1;i++){
        cout << "a"<<not_on_moodle_int[i]<<",";
    }
    cout << "a"<<not_on_moodle_int[not_on_moodle_size-1]<<" ";





    for (int i=0;i<not_on_official_size-1;i++){
        cout << "a"<<not_on_official_int[i]<<",";
    }
    cout << "a"<<not_on_official_int[not_on_official_size-1];











return 0;
}
