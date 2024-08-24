#include <iostream>
#define ll long long
using namespace std;
ll N,Q;

int main(){
    cin>>N>>Q;
    int pref[N + 1];
    pref[0] = 0;
    for(int i = 1; i<=N; i++){
        if(i%2){
            pref[i] = pref[i - 1] + (i + 1) / 2;
        }else{
            pref[i] = pref[i - 1] + (N + (1 - i / 2));
        }
    
    }
    ll L,R;
    while(Q--){
        cin>>L>>R;
        cout<<pref[R] - (pref[L - 1])<<endl;
    }
    return 0;
}