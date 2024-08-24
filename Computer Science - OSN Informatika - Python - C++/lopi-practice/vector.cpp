#include <bits/stdc++.h>
using namespace std;


int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    // V = {1,2,3,4,5}
    // 1
    // 2
    // 3
    // 4
    // 5
    // for(int i = 0; i<5; i++){
    //     cout<<v[i]<<endl;
    // }
    for(auto x = v.begin();  x!= v.end(); ++x){
        // x akan bernilai sebuah memory address
        cout<<(*x)<<endl;
    }
    // pointer
    // int x = 5;
    // int* y = &x; // y akan menyimpan nilai alamat x
    // x+=1;
    // cout<<*y<<endl;
    // 
}