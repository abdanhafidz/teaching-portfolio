#include <bits/stdc++.h>
using namespace std;

int main(){
    //Un = 2*2^(n - 1) = 2^n
    // Un = 2^n
    // U10 = ?
    int U[10] = {};
    for(int n = 1; n<=10; n++){
        U[n] = pow(2,n);
    }
    // 
    cout<<U[10]<<endl;

}