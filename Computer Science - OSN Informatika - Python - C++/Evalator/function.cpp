#include <iostream>
using namespace std;
// f(x) = x + 3, parameter = x, return value = x + 3, 
// - x bilangan bulat -> x + 3 bilangan bulat,
// Tipe data parameter : bilangan bulat, dan tipe data function : bilangan bulat

int f(int x){
    return x + 3;
}

void cetak_hasil_f(int x){
    cout<<x + 3<<endl;
}

int main(){
    int x;
    cin>>x;
    cetak_hasil_f(x);
}