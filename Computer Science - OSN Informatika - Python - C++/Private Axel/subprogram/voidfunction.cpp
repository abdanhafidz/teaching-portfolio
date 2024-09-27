#include <iostream>
using namespace std;
void id_card(string nama, int usia, string game){
    cout<<"======= ID CARD ======="<<endl;
    cout<<"Nama :"<<nama<<endl;
    cout<<"Usia :"<<usia<<endl;
    cout<<"Game :"<<game<<endl;
    cout<<"======= /////// ======="<<endl;
}

int main(){
    id_card("Abdan Hafidz", 18, "Free Fire");
    id_card("Axel Wisang", 13, "MineCraft" );
    return 0;
}