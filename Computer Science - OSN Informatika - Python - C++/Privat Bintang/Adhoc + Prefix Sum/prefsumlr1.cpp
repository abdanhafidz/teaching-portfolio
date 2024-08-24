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
    for(int j = 1; j<= N; j++){
        pref_sum[j] = pref_sum[j - 1] + arr[j];
    }
    while(Q--){
        int L,R;
        cin>>L>>R;
        cout<<pref_sum[R] - pref_sum[L - 1]<<endl;
    }
    return 0;
}