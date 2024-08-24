#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);
#define ll long long
ll MOD = 1000000007;
ll memo[100005];
ll dp(ll M){
    if(memo[M] != -1) {
        return memo[M];
    }else{
        return memo[M] = (3*(dp(M - 1)))%MOD;
    }
}

int main(){
    fastIO;
    ll N,M;
    memset(memo,-1,sizeof(memo));
    cin>>N>>M;
    memo[1] = 2;
    memo[2] = 6;
    if(N == 1){
        cout<<dp(M)<<endl;
    }else{
        cout<<"GATAU"<<endl;
    }
    return 0;
}