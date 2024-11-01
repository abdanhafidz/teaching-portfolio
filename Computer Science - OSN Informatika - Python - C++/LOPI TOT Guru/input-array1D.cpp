#include <iostream>
using namespace std;

int main(){
    // Ada N orang siswa dan diberikan N data nilai juga. 
    // Dimana nilai ke-i menyatakan nilai dari siswa ke-i
    int N;
    cin>>N;
    string siswa[N]= {};
    int nilai[N] = {};
    // Input Nama siswa
    for(int i = 0; i<N; i++){
        cin>>siswa[i];
    }
    for(int i = 0; i<N; i++){
        cin>>nilai[i];
    }

    for(int i = 0; i<N; i++){
        cout<<siswa[i]<<", Nilai = "<<nilai[i]<<endl;
    }
    return 0;
}