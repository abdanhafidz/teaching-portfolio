#include <iostream>
using namespace std;


int main(){
    int usia, tinggi;
    cin>>usia>>tinggi;
    bool syaratUsia = (usia >= 17);
    bool syaratTinggi = (tinggi >= 150);
    bool bolehNaik = syaratUsia && syaratTinggi;
    if(bolehNaik){
        cout<<"Silahkan naik";
    }else{
        cout<<"Tidak boleh naik";
    }
    return 0;
}