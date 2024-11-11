#include <iostream>
using namespace std;

int main(){
    int nilai;
    cin>>nilai;
    char predikat;
    if(nilai <= 100){
        if(nilai >= 91){
            predikat = 'A';
        }else if(nilai <= 90){
            if(nilai >= 81){
                predikat = 'B';
            }else if(nilai <= 80){
                if(nilai >= 75){
                    predikat = 'C';
                }else if(nilai < 75){
                    if(nilai >= 0){
                        predikat = 'D';
                    }else{
                        cout<<"nilai tidak boleh minus";
                    }
                }
            }
        }
    }else{
        cout<<"nilai tidak boleh lebih dari 100";
    }
    return 0;
}