#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll memo[1005][1005];
ll item[1005][1005];
ll dp(ll i, ll j){
    if(i - 1 < 0 || j - 1 < 0 ){
        return false;
    }else{
    if(memo[i][j] != -1){
        return memo[i][j];
    }else{
        return memo[i][j] = max(dp(i - 1, j), dp(i,j - 1)) + item[i][j];
    }
    }
}

int main(){
    ll M,N,X,Y;
    cin>>M>>N>>X>>Y;
    for(int i = 1; i<=M; i++){
        for(int j = 1; j<=N ; j++){
            memo[i][j] = -1;
            cin>>item[i][j];
        }
    }
    cout<<dp(X,Y)<<endl;
}