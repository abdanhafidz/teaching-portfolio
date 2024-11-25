#include <bits/stdc++.h>
using namespace std;
long long h[100001];
long long f(long long x, long y){
    if(x > y) return 0;
    if(x == y) return abs(h[x] - h[y]) ;
    return min(f(x + 1, y), f(x + 2,y)) + abs(h[x] - h[y]);
}


int main(){
    long long N;
    cin>>N;
    for(int i = 1; i<=N; i++){
        cin>>h[i];
    }
    cout<<f(1,N);
    return 0;
}