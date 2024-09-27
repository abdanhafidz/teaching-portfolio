#include <iostream>
using namespace std;
// f(x) = x + 3 , parameter / domain : x bilangan bulat, range / hasil : x + 3 bilangan bulat
// tipe data range namafunction(<parameter>)
// <parameter> deklarasi variable biasa

int f(int x){
    return x + 3;
}

// jumlah(x,y) = x + y

int jumlah(int x, int y){
    return x + y;
}
int main(){
    cout<<"hasil dari f(3) = "<<f(3)<<endl;
    int hasil_f5 = f(5);
    cout<<"hasil dari f(5) = "<<hasil_f5<<endl;
    cout<<jumlah(5,3)<<endl;
    return 0;
}