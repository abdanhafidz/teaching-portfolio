#include <bits/stdc++.h>
using namespace std;
map<int, int> memo; 
// memo[n] = dp(n)
int dp(int n){
    if(memo.find(n) != memo.end()){
        return memo[n];
    }else{
        if(n == 1 || n == 2) return 1;
        return memo[n] = dp(n - 1) + dp(n - 2);
    }
}
int main(){
    int N;
    cin>>N;
    cout<<dp(N)<<endl;
    return 0;
}