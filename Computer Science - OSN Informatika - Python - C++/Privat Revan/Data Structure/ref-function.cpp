#include <iostream>
using namespace std;
void add(int* y){
    *y += 1;
}

void min(int &y){
    y -= 1;
}

struct Node{
    Node *left;
    Node *right;
};

int main(){
    int x; 
    cin>>x;
    add(&x);
    cout<<x<<endl;
    min(x);
    cout<<x<<endl;
}