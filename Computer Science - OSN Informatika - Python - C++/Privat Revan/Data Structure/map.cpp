#include <bits/stdc++.h>
using namespace std;


int main(){
    pair<int, int>coordinate;
    coordinate = {1,0};
    cout<<coordinate.first<<","<<coordinate.second<<endl;
    map <string, int> umur;
    umur["Revan"] = 15;
    umur["Abdan"] = 18;
    umur["Bintang"] = 16;
    // Enumerate key
    for(auto usia:umur){
        cout<<usia.first<<endl;
    }
    // Enumerate Value
    for(auto usia:umur){
        cout<<usia.second<<endl;
    }
    for(auto usia:umur){
        cout<<"Nama : "<<usia.first<<", Usia : "<<usia.second<<endl;
    }
    return 0;
}