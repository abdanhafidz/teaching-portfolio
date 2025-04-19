#include <iostream>
#include <vector>
#include <map>
using namespace std;
typedef vector<int> vec;
int main(){
    map<int, map<int, int>> adj;
    int n, e;  
    cin>>n>>e;
    while(e--){
        int u, v, w;
        cin>>u>>v>>w;
        adj[u][v] = w;
        adj[v][u] = w;
    }

    return 0;
}