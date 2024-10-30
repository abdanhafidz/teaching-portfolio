#include <iostream>
using namespace std;


int main(){
    // Pola bilangan ganjil = Un = 2n - 1
    // U20
    int U[20] = {};
    for(int n=1;n<=20;n++){
        U[n] = 2 * n - 1;
        cout<<"U"<<n<<" nilainya = "<<U[n]<<endl;
    }

    cout<<U[20]<<endl;
}