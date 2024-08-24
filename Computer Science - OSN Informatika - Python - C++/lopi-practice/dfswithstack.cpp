#include <bits/stdc++.h>
using namespace std;
int N;
// N input
// Ui dan Vi
// Ui sama Vi ini terhubung
// 1<= i <= N
int visited[1000001];
vector <int> adj[1000001]; // vector -> Dequeue + Array -> Dynamic Array
void dfs(int n){
    stack <int> stack;
    stack.push(n);
    while(!(stack.empty())){
        int n = stack.top();
        stack.pop();
        if(!(visited[n])){
            cout<<n<<endl;
            visited[n] = 1;
        }
        for(auto v = adj[n].begin();  v!= adj[n].end(); ++v){
            if(!visited[*v]){
                stack.push(*v);
            }
        }
    }
}

int main(){
    cin>>N;
    int U,V;
    while(N--){
        cin>>U>>V;
        adj[U].push_back(V);
        adj[V].push_back(U);
    }
    dfs(1);
}

