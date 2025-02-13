#include <iostream>
using namespace std;

int main(){
    // Bilangan ganjil ke - n;
    int n;
    cin>>n;
    int U[n];
    for(int i = 0; i<=n - 1; i++){
        U[i] = 2*(i + 1) - 1;
    }
    cout<<U[n - 1]<<endl;

    return 0;
}