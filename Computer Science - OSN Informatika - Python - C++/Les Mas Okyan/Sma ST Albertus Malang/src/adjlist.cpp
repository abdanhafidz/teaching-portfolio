#include <iostream>
#include <vector>
using namespace std;


int main(){
    int num_nodes = 3;
    vector<int> adj[num_nodes+1];
    adj[1].push_back(2);
    adj[2].push_back(1);
    adj[2].push_back(3);

    for(int node = 1; node <= num_nodes; node++ ){
        cout<<node<<" punya tetangga = ";
        for(int neighbour : adj[node]){
            cout<<neighbour<< " ";
        }
        cout<<endl;
    }
}