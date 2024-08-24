#include <bits/stdc++.h>
using namespace std;

int faktorial(int N){
    if(N == 0){
        return 1;
    }else{
        return N*faktorial(N - 1);
    }
}
int main(){
long long T,N;
cin>>T;
while(T--){
    cin>>N;
    cout<<faktorial(N)<<endl;
}
}