
#include <iostream>
using namespace std;

int main(){
    bool sim, stnk;
    sim = false, stnk = false;
    bool memenuhi_aturan = (stnk && sim);
    cout<<"Memenuhi aturan = "<<memenuhi_aturan<<endl;
    if(memenuhi_aturan){
        cout<<"Silahkan masuk"<<endl;
    }else{
        cout<<"Dilarang masuk"<<endl;
    }
    return 0;
}