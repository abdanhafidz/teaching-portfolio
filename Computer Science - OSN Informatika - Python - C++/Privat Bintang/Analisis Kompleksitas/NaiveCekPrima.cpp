#include <bits/stdc++.h>
using namespace std;

int main (){
    int N, bil;
    cin>>N;
    for(int i = 1; i<= N ; i++){ // Jumlah Loop -> O(N)
        cin>>bil;
        int count = 0;
        for(int j = 2; j<=sqrt(bil); j++){ // O(bil)
            if(bil % j == 0){
                count++;
            }
        }
        if(count == 2){
            cout<<"YA";
        }else{
            cout<<"BUKAN";
        }
    }
}
// Kita bukan hanya nulis kode, tapi kita menulis kode dengan baik dan benar.
// Banyak orang / semua orang bisa ngoding, tapi belum tentu orang itu bisa ngoding 
// dengan baik dan benar (cepat, hemat, dan efisien)
// Kompleksitas O(N * bil) = 1000 * 10 juta = 10^9 > 10^8 (> 1 detik) -> TLE