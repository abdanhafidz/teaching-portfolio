#include <iostream>
using namespace std;
struct Tree{
    int data;
    Tree (int d) {
      data = d;
      left = NULL;
      right = NULL;
    }
    struct Tree* left;
    struct Tree* right;
}

int main(int){
    return 0;
}