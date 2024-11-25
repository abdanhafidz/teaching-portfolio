#include <iostream>
using namespace std;
int main(){
    int x = 20;
    x ++; // x = 21
    x += 2; // x = 23
    cout<<x<<endl;
    x -= 3; // x = 20
    cout<<x<<endl;
    x /= 2; // x = 10
    cout<<x<<endl;
    x *= 3; // x = 30
    cout<<x<<endl;
    x %= 7; // 30/7 ->7*4 = 28 sisa : 2 x = 2
    cout<<x<<endl;
}