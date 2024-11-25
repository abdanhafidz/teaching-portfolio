
#include <iostream>
using namespace std;

int main(){
    bool beliJeruk, beliApel;
    beliJeruk = false, beliApel = true;
    // Beli salah satu aja jeruk atau apel => xor
    bool perintah = (beliJeruk ^ beliApel);
    if(perintah){
        cout<<"ibu senang!"<<endl;
    }else{
        cout<<"ibu marah :/"<<endl;
    }
    return 0;
}