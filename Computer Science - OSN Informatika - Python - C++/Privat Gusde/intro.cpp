#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;

int main(){
    long long faktorial[1001];
    faktorial[1] = 1;
    for(int n = 2; n<=1000; n++){
        faktorial[n] = (n%MOD * faktorial[n - 1]%MOD)%MOD;
    }
    int t;
    cin>>t;
    while(t--){ // O(t)
        int n;
        cin>>n;
        cout<<faktorial[n]; // O(n)
    }
    // O(nt) => 10^3 * 10^7 = 10^10 (> 1 detik)
    // => Rules of thumb -> 10^8 (1 detik)
    return 0;
}