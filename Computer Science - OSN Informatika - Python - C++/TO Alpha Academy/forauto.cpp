#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    // for(int i = 0; i<5; i++){
    //     cout<<"Elemen array skrg : "<<arr[i]<<endl;
    // }
    for(auto skrg : arr){
        cout<<"Elemen array skrg : "<<skrg<<endl;
    }
    // Adjacency List
    // 1 : {2,3}
    // 2 : {1,3}
    // 4 : {5}
    // 1 dan 2 terhubung -> adj[1].push_back(2)
    // adj[2].push_back(1)
    // 1 dan 3 terhubung -> adj[1].push_back(3)
    // 3 dan 1 terhubung -> adj[3].push_back(1)
}