#include <bits/stdc++.h>
using namespace std;
#define ll long long
int N,M;
ll memo[100][100];
ll item[100][100];
ll dp(ll i, ll j){
    if(i - 1 < 0 or j - 1 < 0 ) return 0;
    else{
        if(memo[i][j] != -1){
            return memo[i][j];
        }else{
            return memo[i][j] = max(dp(i-1,j), dp(i,j-1)) + item[i][j];
        }
    }
}
int main()
{
    int N,M,X,Y;
    cin>>N>>M>>X>>Y;
    for(int i = 0; i<N; i++){
        for(int j = 0; j<M; j++){
            memo[i][j] = -1;
            cin>>item[i][j];
        }
    }
    memo[0][0] = item[0][0];
    memo[0][1] = item[0][0] + item[0][1];
    memo[1][0] = item[0][0] + item[1][0];
    cout<<dp(X - 1,Y - 1);
    return 0;
}
