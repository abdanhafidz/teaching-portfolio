#include <iostream>
using namespace std;
int f(int x){
    return x + 3;
}
void id_card(string nama, int usia, string waifu){
    cout<<"======= Kartu Member Anime ======="<<endl;
	cout<<"Nama	:"<<nama<<endl;
	cout<<"Usia	:"<<usia<<endl;
	cout<<"Waifu	:"<<waifu<<endl;
}

int main(){
    id_card("Revan",15,"Sakura");
    id_card("Abdan",19,"Siapa aja");
    return 0;
}