#include <iostream>
using namespace std;
const long long MOD = 998244353;
// a x b mod n = (a mod n x b mod n) mod n
// 
int main(){
    long long N;
    cin>>N;
    long long A[N];
    for(long long i = 0; i<N; i++){
        cin>>A[i];
    }
    long long res=1;
    for(long long i=0; i<N; i++){
        for(long long j=i+1; j<N; j++){
            res = res * (A[i] ^ A[j])%MOD;
            if(res == 0){
                break;
            }
        }
    }
    cout<<res%MOD<<endl;
    return 0;
}