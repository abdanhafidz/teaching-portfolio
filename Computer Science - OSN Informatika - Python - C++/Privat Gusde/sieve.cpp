#include <bits/stdc++.h>
using namespace std;
bool cekPrima(int n){
    long long jmlFaktor = 2;
    for(int i = 2; i<=sqrt(n); i++) { // O(bil)
        if(n % i == 0) return false;
    }
    return true;
}
int main(){
    int prima[77778];
    prima[1] = 2;
    int k = 2;
    for(long long i=3; i<=1000000; i++){
        if(cekPrima(i)){
            prima[k] = i;
            k++;
        }
        if(k == 77778){
            break;
        }
    }
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        cout<<prima[k]<<endl;
    }
    return 0;
}