#include <iostream>
using namespace std;

int main(){
    int petak[3][4];
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cin>>petak[i][j];
        }
    }
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cout<<petak[i][j];
        }
        cout<<endl;
    }
    // Baris 1, kolom 1 urutan (1,1) -> indeks (0,0)
    cout<<"Baris 1 kolom 1 : "<<petak[0][0]<<endl;
    // Baris 3, kolom 4 urutan (1,1) -> indeks (0,0)
    cout<<"Baris 3 kolom 4 : "<<petak[2][3]<<endl;
}