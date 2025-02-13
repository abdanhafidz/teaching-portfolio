#include <iostream>
#define ll long long
using namespace std;
const long long MOD = 1e9 + 7;
int main(){
    ll faktorial[1001];
    faktorial[1] = 1;
    for(int i = 2; i<= 1000; i++){
        faktorial[i] = (i%MOD * faktorial[i - 1]%MOD)%MOD;
    }
    int T;
    cin>>T;
    while(T--){
        ll n;
        cin>>n;
        cout<<faktorial[n]<<endl;
    }
}