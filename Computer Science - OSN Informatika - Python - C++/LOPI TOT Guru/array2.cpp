#include <iostream>
using namespace std;

int main(){
    int jml_siswa = 5;
    string siswa[jml_siswa] = {"Andi","Budi","Caca","Dodi","Edi"};
    int nilai[jml_siswa] = {90,80,100,75,80};
    int sum_andi_caca = nilai[0] + nilai[2];
    cout<<"Jumlah nilai Andi dan Caca : "<<sum_andi_caca<<endl;
    // hitung rata - rata
    int sum = 0;
    for(int nilai_per_siswa:nilai){
        sum += nilai_per_siswa;
    }
    int size = sizeof(nilai) / sizeof(nilai[0]);
    cout<<"Frekuensi : "<<size<<endl;
    double rata = sum / size;
    cout<<"rata - rata : "<<rata<<endl;
    return 0;
}