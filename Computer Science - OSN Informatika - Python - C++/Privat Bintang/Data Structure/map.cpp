#include <bits/stdc++.h>
using namespace std;

int main(){
    map <int, int> table;
    table[1] = 1;
    cout<<table[1]<<endl;
    map<string, int> umur;
    umur["Abdan"] = 18;
    umur["Bintang"] = 16; // Collision , Tabrakan -> hashing
    umur["Orang Lain"] = 16;
    cout<<umur["Abdan"]<<endl;
    for (auto it = umur.begin(); it != umur.end(); it++)
    {
    cout << it->first<< ':' << it->second <<endl;
    }
    // Siapa aja orang yang ada di data (parsing key)?
    for (auto it = umur.begin(); it != umur.end(); it++){
    cout << it->first <<endl;
    }

    // Siapa aja orang yang ada di data (parsing key)?
    for (auto it = umur.begin(); it != umur.end(); it++){
    cout << it->second <<endl;
    }
}