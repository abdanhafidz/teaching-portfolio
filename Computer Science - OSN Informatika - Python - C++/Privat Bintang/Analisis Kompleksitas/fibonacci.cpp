#include <bits/stdc++.h>
using namespace std;
void luv(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
long long a,b;
long long memo[10000000]; // Global Scoope
long long fac(long long x){ // Kompleksitas : O(x)
    if(memo[x] != -1){
        return memo[x];
    }else{
        return memo[x] = x * fac(x - 1);
    }
}
int main (){
    luv();
    cin>>a;
    memset(memo, -1, sizeof(memo));
    memo[1] = 1;
    for (long long i =0; i <a; i++){ // O(a)
        cin >> b;
        cout << fac(b) << endl;
    }
    // O(a * b) , O(a) * O(X) untuk X = b
    // O(a * b) -> 10^7 * 10^3 = 10^10 > 10^8 (> 1 detik) . Gak Tembus.
}