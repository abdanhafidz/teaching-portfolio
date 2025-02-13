#include <iostream>
using namespace std;

int main(){
    // Bilangan ganjil ke - n;
    int n;
    cin>>n;
    int U[n + 1];
    for(int i = 1; i<=n ; i++ ){
        U[i] = 2*i - 1;
    }
    cout<<U[n]<<endl;
    return 0;
}