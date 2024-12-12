#include <bits/stdc++.h>
using namespace std;
vector <int> weight;
vector <int> val;
// dp(n,i) = dengan kapasitas ransel sebesar n kita akan ambil barang ke - i
int dp(int n, int i){
    // n = kapasitas ransel
    // i = indeks barang yang akan kita ambil atau engga (1/0)
    if(n <= 0 || i == 0) return 0;

    if(weight[i] > n) return dp(n,i - 1);

    return max(dp(n - weight[i - 1], i - 1) + val[i - 1], dp(n,i-1) );
}


int main(){
    int N;
    cin>>N;
    int size = N;
    while(N--){
        int w, v;
        cin>>w>>v;
        weight.push_back(w);
        val.push_back(v);
    }
    // for(int wg : weight){
    //     cout<<wg<<endl;
    // }
    int capacity;
    cin>>capacity;
    cout<<dp(capacity,size);
    return 0;
}