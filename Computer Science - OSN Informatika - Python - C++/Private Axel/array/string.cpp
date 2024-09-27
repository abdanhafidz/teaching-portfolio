#include <iostream>
using namespace std;


int main(){
    string nama = "Axel Wisang";
    for(int i = 0 ; i < nama.size(); i ++){
        cout<<"Huruf ke -"<<i+1<<" : "<<nama[i]<<endl;
    }
    
    // Urutan = index + 1
    // Index = Urutan - 1
    return 0;
}