#include <iostream>
using namespace std;

int main(){
    // Diberikan sebuah bilangan x
    // Jika x genap cetak Halo
    // Jika y kelipatan 3 cetak Hi

    int x, y;
    cin >> x >> y;
    
    if(x % 2 == 0){
        cout << "Halo" <<endl;
    }
    
    if(y % 3 == 0){ // else 
        cout << "Hi" << endl;
    }


}