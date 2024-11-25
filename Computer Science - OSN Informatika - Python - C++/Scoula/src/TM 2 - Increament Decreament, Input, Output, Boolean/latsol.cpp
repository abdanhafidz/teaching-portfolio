#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin>> a >> b >> c; // a = 1, b = 2, c = 3

    a++; // a = 2
    b -= c; //b = b - c -> b = 2 - 3 = -1
    c*= b; // c = c * b -> c = 3 * -1 = -3
    b++; // b = b + 1 -> b = -1 + 1 = 0
    c--; // c = c - 1 -> c = -3 - 1 = -4

    cout << a + b + c <<endl; // 2 + 0 + (-4) = -2
    return 0;
}