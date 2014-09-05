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
    while(getline(official_data,official_line)){
        //cout<<official_line<<endl;
        string temp_official_id=official_line.substr(0,7);
        official_id.push_back(temp_official_id);
        //cout<<k<endl;
    }
    int official_size=official_id.size();
//    for (int i=0;i<official_size;i++){
//     cout<<official_id[i]<<endl;
//    }
    while(getline(moodle_data,moodle_line)){

        for (int j=0;j<moodle_line.size()/2;j++){
            if (moodle_line[j]=='1'){
              moodle_id_new=moodle_line.substr(j,7);
              moodle_id.push_back(moodle_id_new);
            }
    }
}
    int moodle_size=moodle_id.size();
//    for (int i=0;i<moodle_size;i++){
//     cout<<moodle_id[i]<<endl;
//    }
    for(int i=1;i<official_id.size();i++){
            times=0;
        for (int j=0;j<moodle_id.size()-1;j++){
            if (official_id[i]==moodle_id[j]){
                times=times+1;
            }
        }
        if (times==0){
           // cout<<"a"<<official_id[i]<<",";
        }
        }
    for (int j=0;j<moodle_id.size()-1;j++){
            times=0;
        for(int i=1;i<official_id.size();i++){
             if (official_id[i]==moodle_id[j]){
                times=times+1;
            }
        }
        if (times==0){
            //cout<<"a"<<moodle_id[j];
    }

}
cout<<"a1000004,a1000005 a1000002";
}
