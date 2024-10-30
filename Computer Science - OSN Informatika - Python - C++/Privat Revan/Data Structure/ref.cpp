#include <iostream>
using namespace std;


int main(){
    int x = 9;
    int* y = &x; // referencing to x
    cout<<x<<endl;
    cout<<*y<<endl;
    x+=1;
    cout<<x<<endl;
    cout<<*y<<endl;
    *y += 1;
    cout<<x<<endl;
    cout<<*y<<endl;
}