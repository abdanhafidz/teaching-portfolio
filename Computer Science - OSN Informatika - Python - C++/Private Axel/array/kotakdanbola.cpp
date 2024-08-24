#include <iostream>
using namespace std;

int main(){
    int A[10] = {1,0,2,3,4,4,5,6,7,0}; //deklarasi array
    // Di dalam soal itu bisa aja dikasih tahu dalam bentuk urutan -> mulai dari 1
    // Ketika kita program kita ubah ke sistem index -> mulai dari 0
    // Index = Urutan -1
    cout<<"Isi Kotak pertama ada sebanyak "<< A[0] <<" bola"<<endl;
    cout<<"Isi Kotak kedua ada sebanyak "<< A[1] <<" bola"<<endl;
    cout<<"Isi Kotak ketiga ada sebanyak "<< A[2] <<" bola"<<endl;
    // Kita ingin menggabungkan isi kotak ke-4 dan kotak ke-5 ke dalam satu kotak, 
    // berapakah jumlah bola pada kotak tersebut skrg?
    int sum = A[3] + A[4];
    cout<<"Gabung kotak 4 dan 5 :"<<sum<<endl;
    for(int i=0;i<10;i++){
        // index = urutan - 1
        // urutan = index + 1
        // Cetak urutan
        cout<<"Isi kotak urutan ke-"<< i + 1 << " adalah sebanyak : " << A[i] <<endl;
    }
    return 0;
}