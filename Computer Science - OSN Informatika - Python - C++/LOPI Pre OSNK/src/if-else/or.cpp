#include <iostream>
using namespace std;

int main(){
    int bilangan;
    cin>>bilangan;
    // Bilangan spesial adalah bilangan genap atau kelipatan 3
    if(bilangan % 2 == 0 || bilangan % 3 == 0 ){
        cout <<" Wow Bilangan Spesial " <<endl;
    }else{
        cout << "Bukan Spesial" <<endl;
    }
    
    return 0;
}
