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
    if(nilai >= 91 && nilai <= 100){
        predikat = 'A';
    }else if(nilai >= 81 && nilai <= 90){
        predikat = 'B';
    }else if(nilai >= 76 && nilai <= 80){
        predikat = 'C';
    }else if(nilai >= 0){
        predikat = 'D';
    }else{
        predikat = 'X';
        cout<<"Mohon maaf nilai harus di rentang 0 -- 10!"<<endl;
    }
    cout<<"Predikat :"<<predikat<<endl;
    if(predikat == 'A' or predikat == 'B' or predikat == 'C'){
        cout<<"Selamat lulus!"<<endl;
    }else{
        cout<<"Mohon maaf tidak lulus :("<<endl;
    }
    return 0;
}