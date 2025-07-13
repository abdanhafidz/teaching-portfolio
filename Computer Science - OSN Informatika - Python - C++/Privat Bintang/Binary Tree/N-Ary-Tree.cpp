#include <bits/stdc++.h>
using namespace std;

void dfs(int parent, vector<int> children[]){
    cout<<parent<<endl;
    for(int child : children[parent]){
        dfs(child, children);
    }
}
void post_order(int parent, vector<int> children[]){
    for(int child : children[parent]){
        dfs(child, children);
    }
    cout<<parent<<endl;
}


int main(){
    int num_parents;
    cin>>num_parents; 
    vector<int> children[num_parents + 1];
    // 1 x y -> x punya children y
    // 0 -> berhenti
    int opr, x, y;
    while(opr != 0){
        cin>>opr>>x>>y;
        children[x].push_back(y);
    }
}