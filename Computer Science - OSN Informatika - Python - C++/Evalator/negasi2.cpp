#include <iostream>
using namespace std;

int main(){
    int x = 3, y = 3; // x == y
    if((x > y)){
        cout<<"x lebih dari y";
    }else{
        if((x <= y)){
            cout<<"x tidak lebih dari y";
        }
    }
    return 0;
}