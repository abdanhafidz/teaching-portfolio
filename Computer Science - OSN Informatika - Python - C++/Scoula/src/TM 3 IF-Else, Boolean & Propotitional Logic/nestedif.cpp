#include <iostream>
using namespace std;

int main(){
    // 91 -- 100 (A)
    // 81 -- 90 (B)
    // 76 -- 80 (C)
    // <76 (D)
    int nilai;
    char predikat;
    cin>>nilai;
    if(nilai >= 0){
        if(nilai >=91){
            if(nilai <=100){
                predikat = 'A';
            }else{
                predikat = 'X';
                cout<<"Nilai tidak boleh lebih dari 100";
            }
        }else{
            if(nilai >= 81){
                if(nilai <= 90){
                    predikat = 'B';
                }
            }else{
                if(nilai >= 76){
                    if(nilai <= 80){
                        predikat ='C';
                    }
                }else{
                    predikat = 'D';
                }
            }
        }
    }
    cout<<"Predikat :"<<predikat<<endl;
    if(predikat == 'A' or predikat == 'B' or predikat == 'C'){
        cout<<"Selamat lulus!"<<endl;
    }else{
        cout<<"Mohon maaf tidak lulus :("<<endl;
    }
    return 0;
}