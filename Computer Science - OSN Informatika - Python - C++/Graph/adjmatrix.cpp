#include <iostream>
using namespace std;


int main(){
    int n, e;
    cin>>n>>e;
    int adj[n+1][n+1] = {};
    while(e--){
        int u, v, w;
        cin>>u>>v>>w;
        adj[u][v] = w;
    }
    // Tampilkan siapa saja koneksi dari si node x
    int x;
    cin>>x;
    for(int con=1; con<=n; con++){
        if(adj[x][con] == 1){
            cout<<con<<" ";
        }
    }
    cout<<endl<<endl;
    // Tentukan nilai degree / derajat dari node x
    int degree = 0;
    for(int con=1; con<=n; con++){
        if(adj[x][con] != 0){
            degree += adj[x][con]/adj[x][con];
        }
        if(adj[con][x] != 0){
            degree+= adj[con][x]/adj[con][x];
        }
    }

    cout<< "degree" << x << " adalah sebesar  =" <<degree << endl;
    return 0;
}