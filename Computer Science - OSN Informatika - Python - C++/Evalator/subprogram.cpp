#include <iostream>
using namespace std;
void menyiapkan_bahan(){
    cout<<"(1) Menyiapkan Bahan"<<endl; // proses 1
    cout<<"1.1 Mencuci bersih bahan"<<endl;
    cout<<"1.2 Mengeringkan Bahan"<<endl;
    cout<<"1.3 Memotong Bahan"<<endl;
}

void menumis_bahan(){
    cout<<"(2) Menumis Bahan"<<endl;
    cout<<"2.1 Memanaskan Minyak"<<endl;
    cout<<"2.2 Masukkan bahan ke wajan"<<endl;
}

void menggoreng(){
    cout<<"(3) Menggoreng"<<endl;
    cout<<"3.1 Goreng Telur"<<endl;
    cout<<"3.2 Masukkan Nasi"<<endl;
    cout<<"3.3 Goreng Nasi"<<endl;
}

void menyajikan(){
    cout<<"(4) Penyajian Hasil"<<endl;
    cout<<"4.1 Sajikan di atas piring"<<endl;
    cout<<"4.2 Makan"<<endl;
}

void masakNasgor(int jml_porsi){
    for(int i=1; i<=jml_porsi; i++){
        cout<<"Masak nasgor porsi ke -"<<i<<endl;
        menyiapkan_bahan();
        menumis_bahan();
        menggoreng();
        menyajikan();
    }
}
int main(){
    int jml_porsi;
    cout<<"Mau masak berapa chef? =";
    cin>>jml_porsi;
    masakNasgor(jml_porsi);
}