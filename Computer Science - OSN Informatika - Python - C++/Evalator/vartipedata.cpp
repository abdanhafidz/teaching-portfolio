#include <iostream>
using namespace std;

int main(){
    string nama;
    cout<<"Masukkan Nama => ";
    getline(cin, nama);
    // Interface : Tampilan menerima input
    cout<<"Hello "<<nama<<endl;
    return 0;
}