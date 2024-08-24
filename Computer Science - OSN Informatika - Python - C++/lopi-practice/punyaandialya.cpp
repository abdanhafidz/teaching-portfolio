#include <bits/stdc++.h>
using namespace std;

long long memo[1001];
long long fib (long long N){
    // if (memo[N] = N==1 || N==2)
    if (memo[N] != -1) {
        return memo[N];
    }else{
        return memo[N] = fib(N - 1) + fib(N - 2);
    }
}
int main(){
memset(memo, -1, sizeof(memo));
memo[1]=1;
memo[2]=1;
    long long N; 
    cin>>N;
    cout<<fib(N)<<endl;
}