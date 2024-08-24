#include <iostream>
using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    int harga = 0, bayar = 0;
    int barang,uang;
    for(int i = 0; i<N ; i++){
        cin>>barang;
        if(barang > 0){
            harga+=barang;
        }
    }
    for(int i = 0; i<M ; i++){
        cin>>uang;
        if(uang < 0){
            bayar+=uang;
        }
    }
    cout<<bayar - harga<<endl;
}