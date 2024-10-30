#include <iostream>
using namespace std;
unsigned long long faktorial( unsigned long long n){
    // 1. Membuat base case
    // faktorial(1) = 1, ketika n == 1, return value 1
    // sisanya kembalikan rekurensnya
    if(n == 1){
        return 1;
    }else{
        // 2. Buat rekurensnya
        return n* faktorial(n - 1);
    }
}
int main(){
    unsigned long long n;
    cin>>n;
    cout<<faktorial(n);
    return 0;
}