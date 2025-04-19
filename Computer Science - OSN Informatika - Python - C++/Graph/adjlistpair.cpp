#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vec;
int main(){
    int n, e;  
    cin>>n>>e;
    vector< pair<int,int> > adj[n+1];
    while(e--){
        int u, v, w;
        cin>>u>>v>>w;
        adj[u].push_back    ({v, w});
        adj[u].push_back({v,w});
    }

    // Tampilkan siapa saja koneksi dari si node x 

    return 0;
}