#include <bits/stdc++.h>
using namespace std;
int t,n;
map <int, int> memo;
int dp(int n, int petak[], int ukuran){
    if(memo.find(n) != memo.end()) return memo[n];
    if(n > ukuran) return 0;
    if(petak[n] == -1) return 0;
    return memo[n] = max(dp(n+1, petak, ukuran), dp(n + 2, petak, ukuran)) + petak[n];
}
void solve(){
    memo.clear();
    cin>>n;
    int petak[n+1];
    string items;
    cin>>items;
    int i = 1;
    for(char item : items){
        if(item == '@') petak[i] = 1;
        if(item == '.') petak[i] = 0;
        if(item == '*') petak[i] = -1;
        i++;
    }
    
    cout<<dp(1,petak, n)<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}