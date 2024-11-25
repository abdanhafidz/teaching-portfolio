#include <iostream>
using namespace std;


int main(){
    bool prop1 = (1 + 1 == 2); // True = 1
    int jumlahPacar = 0;
    bool jomblo = (jumlahPacar == 0); // False
    int usia = 19;
    if(jomblo && usia > 17){
        cout<<"Gasskeun"<<endl;
    }else{
        cout<<"Mundur mundur ..."<<endl;
    }
    cout<<"Jumlah Pacar = "<<jumlahPacar<<endl;

}