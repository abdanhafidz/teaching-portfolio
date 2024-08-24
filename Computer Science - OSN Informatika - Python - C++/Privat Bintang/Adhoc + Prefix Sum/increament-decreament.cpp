#include <iostream>
using namespace std;
#define ll long long

int main(){
    ll N,Q;
    cin>>N>>Q;
    ll a = 0,b = 0;
    while(Q--){
        ll T,X,Y;
        cin>>T>>X>>Y;
        if(T == 1){
            a+=Y;
            if(X == N){
                b+=Y;
            }
        }else{
            b-=Y;
            if(X == N){
                a-=Y;
            }
        }
    }
    cout<<max(abs(a), abs(b))<<endl;
}