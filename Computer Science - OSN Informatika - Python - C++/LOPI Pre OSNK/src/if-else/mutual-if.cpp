#include <iostream>
using namespace std;

int main(){
    // Diberikan sebuah bilangan x
    // Jika x genap cetak Halo
    // Jika x kelipatan 3 cetak Hi

    int x;
    cin >> x;
    if(x % 2 == 0){
        cout << "Halo" <<endl;
    }else if(x % 3 == 0){ // else 
        cout << "Hi" << endl;
    }


}