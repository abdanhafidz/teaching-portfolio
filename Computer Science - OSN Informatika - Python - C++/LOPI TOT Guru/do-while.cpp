#include <iostream>
using namespace std;

int main(){
    // int bensin = 9;
    // while(bensin>0){
    //     cout<<"Mobil jalan bensin sisa :"<<bensin<<" liter" <<endl;
    //     bensin--;
    // }
    
    int bensin = 0;
    do{
        cout<<"Mobil jalan bensin sisa :"<<bensin<<" liter" <<endl;
        bensin--;
    }while(bensin>0);
    cout<<"Mobil mogok bensin sudah 0"<<endl;
    return 0;
}