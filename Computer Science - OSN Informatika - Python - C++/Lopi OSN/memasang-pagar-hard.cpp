#include <iostream>
#define ll long long
using namespace std;

int main(){
    ll L,W,N;
    cin>>L>>W>>N;
    ll P[N + 3];
    int maxP = 0;
    for(int i = 0; i<=N; i++){
        cin>>P[i];
        if(P[i] > maxP){
            maxP = P[i];
        }
    }
    
    ll x[maxP + 1];
    for(int i = 1; i<=max(L,W) + 1; i++){
        if(i <= maxP){
            ll count  = 0;
            for(int j = 1; j<=i; j++){
                for()
            }
        }
    }
    return 0;
}