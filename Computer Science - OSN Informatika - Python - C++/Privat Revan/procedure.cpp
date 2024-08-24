#include <iostream>
using namespace std;
int a,b; // Global Variable
// obok() akan menukar nilai a menjadi b dan b menjadi a
// a = 1, b = 2 -> a = 2, b = 1
void obok(){
    int temp_a = a;
    a = b;
    b = temp_a;
}

int f(int a, int b){ // local variable // Yang diprioritaskan Local variable
    return a + b;
}

int main(){
    cin>>a>>b;
    obok();
    cout<<"a = "<<a<<",b ="<<b<<endl;
    cout<<f(1,2);
    return 0;
}