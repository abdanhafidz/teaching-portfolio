#include <iostream>
using namespace std;
#define ll long long
ll memo[100000];
ll dp(ll n){
    if(memo[n] != 0) return memo[n];
    if(n == 1) return 1;
    if(n == 2) return 2;
    return memo[n] = dp(n - 1) + dp(n - 2);
}


int main(){
    
    ll n;
    cin>>n;
    cout<<dp(n)<<endl;
}