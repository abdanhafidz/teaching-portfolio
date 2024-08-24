#include <iostream>
#define ll long long
using namespace std;

int main(){
    ll N,Q;
    cin>>N>>Q;
    ll arr[N+1];
    ll pref[N+1];
    pref[0] = 0;
    for(int i = 1; i<=N ;i++){
        cin>>arr[i];
        pref[i] = pref[i - 1] + arr[i];
    }
    
    while(Q--){
        ll L,R;
        // Jumlah elemen array dari L -> R, 
        cin>>L>>R;
        cout<<pref[R] - (pref[L - 1])<<endl;
    }
    return 0;
}