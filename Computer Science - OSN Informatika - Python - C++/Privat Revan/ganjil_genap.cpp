#include <iostream>
using namespace std;

bool isGanjil(int x){
    if(x % 2 == 1) return true;
    return false;
}
// Rekursi -> manggil dirinya sendiri 
bool isGenap(int x){
    if(isGanjil(x)) return false;
    return true;
}

int main(){
    int x;
    cin>>x;
    // if(true){
    // jalanin dalemnya
    // }
    // if(false)
    // Berisikan operasi modulo sama if-else -> O(1) [Gak ada for loop, gaada rekursi]
    if(isGanjil(x)){
        cout<<"x bernilai ganjil";
    }else if(isGenap(x)){
        cout<<"x bernilai genap";
    }
    return 0;
}