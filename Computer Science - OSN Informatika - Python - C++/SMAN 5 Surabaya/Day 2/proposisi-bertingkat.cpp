#include <iostream>
using namespace std;

int main(){
    float tinggi = 130;
    int usia = 3;
    bool syarat1 = (tinggi > 150);
    bool syarat2 = (usia > 17);
    bool memenuhiSyarat = syarat1 && syarat2; // Proposisi Bertingkat

    if(memenuhiSyarat){
        cout<<"Silahkan naik .."<<endl;
    }else{
        cout<<"Balik sono..."<<endl;
    }
    return 0;
}