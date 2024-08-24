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

int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        cout<<faktorial(N)<<endl;
    }
    return 0;
}