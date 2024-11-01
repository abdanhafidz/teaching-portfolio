#include <iostream>
using namespace std;


int main(){
    // Index = urutan - 1
    // nama_array[index]
    // Array 1D
    string nama_siswa_kelas_x[5] =  {"Andi","Budi","Caca","Dodi","Edi"};
    cout<<"Siswa pertama :"<<nama_siswa_kelas_x[0]<<endl; // Urutan ke - 1, index = 0
    cout<<"Siswa kedua :"<<nama_siswa_kelas_x[1]<<endl;
    cout<<"Siswa ketiga :"<<nama_siswa_kelas_x[2]<<endl;
    cout<<"Siswa keempat : "<<nama_siswa_kelas_x[3]<<endl;
    cout<<"Siswa kelima : "<<nama_siswa_kelas_x[4]<<endl;

    cout<<endl;
    string nama_siswa_kelas_xi[5] = {"Ando","Bedu","Cece","Dudi","Eman"};
    for(int i = 0; i <= 4; i++ ){
        // Index = urutan - 1
        // Urutan = index + 1
        cout<<"Siswa urutan ke-"<<i + 1;
        cout<<"="<<nama_siswa_kelas_xi[i]<<endl;
    }
    

    return 0;
}