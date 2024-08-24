#include <iostream>
using namespace std;

int main(){
    int kotak[10] = {1,0,2,3,4,4,5,6,7,0};
    cout<<"Isi Kotak ke-1 (Pertama) : "<<kotak[1]<<endl;
    // Indeks = Urutan - 1;
    // Urutan -> Ke-, pertama, kedua, ...
    int jumlah4dan5 = kotak[3] + kotak[4];
    cout<<"Jumlah Kotak ke-4 dan ke-5 : "<<jumlah4dan5<<endl;
    for (int i = 0; i<10 ; i++){
        // i = 0-> Cout<<Kotak[0]
        // i++ -> i = i + 1 -> Increament -> i = i + 1 -> i current = i previous + 1
        // i = 1 -> Cout<<Kotak[1]
        // i = 2-> Cout<<Kotak[2]
        // i = 3 ... 
        // ....
        // i < 10 -> i = 9 (Berhenti Di sini)
        cout<<kotak[i]<<endl;
    }
    int index = 0;
    while(index < 10){
        if(kotak[index] == 0){
            kotak[index] +=2;
        }
        index++;
    }
    // SIGTERM -> TLE, Depth Recursive Limit Exceed
    cout<<"Setelah Penambahan"<<endl;
    int sum = 0;
    for (int i = 0; i<10 ; i++){
        // += -> Increase 
        // -= -> Decrease
        // /= -> Bagi
        // *= -> Kali
        // %= -> Modulo
        sum += kotak[i];
    }
    cout<<"Hasil Jumlah : "<<sum<<endl;
}