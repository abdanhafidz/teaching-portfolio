#include <bits/stdc++.h>
using namespace std;
int N;
map <int,int> memo;
int faktorial(int n){
    // ... //
    // Recursive depth limit exceed //
    if(n == 0){
        return 1;
    }else{
    if(memo.find(n) != memo.end()){
        return memo[n];
    }else{
        return memo[n] = n * faktorial(n - 1);
    }
    }
}

int main(){
    int T;
    cin>>T;
    while(T--){
        cin>>N;
        cout<<faktorial(N)<<endl;
    }
    return 0;
}