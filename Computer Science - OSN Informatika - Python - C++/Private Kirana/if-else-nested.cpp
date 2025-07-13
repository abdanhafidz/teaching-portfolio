#include <iostream>
using namespace std;
// Seseorang boleh naik roller coaster
// jika tinggi badannya minimal 150 cm
// usia minimal 17 tahun
int main(){
    int tinggi, usia;
    cin >> tinggi >> usia;

    bool syaratTinggi = (tinggi >= 150);
    
    bool syaratUsia = (usia >= 17);

    bool bolehNaik = syaratTinggi && syaratUsia;

    if(bolehNaik){
        cout << "Silahkan naik .. " << endl;
    }else if(usia <= 17){
        cout << "Usiamu belum cukup bro! < 17";
    }else if(tinggi <=150){
        cout << "Tinggimu kurang brow! < 150";
    }
}