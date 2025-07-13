#include <iostream>
using namespace std;


int main(){
    // Apakah diriku jomblo
    // Diriku jomblo saat jumlahPacar < 1
    int jumlahPacar;
    cin>>jumlahPacar;
    bool isJomblo = (jumlahPacar < 1);
    if(isJomblo){
        cout<<"Cari pacar sono!";
    }else{
        cout<<"Yang setia ya ... ";
    }
    return 0;
}