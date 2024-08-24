#include <iostream>
using namespace std;

int main(){
// Ada N kotak, pada masing - masing kotak ke-i ada bola sebanyak Ai.
// Kotak ke-i = Ai
// Jumlah kotak sebanyak N
    int N;
    cin>>N;
    int kotak[N];
    for(int i = 0; i<N ; i++){
        cin>>kotak[i];
    }
    for(int i = 0 ; i<N; i++){
        cout<<"Kotak ke-"<<i+1<<":"<<kotak[i]<<endl;
    }
}