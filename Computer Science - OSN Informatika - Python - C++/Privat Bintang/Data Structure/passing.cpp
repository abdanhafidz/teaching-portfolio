#include <iostream>
using namespace std;
const int MOD = 1e9;
void add(int *x){
    *x+=1;
}

int main(){
    int x = 5;
    int *y = &x;
    cout<<*y<<endl;
    x += 1;
    cout<<x<<endl;
    cout<<*y<<endl;
    *y += 1;
    cout<<*y<<endl;
    cout<<x<<endl;
    add(&x);
    cout<<x<<endl;
    add(y);
    cout<<x<<endl;
    x = 9;
    return 0;
}