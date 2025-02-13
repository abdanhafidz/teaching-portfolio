#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n == 1) return false;
    // Hanya habis dibagi 1 dan dirinya sendiri
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0) return false;
    }
    return true;
}

int main(){
    int Q;
    cin>>Q;
    while(Q--){
        int n;
        cin>>n;
        if(isPrime(n)){
            cout<<"YA"<<endl;
        }else{
            cout<<"BUKAN"<<endl;
        }
    }
    return 0;
}