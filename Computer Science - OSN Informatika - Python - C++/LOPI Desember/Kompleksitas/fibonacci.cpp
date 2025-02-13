#include <iostream>
using namespace std;
#define ll long long
ll f(ll n){
    if(n == 1 || n == 2) return 1;
    return f(n - 1) + f(n - 2);
}

int main(){
    ll n;
    cin>>n;
    cout<<f(n)<<endl;
}