#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll n;
vector<ll> a;
bool ok[10];

void f(ll x) {
    if(x >= n) {
        for(ll i = 0; i < a.size(); i++) {
            cout << a[i];
            if(i != a.size() - 1) cout << " ";
        }
        cout << endl;
        return;
    }
    for(ll i = 1; i <= n; i++) {
        if(ok[i]) continue;
        ok[i] = true;
        a.pb(i);
        f(x+1);
        ok[i] = false;
        a.pop_back();
    }
}

int main() {
    cin >> n;
    f(0);
    return 0;
}