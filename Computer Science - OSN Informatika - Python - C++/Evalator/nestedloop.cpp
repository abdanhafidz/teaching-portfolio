#include <iostream>
using namespace std;

int main(){
    for(int absen = 1; absen <= 5; absen++){
        cout<<"Absen ke - "<<absen<<" Teriak :"<<endl;
        for(int i = 1; i<=absen; i++){
            cout<<"OKE";
        }
        cout<<endl;
    }
    return 0;
}