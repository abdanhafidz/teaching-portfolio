#include <iostream>
using namespace std;

int main(){
    // matriks berukuran r x c 
    // baris ke - i akan mengandung bilangan - j 
    int r,c;
    cin>>r>>c;
    int A[r][c] = {};
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>A[i][j];
        }
    }
    for(int i=0; i<r; i++){
        // index = urutan - 1
        // urutan = index + 1
        cout<<"Baris ke-"<<i+1<<" bilangannya adalah = ";
        for(int j=0; j<c; j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    // Transpose - matrix
    for(int j=0; j<c; j++){
        // index = urutan - 1
        // urutan = index + 1
        cout<<"Kolom ke-"<<j+1<<" bilangannya adalah = ";
        for(int i=0; i<r; i++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}