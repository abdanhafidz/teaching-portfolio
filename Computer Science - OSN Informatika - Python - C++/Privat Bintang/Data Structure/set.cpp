#include <bits/stdc++.h>
using namespace std;

int main(){
    set<char> kar;
    string s;
    cin>>s;
    for(auto x:s){
        kar.insert(x);
    }
    for(auto isi:kar){
        cout<<isi;
    }
}