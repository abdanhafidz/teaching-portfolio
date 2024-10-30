#include <iostream>
using namespace std;


int main(){
    // Un = 2n - 1
    // Coba tampilkan 10 bilangan ganjil pertama => {1,3,5,7,9,11,13,15,17,19}
    // n dari 1 -- 10, U1 -- U10
    // Beda dari bilangan ganjil 2 , b = 2 (transisi = 2), Un += 2
    // +=, *=, -=, /=, %=, dll
    // ++, --, **
    for(int Un = 1; Un<=19; Un += 2){
        cout<<Un<<" ";
    }
    
}