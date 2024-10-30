#include <iostream>
using namespace std;

int main(){
    // Periksa jika x itu kelipatan 2 maka cetak halo,
    /// Periksa jika x itu kelipatan 3 maka cetak hi

    int x;
    cin>>x;
    if(x % 2 == 0){
        cout<<"halo";
    }else if(x % 3 == 0){
        cout<<"hi";
    }

    if(x % 2 == 0){
            cout<<"halo";
    }
    
    if(x % 3 == 0){
            cout<<"hi";
    }


    return 0;
}