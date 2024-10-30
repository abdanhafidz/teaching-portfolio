#include <iostream>
using namespace std;
int y = 10; // Global Variable
void f(int x){
    cout<<"Nilai y :"<<y<<endl;
    cout<<"Nilai x :"<<x<<endl;
}
int main(){
    int x; // Local Variable
    cin>>x;
    f(x);
    y += 1;
    cout<<"Nilai y :"<<y<<endl;

    return 0;
}