#include <bits/stdc++.h>
using namespace std;
#define ll long long
// getMaxItem(x,y) = berapa banyak item yang 
// bisa ia dapatkan secara maksimal jika berjalan dari
// (1,1) -> (x,y)
// getMaxItem()
ll M,N,X,Y;
ll item[100][100];
int getMaxItem(ll i, ll j){
    // Top Down
    if(j - 1 < 0 or i - 1 < 0){
        return false;
    }else{
        // Kiri atau ke atas
        return max(getMaxItem(i - 1, j), getMaxItem(i,j - 1)) + item[X][Y];
    }
}
int main(){

    cin>>M>>N>>X>>Y;
    for(ll i=1; i<=M; i++){
        for(ll j=1; j<=N; j++){
            cin>>item[i][j];
        }
    }
    cout<<getMaxItem(X,Y)<<endl;
    return 0;
}