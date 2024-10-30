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
    if(nilai <= 100){
        if(nilai >= 90){
            predikat = 'A';
        }else if(nilai <= 89){
            if(nilai >= 81){
                predikat ='B';
            }else if(nilai <= 80){
                if(nilai >=71){
                    predikat ='C';
                }else{
                    predikat = 'D';
                }
            }
        }
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