#include <iostream>
using namespace std;

int main(){
    // cetak angka dari 10 sampai 1
    // cetak 10 <= angka >= 1, 10,9,8,7,6,5,4,3,2,1
    // transisi adalah berkurang satu;

    for(int angka = 10; angka >= 1; angka--){
        cout<<angka<<endl;
    }
    return 0;
}