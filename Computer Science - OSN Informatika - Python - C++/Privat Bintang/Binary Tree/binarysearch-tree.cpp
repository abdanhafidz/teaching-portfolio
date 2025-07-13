#include <bits/stdc++.h>
using namespace std;

typedef struct BST{
    int key;
    BST* left;
    BST* right;
    BST(int key){
        this->key = key;
        this->left = nullptr;
        this->right = nullptr;
    }
    void insert(int new_key){
        if(new_key < this->key){
            if(this->left == nullptr){
                this->left = new BST(0);
            }
            if(this->left->key == 0){
                this->left->key = new_key;
            }else{
                this->left->insert(new_key);
            }
        }else{
            if(this->right == nullptr){
                this->right = new BST(0);
            }
            if(this->right->key == 0){
                this->right->key = new_key;
            }else{
                this->right->insert(new_key);
            }
        }
    }
};

int sumBST(BST* myBST){
    if(myBST == nullptr) return 0;
    return myBST->key + sumBST(myBST->left) + sumBST(myBST->right) ;
}

void dfs(int node){
    for(neighbour : adj[node]){
        dfs(neighbour);
    }
}


int main(){
    int n;
    cin>>n;
    BST* myBST;
    for(int i = 0; i<n; i++){
        int new_key;
        cin>>new_key;
        if(i == 0){
            myBST = new BST(new_key); // initialize root
        }else{
            myBST->insert(new_key);
        }
    }
    cout<<sumBST(myBST);
    return 0;
}