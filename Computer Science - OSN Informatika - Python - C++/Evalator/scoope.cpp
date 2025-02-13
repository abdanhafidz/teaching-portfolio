#include <iostream>
using namespace std;
int x;
int f(int x){
    cout<<"Nilai x ="<<x<<endl;
    return x + 3;
}
// Priority : local > global
int main(){
    x = 5;
    f(3);
}