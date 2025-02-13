#include <iostream>
using namespace std;
int f(int m, int n){
    
    if(m == 0 || m == n){
        return 1;
    }else{
        return f(m - 1, n - 1) + f(m, n - 1);
    }
}
int main(){
    int m,n;
    cin>>n>>m;
    cout<<f(m,n)<<endl;
    return 0;
}