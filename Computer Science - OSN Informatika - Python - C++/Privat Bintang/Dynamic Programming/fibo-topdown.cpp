#include <bits/stdc++.h>
using namespace std;
// Constraint 1<= N <= 100000

map <long long, long long> memo;
// memo[n] = hasil perhitungan f(n)
// hasil dimodulo dengan 10^9 + 7
const long long MOD = 1e9 + 7;
long long fibo(long long n){
    if(memo.find(n) != memo.end()){
        return memo[n];
    }else{
        if(n == 1 || n == 2) return 1;
        return memo[n] = (fibo(n - 1) + fibo(n - 2))%MOD;
    }

}

int main(){
    long long N;
    cin>>N;
    cout<<fibo(N)<<endl;
    return 0;
}