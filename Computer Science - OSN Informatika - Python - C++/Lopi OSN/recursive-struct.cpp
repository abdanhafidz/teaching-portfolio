#include <iostream>
using namespace std;
struct mesin{
    string kode;
    int cc;
};
struct mobil{
    int tahun;
    int merk;
    mesin *machine;
};


int main(){
    mobil *MobilSaya;
    MobilSaya = new mobil;
    MobilSaya->tahun = 2024;
    mobil *MobilLain;
    MobilLain = new mobil;
    MobilLain->tahun = 2025;
    cout<<MobilSaya->tahun<<endl;
    cout<<MobilLain->tahun<<endl;
    MobilSaya->machine->cc = 1500;
    MobilSaya->machine->kode = "aa";
    cout<<MobilSaya->machine->cc<<endl;
    cout<<MobilSaya->machine->kode<<endl;

    
    return 0;
}