

#include <iostream>
using namespace std;


struct Node{
    int data;
    Node *left;
    Node *right;
};
int main(){
    Node *root;
    root = new Node;
    root->data = 1;
    root->left = new Node;
    root->left->data = 2;
    root->right = new Node;
    root->right->data = 3;
    cout<<root->left->data<<endl;
    return 0;
}