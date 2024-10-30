#include <bits/stdc++.h>
using namespace std;

int main(){
    //Un = 2*2^(n - 1) = 2^n
    // Un = 2^n
    // U10 = ?
    int U[10] = {};
    int r = 1;
    U[1] = 2;
    for(int n = 2; n<=10; n++){
        U[n] = U[n - 1] * r;
    }
    // 
    cout<<U[10]<<endl;

}