// Buatlah sebuah struct Data Akun 
// Akun -> (Username, Password, Email)
// Untuk struct akun ada method register, ada method login
// Register ada confirm password
// Akun has a detail akun
// Detail Akun ->  (Nama, No HP, alamat)
// Buatkan juga method untuk menampilkan detail akun

#include <iostream>
using namespace std;
typedef struct tes{
    int x;
    void change_x(int new_x){
        x = new_x;
    }
};
int main(){
    tes t1;
    t1.x = 5;
    t1.change_x(3);
    return 0;
}