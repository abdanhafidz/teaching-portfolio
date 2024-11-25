#include <iostream>
using namespace std;

int main() {
    int A,B,C;
    cin>>A>>B>>C; // A = 3, B = 4, C = 5
    A = B; // A = 4
    B = C; // B = 5
    C = A; // C = 4
    cout<< A + B + C <<endl;
return 0;

}
