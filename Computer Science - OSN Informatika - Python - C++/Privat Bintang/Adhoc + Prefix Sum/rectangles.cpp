#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll N,M,A,B;
    cin>>N>>M;
    cin>>A>>B;
    ll ans1 = (M/A) * (N/B);
    ll ans2 = (N/A) * (M/B);
    ll ans = max(ans1,ans2);
    cout<<ans<<endl;
}