#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i = 1; i<=n ; i++){
        if(i > n / 2){
            break;
            cout<<"Oke stop nak"<<endl;
        }
        cout<<"Siswa ke-"<<i<<" Teriak : ";
        for(int j = 1; j <= 3; j++){
            cout<<"halo"<<" ";
        }

        cout<<endl;
    }
    return 0;
}