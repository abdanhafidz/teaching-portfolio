#include <iostream>
using namespace std;


int main(){
    // Cetak bilangan ganjil kurang dari = N;
    int N;
    cin>>N;
    for(int bilGanjil = 1; bilGanjil <= N; bilGanjil += 2){
        cout<<bilGanjil<<endl;
    }
    return 0;
}