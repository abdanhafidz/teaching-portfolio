#include <bits/stdc++.h>
using namespace std;
int N;
int visited[1000001];
vector <int> adj[1000001];

void bfs(int x){
    queue <int> q;
    visited[x] = 1;
    q.push(x);
    while(!(q.empty())){
        int cur = q.front();
        q.pop();
        cout<<cur<<endl;
        for(auto v = adj[cur].begin(); v != adj[cur].end(); ++v){
            if(!(visited[*v])){
                visited[*v] = 1;
                q.push(*v);
            }
        }
    }
    
}

int main()
{
    cin>>N;
    int U,V;
    while(N--){
        cin>>U>>V;
        adj[U].push_back(V);
        adj[V].push_back(U);
    }
    bfs(0);
    return 0;
}