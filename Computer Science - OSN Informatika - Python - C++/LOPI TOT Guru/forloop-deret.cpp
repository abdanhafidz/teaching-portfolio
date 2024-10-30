#include <iostream>
using namespace std;


int main(){
    // Un = 2n - 1
    // Coba tampilkan 10 bilangan ganjil pertama => {1,3,5,7,9,11,13,15,17,19}
    // n dari 1 -- 10, U1 -- U10
    int Un = 1;
    for(int n = 1; n<=10; n++){
        Un = 2*n - 1;
        cout<<Un<<" ";
    }
    
}