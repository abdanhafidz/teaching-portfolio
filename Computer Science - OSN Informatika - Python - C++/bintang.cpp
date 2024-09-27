#include <iostream>
#include <vector>
#include <cmath>
#define fastio ios::sync_with_stdio(0);
#define ll long long
using namespace std;
int main (){
    fastio
    int a; cin >> a; ll sum = 0;
    vector<int>x(a);
    vector<ll>prefsum(a);
    for(int i = 0;i<a;i++){
        cin >> x[i];
        sum += x[i];
    }
    if (a==1){
        cout << sum;
        return 0;
    }
    ll score = sum;
    for(ll i = 0;i<a;i++){
        if(i == 0){
            prefsum[i] = x[i];
        }else{
            prefsum[i] = x[i] + prefsum[i-1];
        }
    }
    for(int i = 1;i<a;i++){
        score = max(score,(prefsum[i-1] * x[i] + (sum - prefsum[i])));
    }
    if(score < sum){
        cout << sum << endl;
    }else{
        cout << score << endl;
    }
}