#include <iostream>
using namespace std;

void persiapan_bahan(){
    cout << "1. Siapkan bahan dan alat" << endl;
    cout << "2. Cuci Sampai Bersih" << endl;
    cout << "3. Panaskan wajan, minyak, dan bahan lainnya" << endl;
}

void goreng_nasi(){
    cout << "4. Masukkan Nasi Telur, Bumbu dan Sayur" <<endl;
    cout << "5. Tumis dan goreng hingga matang" << endl;
}

void sajikan(){
    cout << "6. Letakkan di atas piring" << endl;
    cout << "7. Sajikan kemudian santap" << endl;
}

void masak_nasgor(){
    persiapan_bahan();
    goreng_nasi();
    sajikan();
}
// Program Memasak Nasi Goreng
int main(){
    masak_nasgor();
    return 0;
}