#include <iostream>
using namespace std;

int main(){
    int kotak [10] = {1,0,2,3,4,4,5,6,7,0};
    // Tampilkan isi masing - masing kotak
    for(int i = 0; i<=9 ; i++){
        // urutan = index + 1
        cout<<"Kotak pada urutan ke-"<<i + 1<<" = "<<kotak[i]<<endl;
    }
    // Kita mau isi kotak yang isinya 0 dengan 2
    for(int i = 0; i<=9 ; i++){
        if(kotak[i] == 0){
            kotak[i] = 2;
        }
    }
    cout<<"Kotak kosong sudah diisi!"<<endl;
    for(int i = 0; i<=9 ; i++){
        // urutan = index + 1
        cout<<"Kotak pada urutan ke-"<<i + 1<<" = "<<kotak[i]<<endl;
    }

    int sum = 0;
    for(int i = 0; i<=9 ; i++){
        // urutan = index + 1
        sum += kotak[i];
    }

    cout<<"Total semua bola = "<<sum<<endl;


    return 0;
}