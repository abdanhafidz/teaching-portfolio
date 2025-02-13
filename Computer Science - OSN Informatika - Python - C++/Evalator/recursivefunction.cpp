#include <iostream>
using namespace std;
// f(x) = 2f(x - 1), f(0) = 1

int f(int x){
    // Base case
    if(x == 0){
        return 1;
    }else{
        return 2*f(x - 1);
    }
}

int main(){

    return 0;
}