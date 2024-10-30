#include <iostream>
using namespace std;


int main(){
    // Pola bilangan ganjil = Un = 2n - 1
    // S20
    // Sn = n*n
    int sum = 0;
    for(int n=1;n<=20;n++){
       sum += 2*n - 1;
    }

    cout<<"S20 :"<<sum<<endl;
}