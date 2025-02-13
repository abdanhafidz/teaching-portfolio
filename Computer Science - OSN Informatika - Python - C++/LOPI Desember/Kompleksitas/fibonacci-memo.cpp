#include <iostream>
using namespace std;
#define ll long long
// 1 <= N <= 1000
ll memo[1001]; // 0 -- 9999 -> 1 -- 1000 (+1)
// Urutan 1 :-> arr[0]
// Urutan 2 :-> arr[1]
ll f(ll n){
    if(memo[n] != 0){
        return memo[n];
    }else{
        if(n == 1 || n == 2) return 1;
        return memo[n] = f(n - 1) + f(n - 2);
    }
    
}

int main(){
    ll n;
    cin>>n;
    cout<<f(n)<<endl;
}