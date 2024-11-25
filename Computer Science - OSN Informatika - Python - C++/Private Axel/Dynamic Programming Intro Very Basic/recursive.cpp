#include <iostream>
using namespace std;
int f(int n){
    if(n == 1 || n == 2) return 1; // 1.Base case f(1) = 1, f(2) = 1
    return f(n - 1) + f(n - 2); // 2. Rekurens f(n) = f(n - 1) + f(n - 2)
}

int main(){
    int N;
    cin>>N;
    cout<<f(N);
    return 0;
}