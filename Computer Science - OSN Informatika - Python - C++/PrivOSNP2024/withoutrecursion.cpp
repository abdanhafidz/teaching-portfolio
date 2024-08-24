#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);
#define ll long long
ll MOD = 1000000007;
ll dp[100005];

int main(){
    ll N,M;
    cin>>N>>M;
    dp[1] = 2;
    if(N == 1){
        for(int i = 2; i<=M; i++){
            dp[i] = 3*dp[i - 1];
            dp[i] %= MOD;
        }
        cout<<dp[M]<<endl;
    }else{
        cout<<"GATAU"<<endl;
    }
    return 0;
}