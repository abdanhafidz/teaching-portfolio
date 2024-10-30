#include <iostream>
using namespace std;

int main(){
    // 90 -- 100 (A)
    // 81 -- 89 (B)
    // 71 -- 80 (C)
    // <71 (D)
    int nilai;
    cin>>nilai;
    char predikat;
    if(nilai >= 90 && nilai <= 100){
        predikat = 'A';
    }else if (nilai >= 81 && nilai <= 89){
        predikat = 'B';
    }else if (nilai >= 71 && nilai <= 80){
        predikat = 'C';
    }else if(nilai < 71){
        predikat = 'D';
    }
    int kkm = 76;
    bool Lulus = (nilai >= kkm);

    cout<<"Predikat Siswa dengan nilai :"<<nilai<<", adalah : "<<predikat<<endl;
    if(Lulus){
        cout<<"Selamat Siswa Lulus!"<<endl;
    }else{
        cout<<"Mohon maaf belajarnya ditingkatkan lagi!"<<endl;
    }
}