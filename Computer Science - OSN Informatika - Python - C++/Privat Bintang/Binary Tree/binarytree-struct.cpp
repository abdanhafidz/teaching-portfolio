#include <bits/stdc++.h>
using namespace std;

typedef struct Node{
    int key;
    Node left = Node(0);
    Node right = Node(0);
    Node(int new_key){
        key = new_key;
    }
};


int main(){
    map<int, Node*> node;
    node[1] = new Node(1);
    node[2] = new Node(2);
    node[3] = new Node(3);
    node[4] = new Node(4);
    node[1]->left = node[2];
    node[1]->right = node[3];
    node[2]->left = node[4];
    cout<<node[1]->left;
    return 0;
}