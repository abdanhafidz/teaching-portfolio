
#include <bits/stdc++.h>
using namespace std;
int N;
int visited[1000001];
vector <int> adj[1000001];
void dfs(int x){
    stack <int> stack;
    stack.push(x);
    while(!(stack.empty())){
        int x = stack.top();
        stack.pop();
        if(!(visited[x])){
            cout<<x<<endl;
            visited[x] = 1;
        }
        for(auto v = adj[x].begin(); v != adj[x].end(); ++v){
            if(!(visited[*v])){
                stack.push(*v);
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
    dfs(1);
    return 0;
}