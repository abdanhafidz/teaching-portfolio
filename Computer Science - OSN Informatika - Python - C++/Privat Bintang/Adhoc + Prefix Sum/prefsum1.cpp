#include <iostream>
using namespace std;

int main(){
    //
    int N,Q;
    cin>>N>>Q;
    int arr[N+1];
    int pref_sum[N+1];
    for(int i = 1; i<=N ; i++){ 
        cin>>arr[i];
    }
    // Pre Compute
    // pref_sum[N] = jumlah(1 -> N)
    pref_sum[0] = 0;
    for(int R = 1; R<= N; R++){
        pref_sum[R] = pref_sum[R - 1] + arr[R];
    }
    while(Q--){
        int range;
        cin>>range;
        cout<<pref_sum[range]<<endl;
    }
    return 0;
}