#include <iostream>
using namespace std;

int main() {

int a, b, c, d, x;
    cin >>a>>b>>c>>d; // a = 1, b = 2, c = 3, d = 5
    a = a + a; // a = 1 + 1 = 2
    b = a + b; // b = 2 + 2 = 4
    c = a + b + c; // c = 2 + 4 + 3 = 9
    d = a + b + c + d; // d = 2 + 4 + 9 + 5 = 20
    x = a + b + c + d; // x = 2 + 4 + 9 + 20 = 
    cout << x;
return 0;

}
