#include <iostream>
using namespace std;

typedef struct Node{
    int key;
    Node *left;
    Node *right;
    void init(int root_key){
        this->key = root_key;
        this->left = NULL;
        this->right = NULL;
    }
    void insert(int new_key){
        if(new_key < this->key){
            if(this->left == NULL){
                Node *new_node = new Node;
                new_node->init(new_key);
                this->left = new_node;
            }else{
                this->left->insert(new_key);
            }
        }else{
            if(this->right == NULL){
                Node *new_node = new Node;
                new_node->init(new_key);
                this->right = new_node;
            }else{
                this->right->insert(new_key);
            }
        }
    }
    void preorder(){
        // Mark
        // Visit Left
        // Visit Right
        cout<<this->key<<" ";
        if(this->left != NULL){
            this->left->preorder();
        }
        if(this->right != NULL){
            this->right->preorder();
        }
    }
    void inorder(){
        if(this->left != NULL){
            this->left->inorder();
        }
        cout<<this->key<<" ";
        if(this->right != NULL){
            this->right->inorder();
        }
    }
    void postorder(){
        if(this->left != NULL){
            this->left->postorder();
        }
        if(this->right != NULL){
            this->right->postorder();
        }
        cout<<this->key<<" ";
    }
};
int main(){
    Node root;
    root.init(2);
    root.insert(6);

    root.insert(7);
    root.insert(9);
    root.insert(3);
    cout<<root.key<<endl;
    cout<<root.right->key<<endl;
    cout<<root.right->left->key<<endl;
    cout<<root.right->right->key<<endl;
    root.preorder();
    cout<<"\n";
    root.inorder();
    cout<<"\n";
    root.postorder();
}