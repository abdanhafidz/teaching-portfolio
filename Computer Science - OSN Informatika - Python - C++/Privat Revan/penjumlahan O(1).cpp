#include <iostream>
using namespace std;


int main(){
    // Kita dikasih sebuah bilangan bulat N terus coba kamu hitung berapa hasil dari 1 + 2 + 3 + ... + N
    // N = 100
    // N = 10^12 -> TLE
    // 1 + 2 + 3 + 4 + 5 + 6 = 21
    // TLE : Time Limit Exceed -> Proses terlalu lama saat penghitungan
    long long N;
    cin>>N;
    long long sum = 0;
    sum = N*(N+1)/2;
    // Semua orang bisa coding , programming, tapi belum tentu semua orang bisa menulis kode itu dengan baik
    cout<<sum<<endl;
    return 0;
}