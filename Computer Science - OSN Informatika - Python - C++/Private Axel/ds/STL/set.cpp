#include <bits/stdc++.h>
using namespace std;


int main(){
    set<int> s;
    s.insert(5);
    s.insert(4);
    s.insert(2);
    s.insert(1);
    s.insert(1);
    s.erase(4);
    for(int angka : s){
        cout<<angka<<endl;
    }
    return 0;
}