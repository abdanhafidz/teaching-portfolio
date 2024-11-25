#include <iostream>
using namespace std;

long long memo[1001];
// memo[n] = menyimpan nilai hasil hitung f(n)
long long f(long long n){
    if(memo[n] != 0){ // Sudah pernah menghitung f(n), karena memo[n] != 0
        return memo[n];
    }else{
        if(n == 1 || n == 2) return 1; // 1.Base case f(1) = 1, f(2) = 1
        return memo[n] = f(n - 1) + f(n - 2); // 2. Rekurens f(n) = f(n - 1) + f(n - 2)
    }
    
}

int main(){
    long long N;
    cin>>N;
    cout<<f(N);
    return 0;
}