#include <iostream>
using namespace std;

int main(){
    // P : Hari ini hujan
    // Negasi : !P : Hari ini tidak hujan (bukan Hari ini cerah)
    bool hariinihujan = false;
    if(!hariinihujan){
        cout<<"hari ini tidak hujan";
    }else{
        cout<<"hariini hujan";
    }

    int x = 5, y = 3;
    bool P = x > y;
    bool notP = !(x > y);
    if(P){
        cout<<"x lebih dari y";
    }else{
        cout<<"x tidak lebih dari y";
    }
    return 0;
}