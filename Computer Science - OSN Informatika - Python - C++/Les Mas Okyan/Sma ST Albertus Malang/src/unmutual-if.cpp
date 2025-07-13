// Diberikan sebuah bilangan bulat N
// Jika N genap cetak "oke", jika N kelipatan 3 cetak "Halo"

#include <iostream>
using namespace std;


int main(){
    int N;
    cin >> N;
    // UnMutual If = Saling Lepas
    if(N % 2 == 0){
        cout << "oke" <<endl;
    }
    if(N % 3 == 0){
        cout << "Halo" <<endl;
    }
    return 0;
}