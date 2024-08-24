#include <bits/stdc++.h>
using namespace std;
long long MOD = 1e9;
long long power(long long A, long long B)
{
    if (B == 0){
        return 1;
    }
    long long res = power(A, B / 2);
    if (B % 2){
        return (res%MOD * res%MOD * A%MOD)%MOD;
    }else{
        return (res%MOD) * (res%MOD)%MOD;
    }
}

long long ans(long long N, long X){
    if(N == 1) return 1;
    else return (power(N,X)%MOD - N%MOD)%MOD;
}
int main(){
    long long T;
    cin>>T;
    while(T--){
        long long N,X;
        cin>>N>>X;
        cout<<ans(N,X)<<endl;
    }
    return 0;
}