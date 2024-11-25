#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;
long long memo[1001];
long long faktorial(int n){
    if(memo[n] != 0){
        return memo[n];
    }else{
        if(n == 1) return 1;
        return memo[n] = (n%MOD * faktorial(n - 1)%MOD)%MOD;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){ // O(t)
        int n;
        cin>>n;
        cout<<faktorial(n); // O(n)
    }
    // O(nt) => 10^3 * 10^7 = 10^10 (> 1 detik)
    // => Rules of thumb -> 10^8 (1 detik)
    return 0;
}