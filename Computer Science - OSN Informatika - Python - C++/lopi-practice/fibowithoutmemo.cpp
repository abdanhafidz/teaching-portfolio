#include <bits/stdc++.h>
using namespace std;

long long memo[10001];

long long fibo (long long N) {
    if (N == 1 || N==2) {
        return 1;
    } else {
        return fibo(N - 1) + fibo(N - 2);
    }
}

int main () {

    long long N; cin >> N;
    cout << fibo(N);
}