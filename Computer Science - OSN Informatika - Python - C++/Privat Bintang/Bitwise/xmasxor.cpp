#include <iostream>
using namespace std;


int main(){
    int A[3] = {2,3,5};
    int ret = 1;
    if(N <= 2000){
    for(int i = 0; i<3; i++){
        for(int j = i + 1; j<3; j++){
            ret *= (A[i] ^ A[j])%999839923;
        }
    }
    }
    // A[0] xor A[1], A[0] xor A[2], A[0] xor A[3]
    // A[i] xor A[i + 1],A[i + 2], ... , A[sizeArr - 1]
    
    else{
        cout<<0<<endl;
    }
}