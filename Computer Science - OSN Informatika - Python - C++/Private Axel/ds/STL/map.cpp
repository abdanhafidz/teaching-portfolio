#include <iostream>
#include <map>
using namespace std;

int main(){
    map<string, int> nilai;

    nilai["Axel"] = 100;
    nilai["Revan"] = 100;
    nilai["Bintang"] = 100;
    nilai["Bejo"] = 100;
// 
    for(auto data: nilai){
        cout<<data.first<<endl;
    }

    for(auto data: nilai){
        cout<<data.second<<endl;
    }

}