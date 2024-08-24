#include <bits/stdc++.h>
using namespace std;

vector <int> adj[1005];
int visited[1005];

void dfs(int x){
    visited[x] = 1;
    for(auto u : adj[x]){
        if(!(visited[u])){
            dfs(u);
        }
    }

}
int main(){
    int N,Q;
    memset(visited,0,sizeof(visited));
    cin>>N>>Q;
    int U,V;
    while(Q--){
        cin>>U>>V;
        adj[U].push_back(V);
        adj[V].push_back(U);
    }
    int cnt = 0;
    for(int i = 1; i<=N; i++){
        if(visited[i]) continue;
        dfs(i);
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}