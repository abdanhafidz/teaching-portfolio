#include <iostream>
using namespace std;


int main(){
    int N;
    cin>>N;
    for(int i = 1; i <= N; i++){
        // Pada baris ke - i, cetak "*" bintang sebanyak i
        // Cetak dulu bintangnya
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        //Bikin baris baru
        cout<<endl;
    }
    return 0;
}