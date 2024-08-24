#include <iostream>
#define ll long long
using namespace std;
ll N,Q;
ll f(ll L, ll R){
    if(L%2 && !(R%2)){
        return (N + 1)* ( R - L + 1) / 2;
    }else if(!(L%2) && R%2){
        return (N + 2)* ( R - L + 1) / 2;
    }else if(!(L%2) && !(R%2)){
        if(L%2){
            return (N + 1) * (R - L) / 2 + ((L + 1) / 2);
        }else{
            return (N + 1) * (R - L) / 2 + (N + 1 - L / 2);
        }
    }else if((L%2) && (R%2)){
        if(L%2){
            return (N + 2) * (R - L) / 2 + ((L + 1) / 2);
        }else{
            return (N + 2) * (R - L) / 2 + (N + 1 - L / 2);
        }
    }
}
int main(){
    cin>>N>>Q;
    ll L,R;
    while(Q--){
        cin>>L>>R;
        cout<<f(L,R)<<endl;
    }
    return 0;
}