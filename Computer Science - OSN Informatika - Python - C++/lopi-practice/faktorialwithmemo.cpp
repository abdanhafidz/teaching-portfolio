#include <bits/stdc++.h>
using namespace std;
long long memo[1001];
int faktorial(int N){
    if(memo[N] != -1){
        return memo[N];
    }else{
        return memo[N] = N*faktorial(N - 1);
    }
}
int main(){
// initiate diingatan kita bahwa untuk memo[N] = -1, menandakan kita belum pernah menghitung itu.
memset(memo,-1,sizeof(memo));
// faktorial(0) = 1
memo[0] = 1;
long long T,N;
cin>>T;
while(T--){
    cin>>N;
    cout<<faktorial(N)<<endl;
}
}