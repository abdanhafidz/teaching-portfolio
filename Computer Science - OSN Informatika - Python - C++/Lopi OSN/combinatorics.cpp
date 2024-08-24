#include <iostream>
using namespace std;
int faktorial[100000];
int C(int n, int r){
    return faktorial[n] / ((faktorial[n - r]) * faktorial[r]);
}
int main(){
    int n,r;
    cin>>n>>r;
    faktorial[0] = 1;
    for(int i = 1; i<= n; i++){
        faktorial[i] = faktorial[i - 1] * i;
    }
    // iteration , pre-compute
    cout<<C(n,r);
}