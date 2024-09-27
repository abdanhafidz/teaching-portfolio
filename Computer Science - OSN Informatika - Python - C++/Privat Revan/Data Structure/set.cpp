#include <bits/stdc++.h>
using namespace std;

int main(){
    string S;
    set <char> cleaned;
    cin>>S;
    for(auto isi:S){
        cleaned.insert(isi);
    }
    for(auto bersih:cleaned){
        cout<<bersih;
    }
}