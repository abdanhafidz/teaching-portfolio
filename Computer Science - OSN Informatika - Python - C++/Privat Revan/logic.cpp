#include <iostream>
using namespace std;
int ping(int x){
    return x / 2;
}

int pong(int x, int y){
    return ping(x) / ping(y);
}

int main(){
    cout<<pong(0, 0);
    // pong(2024,1) -> ping(2024 / 2) / ping (1 / 2)
    // ping(2024 / 2) = 1012
    // ping(1 / 2) = 0
    // pong(2024,1) -> 1012/0 = UNDEFINED
    // INF = 0 / 0, UNDEFINED -> x / 0 , x != 0;
    return 0;
}