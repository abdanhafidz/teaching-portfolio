#include <iostream>
using namespace std;

int faktorial(int n){
    // ... //
    // Recursive depth limit exceed //
    if(n == 0){ // Base case
        return 1;
    }else{
        return n * faktorial(n - 1);
    }
}

int fibo(int n){
    if(n == 0 | n == 1){
        return 1;
    }else{
        return fibo(n - 1) + fibo(n - 2);
    }
}
int main() {
    int N;
    cin>>N;
    cout<<"hasil Faktorial = "<<faktorial(N)<<endl;
    cout<<"Hasil fibonacci = "<<fibo(N);
    // f(1) = 1, f(2) = 1, f(3) = 2, f(4) = 3
    // 1 <= N <= ...
    // Lebih baik program kita menyesuaikan soal, dibandingkan kamu harus menyesuaikan soal ke dalam program
}