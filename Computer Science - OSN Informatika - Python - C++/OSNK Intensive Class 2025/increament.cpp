#include <iostream>
using namespace std;

int main(){
    int x;
    cin>>x; 
    x++; // x += 1 -> x = x + 1
    x += 2; //x = x + 2
    x--; // x -= 1 -> x = x - 1
    x -= 2; // x = x - 2
    int y = 2;
    x *= y; // x = x * y
    x /= y; // x = x / y;
    x %= y; // x = x mod y;
    cout<<x<<endl; // x = 8 (Terbaru)
    return 0;
}