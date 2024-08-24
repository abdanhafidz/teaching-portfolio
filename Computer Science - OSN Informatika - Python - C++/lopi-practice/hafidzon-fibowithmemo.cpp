#include <bits/stdc++.h>
using namespace std;

long long memo[10001];

long long fibo (long long N) {
    if (memo[N] != -1) {
        return memo[N];
    } else {
        return memo[N] = fibo(N - 1) + fibo(N - 2);
    }
}

int main () {
    memset(memo, -1, sizeof(memo));
    memo[1] = 1; memo[2] = 2;
    long long N; cin >> N;
    cout << fibo(N);
}