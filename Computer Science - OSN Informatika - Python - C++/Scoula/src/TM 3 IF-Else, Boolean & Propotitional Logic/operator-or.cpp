
#include <iostream>
using namespace std;

int main(){
    bool beliJeruk, beliApel;
    beliJeruk = false, beliApel = false;
    bool perintah = (beliJeruk or beliApel);
    if(perintah){
        cout<<"ibu senang!"<<endl;
    }else{
        cout<<"ibu marah :/"<<endl;
    }
    return 0;
}