#include <bits/stdc++.h>
using namespace std;
map<int,map<int,int>> memo;
long long c(long long n, long long k){
    if(n == k){
        return 1;
    }else if(k == 1){
        return n;
    }else{
        if(memo[n].find(k) != memo[n].end()){
        return memo[n][k];
    }else{
        return memo[n][k] = c(n - 1, k - 1) + c(n - 1, k);
    }
    }
}


int main(){
    cout<<c(5,2)<<endl;
    return 0;
}