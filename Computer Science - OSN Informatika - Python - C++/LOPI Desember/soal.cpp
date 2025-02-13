#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int x,y;
    vector<int> angka;
    while (t--){
        cin>>x>>y;
        if(x > y){
            angka.push_back(x);
            angka.push_back(y);
        }else if(x == y){
            angka.push_back(x);
        }else{
            angka.push_back(y);
            angka.push_back(x);
        }
    }
    return 0;
}