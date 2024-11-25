#include <iostream>
using namespace std;

int main(){
    // Jika x itu adalah bilangan genap 
    // -> habis dibagi 2 cetak "Oy"
    // Jika x itu bilangan 
    // kelipatan 3-> habis dibagi 3, 
    // sisa bagi = 0 cetak "Baka"
    int x;
    cin>>x;
    if(x % 2 == 0){
        cout<<"Oy ";
    }else if(x % 3 == 0){
        cout<<"Baka ";
    } // Mutual if

    return 0;
}