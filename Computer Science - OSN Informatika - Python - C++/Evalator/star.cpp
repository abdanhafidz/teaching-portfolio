#include <iostream>
using namespace std;

int main(){
    // N = 4
    // Baris ke-1 : *
    // Baris ke-2 : **
    // Baris ke-3 : ***
    // Baris ke-4 : ****
    int N = 6;
    for(int i = 1; i<=N; i++){
        for(int j = 1; j <= i; j++){
            cout<<"*";
            
        }
        cout<<endl;
    }
    return 0;
}