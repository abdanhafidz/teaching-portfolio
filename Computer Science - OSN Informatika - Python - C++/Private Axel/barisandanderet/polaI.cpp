#include <iostream>
using namespace std;


int main(){
    int N;
    cin>>N;
    for(int i = 1; i <= N; i++){
        // Pada baris ke - i, cetak "*" bintang sebanyak i
        // Cetak dulu spasinya
        for(int j = 1 ; j <= N - i ; j++){
            cout<<" ";
        }
        // Cetak bintangnya
        for(int k = 1; k<=i; k++){
            cout<<"*";
        }
        //Bikin baris baru
        cout<<endl;
    }
    return 0;
}