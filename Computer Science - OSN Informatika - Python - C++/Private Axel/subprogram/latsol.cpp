#include <iostream>
using namespace std;
int x,y,z;
// add(n) untuk menambahkan nilai x dengan n, menambahkan nilai y dengan x, 
// dan menambahkan nilai z dengan y.
void add(int n){
    x += n;
    y += x;
    z += y;
}

// rem(n)untuk mengurangkan nilai x dengan n, 
// mengurangkan nilai y dengan x, dan mengurangkan nilai z dengan y.
void rem(int n){
    x -= n;
    y -= x;
    z -= y;
}

void hitung(){
    int o,n;
    cin>>o>>n>>x>>y>>z;
    cout<<"x,y,z sebelum = "<<x<<" "<<y<<" "<<z<<endl;
    if(o == 1){
        add(n);
        // add(1)
        // x += 1 -> 3
        // y += x -> 6
        // z += y -> 10
    }else if(o == 2){
        rem(n);
        // rem(3)
        // x -= 3 -> -1
        // y -= x -> 5
        // z -= y -> -4
    }
    cout<<"x,y,z sesudah = "<<x<<" "<<y<<" "<<z<<endl;
}
int main(){
    hitung();
}