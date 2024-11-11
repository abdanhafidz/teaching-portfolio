#include <iostream>
using namespace std;


int main(){
    // 91 -- 100 (A)
    // 81 -- 90 (B)
    // 75 -- 80 (C)
    // <75 (D)
    int nilai;
    cin>>nilai;
    // predikat -> satu huruf / karakter (char)
    char predikat;
    // 91 <= nilai <= 100
    // a <= x <= b -> x >= a dan x <= b
    // x = 1 V (atau) x = 2
    if(nilai >= 91 && nilai <= 100){
        predikat = 'A';
    }else if(nilai >= 81 && nilai <= 90){
        predikat = 'B';
    }else if(nilai >= 75 && nilai <= 80){
        predikat = 'C';
    }else if(nilai < 75){
        predikat = 'D';
    }else{
        cout<<"Nilai lebih dari 100"<<endl;
    }
    cout<<"Predikat : "<<predikat<<endl;
    if(predikat == 'A' || predikat == 'B' || predikat == 'C'){
        cout<<"Selamat anda lulus!";
    }else{
        cout<<"Maaf anda tidak lulus!";
    }
    return 0;
}