#include <iostream>

using namespace std;


int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int angkaCari = 7;
    bool status = false;
    int idx = -1;
    for(int i = 0; i<7; i++){
        if(arr[i] == angkaCari){
            status = true;
            idx = i;
            break;
        }
    }

    if(status){
        cout<<"Data Ditemukan! pada index "<< idx <<endl;
    }else{
        cout<<"Data tidak ditemukan!"<<endl;
    }
}