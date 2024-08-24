#include <iostream>
using namespace std;
long long memo[1000];
long long faktorial(long long N){
    if(N == 1){
        return 1;
    }else{
        if(memo[N] != 0){ // Kalau N faktorial sudah pernah kita hitung dan ingat (memo[N] != 0 )
            return memo[N];
        }else{
            return memo[N] = N*faktorial(N - 1); // Kalau N faktorial belum pernah kita hitung dan ingat (memo[N] == 0 )
        }
    }
}
int main(){
    long long T;
    cin>>T;
    while(T--){
        long long N;
        cin>>N;
        cout<<faktorial(N)<<endl;
    }
}