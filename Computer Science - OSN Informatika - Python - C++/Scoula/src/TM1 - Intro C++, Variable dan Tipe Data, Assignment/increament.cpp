#include <iostream>
using namespace std;


int main(){
    int x,y;
    x = 5;
    x = x + 1; // x nya jadi 6
    y = 2 + x; // y nya jadi 8
    int z = x - y; // z nya jadi -2
    int hasil = (x + y) * z; // hasil = -28
    cout<<hasil<<endl;
    return 0;
}