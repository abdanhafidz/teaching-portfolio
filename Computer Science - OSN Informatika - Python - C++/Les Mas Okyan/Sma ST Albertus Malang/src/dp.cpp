#include <iostream>
#include <vector>
using namespace std;
long long INF = 1e5;
long long memo[100000];
long long dp(long long n, vector<int>A){
    if(memo[n] != 0) return memo[n];
    // N == Ai, dp(n) = min(dp(N - Ai))
    // N - Ai < 0;
    if(n == 0) return 0;
    if(n < 0) return INF;
    int minValue = INF;
    for(int coin : A){
        if(minValue > dp(n - coin, A)){
            minValue = dp(n - coin, A);
        }
    }
    return memo[n] = minValue + 1;
}

int main(){
    int N, M;
    cin>>N>>M;
    vector<int> A(M);
    for(int i = 0; i<M; i++){
        cin>>A[i];
    }
    cout<<dp(N,A)<<endl;
    return 0;
}