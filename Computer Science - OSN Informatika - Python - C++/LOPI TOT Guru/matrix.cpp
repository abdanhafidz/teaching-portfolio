#include <iostream>
using namespace std;

int main(){
    int r = 4, c = 5;
    string duduk[r][c] = {
        {"Andi","Budi","Caca","Dodi","Eman"},
        {"Fadi","Geri","Hari","I","J"}, // i = 1, j = 1
        {"Kayla","L","M","N","O"},
        {"P","Q","R","S","T"}
    };

    // Siapa yang duduk di baris pertama, kolom pertama => (i,j) = (0,0)(ujuang kiri atas)
    cout<<"Ujung kiri atas :"<<duduk[0][0]<<endl;
    // Duduk di baris pertama dan paling pojok (Kolom terakhir === c) (0, c - 1)
    cout<<"Ujung kanan atas : "<< duduk[0][c - 1]<<endl;
    // Duduk di baris terakhir == r dan paling pojok kiri (kolom pertama) -> index (r - 1, 0) 
    cout<<"Ujung kiri bawah :"<<duduk[r - 1][0]<<endl;
    // Duduk di baris terakhir == r dan paling pojok kana (kolom terakhir == c) -> 
    // index( r - 1, c - 1)
    cout<<"Ujung kanan bawah :"<<duduk[r - 1][c - 1]<<endl;
    // Siapa yang duduk di sebelah kanan Andi
    // Posisi duduk Geri ada di 
    int pos_geri_i = 1, pos_geri_j = 1;
    // Duduk di kanan geri
    // Transverse 
    cout<<"Kanan Geri :"<<duduk[pos_geri_i][pos_geri_j + 1]<<endl;
    cout<<"Kiri Geri :"<<duduk[pos_geri_i][pos_geri_j - 1]<<endl;
    cout<<"Atas Geri :"<<duduk[pos_geri_i - 1][pos_geri_j]<<endl;
    cout<<"Bawah Geri :"<<duduk[pos_geri_i + 1][pos_geri_j]<<endl;
    return 0;
}