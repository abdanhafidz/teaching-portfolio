#include <iostream>
using namespace std;


int main(){
    int board[4][4] = {
        {1,0,1,0},
        {0,0,1,0},
        {1,0,1,0},
        {1,1,0,0}
    };
    
    string kursi[4][3] = {
        {"Abdan","Steven","Bintang"},
        {"Axel", "John", "Revan"},
        {"Kevin","Andre","Michael"},
        {"Daniel","Nathan","Mitchele"}
    };

    // Di mana kah Abdan duduk? (i,j)
    cout<<kursi[0][0]<<endl;
    // Duduk di baris ke - 3, kolom ke - 2.
    cout<<kursi[2][1]<<endl;
    // Duduk di sebelah kanan axel
    int i_axel = 1, j_axel = 0; // posisi Axel
    // Sebelah kanan
    cout<<kursi[i_axel][j_axel + 1]<<endl;
    // Duduk di belakang axel
    cout<<kursi[i_axel + 1][j_axel]<<endl;
    // Duduk di depan axel
    cout<<kursi[i_axel - 1][j_axel]<<endl;

    // Menampilkan isi array
    //loop baris
    cout<<"* Daftar Siswa *"<<endl;
    for(int i = 0; i < 4; i++){
        // loop kolom
        for(int j = 0; j < 3; j++){
            cout<<kursi[i][j]<<" ";
        }
        cout<<endl;
    }

}