// Diberikan sebuah bilangan bulat N
// Jika N genap cetak "oke", jika N kelipatan 3 cetak "Halo"

#include <iostream>
using namespace std;


int main(){
    int N;
    cin >> N;
    // Mutual If = Eliminasi Irisan (Inklusi Eksklusi)
    // Jika N kelipatan 2 cetak "oke", 
    // Jika N kelipatan 3 cetak "Halo"

    if(N % 2 == 0){
        cout << "oke" <<endl;
    }else if(N % 3 == 0){
        cout << "Halo" <<endl;
    }
    return 0;
}