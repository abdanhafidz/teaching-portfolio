#include <iostream>
using namespace std;


int main(){
    int usia = 15;
    double tinggi = 170.0;
    // Usianya di atas 18 tahun dan tinggi badan minimal 160
    bool syarat1 = (usia > 18);
    bool syarat2 = (tinggi >= 160);
    bool memenuhiSyarat =  syarat1 && syarat2; // Proposisi bertingkat -> true and true
    // memenuhi syarat = false
    if(memenuhiSyarat){
        cout<<"Silahkan naik";
    }else{
       cout<<"Dilarang naik"; 
    }
}