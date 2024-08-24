#include <bits/stdc++.h>
using namespace std;
int memo[1001];
int faktor(int x) {
    if(memo[x] != -1) {
        return memo[x];
    }else{
        return memo[x] = x * faktor(x - 1);
    }
}

int main () {
    memset(memo,-1,sizeof(memo));
    memo[1] = 1; 
    // faktor(1) -> memo[1] (-1 atau engga)? -> engga -> return memo[1] = 1 , faktor(1) = 1
    int x, y; cin >> x;
    for (int i = 0; i < x; i++){
        cin >> y;
        cout << faktor(y) << endl;
    }
}