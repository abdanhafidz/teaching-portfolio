#include <iostream>
using namespace std;

int main(){
    //
    int N,Q;
    cin>>N>>Q;
    int arr[N];
    int pref_sum[N];
    for(int i = 0; i<N ; i++){ 
        cin>>arr[i];
    }
    // Pre Compute
    // pref_sum[N] = jumlah(1 -> N)
    pref_sum[0] = arr[0];
    for(int R = 1; R<N; R++){
        pref_sum[R] = pref_sum[R - 1] + arr[R];
    }
    while(Q--){
        int range;
        cin>>range;
        cout<<pref_sum[range - 1]<<endl;
    }
    return 0;
}