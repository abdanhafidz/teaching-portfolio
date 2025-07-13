#include <iostream>
using namespace std;

int main(){
    int bilangan;
    cin>>bilangan;

    // Bilangan genap => Teriak Woy
    // Bilangan ganjil => Teriak Yah

    if(bilangan % 2 == 0){
        cout<<"Woy";
    }else{
        cout<<"Yah";
    }

    return 0;
}