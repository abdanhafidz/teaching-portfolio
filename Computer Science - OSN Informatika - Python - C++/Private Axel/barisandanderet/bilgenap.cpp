#include <iostream>
using namespace std;


int main(){
    // Cetak bilangan ganjil kurang dari = N;
    int N;
    cin>>N;
    for(int bilGenap = 2 ; bilGenap <= N; bilGenap += 2 ){
        cout<<bilGenap<<endl;
    }
    return 0;
}