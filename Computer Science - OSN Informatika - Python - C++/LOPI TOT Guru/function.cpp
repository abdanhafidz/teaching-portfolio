#include <iostream>
using namespace std;
// Tipe data return value nama function(tipe data parameter parameter)
int f(int x){
    return x + 3;
}

float LuasSegitiga(float alas, float tinggi){
    float hitungLuas = 0.5 * alas * tinggi;
    return hitungLuas;
}

void id_card(string nama, int usia, string hobi){
    cout<<"=== KARTU MEMBER LOPI ==="<<endl;
    cout<<"Nama :"<<nama<<endl;
    cout<<"Usia :"<<usia<<endl;
    cout<<"Hobi :"<<hobi<<endl;
}

bool CekGanjil(int x){
    if(x%2 == 1){
        return true;
    }else{
        return false;
    }
}
int main(){
    cout<<"f(3) = "<<f(3)<<endl;
    int hasil_f_5 = f(5);
    cout<<"f(5) = "<<hasil_f_5<<endl;
    int alas, tinggi;
    cin>>alas>>tinggi;
    cout<<"Luas Segitiga = "<<LuasSegitiga(alas,tinggi)<<endl;
    id_card("Abdan Hafidz",19,"Memancing");
    int x = 9;
    if(CekGanjil(x)){
        cout<<"x adalah ganjil"<<endl;
    }else{
        cout<<"x adalah genap"<<endl;
    }
    return 0;
}