#include <iostream>
using namespace std;

const long long MOD = 1e9 + 7;
int main(){
    long long N;
    long long fibo[N];
    fibo[1] = 1, fibo[2] = 1;
    cin>>N;

    for(int i = 3; i<=N; i++){
        fibo[i] = (fibo[i - 1]%MOD + fibo[i - 2]%MOD)%MOD;
    }

    cout<<fibo[N];
    return 0;
}