#include <iostream>
using namespace std;


int main(){
    bool prop = (1 + 1 == 2);
    cout << prop <<endl;

    bool prop2 = (3 < 2);
    cout << prop2 << endl;

    int jumlahPacar = 0;
    bool punyaPacar = (jumlahPacar > 0);
    cout << punyaPacar << endl;

    if(punyaPacar){
        cout << "When yh ..." << endl;
    }else{ // punyaPacar == False
        cout << "Cari pacar sana!" << endl;
    }
}