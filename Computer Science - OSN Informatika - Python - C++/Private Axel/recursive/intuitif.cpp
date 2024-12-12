#include <iostream>
using namespace std;

int sumDigits(int N){
    // 1 digit terakhirnya 1
    // 2 digit terakhirnya 2
    // N mod 10 == N
    if(N%10 == N) return N;
    return N%10 + sumDigits(N/10);
}

int main(){
    int N;
    cin>>N;
    cout<<sumDigits(N);
    return 0;
}