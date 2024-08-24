#include <iostream>
using namespace std;
int faktorial(int n){
    if(n == 0) {
        return 1;
    }else{
        return n*faktorial(n - 1); // Rekursi -> Tidak Linear
    }
}
int main(){
    cout<<faktorial(5);
    return 0;
}