#include <bits/stdc++.h>
using namespace std;
map<long long,long long> memo;
long long fibo(long long n){

    if(n == 1 | n == 2){
        return 1;
    }else{
        if(memo.find(n) != memo.end()){
        return memo[n];
    }else{
        return memo[n] = fibo(n - 1) + fibo(n - 2);
    }
    }
}


int main(){
    cout<<fibo(100)<<endl;
    return 0;
}