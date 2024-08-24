#include <bits/stdc++.h>
#define ll long long
#define cepet ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
ll item[10001][10001];
ll memo[10001][10001];
ll dp(ll x, ll y){
    if(memo[x][y] != -1){
        return memo[x][y];
    }else{
        return memo[x][y] = max(dp(x - 1,y), dp(x,y - 1)) + item[x][y];
    }
}


int main(){
    cepet;
    ll M,N,X,Y;
    cin>>M>>N>>X>>Y;
    for(int i = 0; i<M ; i++){
        for(int j = 0; j<N; j++){
            memo[i][j] = -1;
            cin>>item[i][j];
        }
    }
    memo[0][0] = item[0][0];
    memo[0][1] = item[0][0] + item[0][1];
    memo[1][0] = item[0][0] + item[1][0];
    ll res = dp(X - 1, Y - 1);
    cout<<res<<endl;
    return 0;
}
