#include <iostream>
using namespace std;
const long long MOD = 1e9 + 7;
long long faktorial(int n){
    if(n == 1) return 1;
    return (n%MOD * faktorial(n - 1)%MOD)%MOD;
}

int main(){
    int n;
    cin>>n;
    cout<<faktorial(n);
    return 0;
}