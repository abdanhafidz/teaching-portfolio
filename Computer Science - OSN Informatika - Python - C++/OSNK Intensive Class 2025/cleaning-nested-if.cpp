#include <iostream>
using namespace std;

int main(){
//     Predikat
//  91 -- 100 (A)
//  81 -- 90 (B)
//  76 -- 80 (C)
// <76 (D)
  int nilai;
  char predikat;
  cin>>nilai;
        if(nilai >= 76 && nilai <= 80){
                predikat = 'C';
        }else if(nilai >= 81 && nilai <= 90){
                predikat = 'B';
        }else if(nilai >= 91 && nilai <= 100){
                predikat = 'A';
        }else{
                predikat = 'D';
        }
  return 0;
}