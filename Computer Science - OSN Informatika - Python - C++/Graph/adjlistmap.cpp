#include <iostream>
#include <vector>
#include <map>
using namespace std;
typedef vector<map<int, int>> vecMap;
int main(){
    map<int, vecMap> adj;
    int n, e;  
    cin>>n>>e;
    while(e--){
        int u, v, w;
        cin>>u>>v>>w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    return 0;
}