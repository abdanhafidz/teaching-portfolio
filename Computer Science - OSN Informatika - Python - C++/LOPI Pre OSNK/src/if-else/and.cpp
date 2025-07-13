#include <iostream>
using namespace std;

int main(){
    // Syarat Naik Roller Coaster : Tinggi Badan minimal 150 cm
    // Usia minimal 17 tahun
    int usia;
    float tinggi;
    cin>>tinggi>>usia;
    bool syaratTinggi = (tinggi >= 150); // False
    bool syaratUsia = (usia >= 17); // True

    bool bolehNaik = syaratTinggi && syaratUsia; // False & True = False

    if(bolehNaik){ // False
        cout << " Silahkan Naik" << endl;
    }else{
        cout << " Dilarang Naik" << endl;
    }
    
    return 0;
}
