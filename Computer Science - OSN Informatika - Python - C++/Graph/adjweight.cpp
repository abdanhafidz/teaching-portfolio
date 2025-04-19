#include <iostream>
#include <vector>
using namespace std;


int main(){
    int n, e;
    cin>>n>>e;
    vector<int> adj[n+1];
    while(e--){
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        // undirected
        adj[v].push_back(u);
    }
    // Tampilkan siapa saja koneksi dari si node x
    int x;
    cin>>x; 
    for(int con: adj[x]){
        cout<<con<<" ";
    }

    cout<<endl;

    // Tampilkan degree dari node x
    cout<<"Degree si "<<x<<" adalah sebesar = "<<adj[x].size()<<endl;

    return 0;
}