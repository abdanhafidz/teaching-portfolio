#include <bits/stdc++.h>
using namespace std;
vector<int> adj[10001];
int visited[10001] = {};
void dfs(int node){
    cout<<node<<" ";
    visited[node] = 1; // mark
    for(int neighbour:adj[node]){
        if(!visited[neighbour]){
            dfs(neighbour); // visits
        }
    }
}

void bfs(int node){
    visited[node] = 1;
    queue<int> q;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout<<node<<" ";
        for(int neighbour:adj[node]){
            if(!visited[neighbour]){
                visited[neighbour] = 1;
                q.push(neighbour);
            }
        }
    }
}

int main(){
    int n, e;
    cin>>n>>e;
    while(e--){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int x;
    cin>>x;
    return 0;
}