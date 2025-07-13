#include <iostream>
using namespace std;

int main(){
    string warna1, warna2;
    cin>>warna1>>warna2;
    if(warna1 == "merah"){
        if(warna2 == "kuning"){
            cout << "Orange" <<endl;
        }

        if(warna2 == "biru"){
            cout <<"Coklat"<<endl;
        }
    }
}
