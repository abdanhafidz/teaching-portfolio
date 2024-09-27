#include <iostream>
using namespace std;


int main(){
    int x = 1;
    int *addr_x;
    addr_x = &x;
    cout<<"Alamat x : "<<addr_x<<endl;
    cout<<"Nilai dengan alamat x :"<<*addr_x<<endl;
}