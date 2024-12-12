#include <iostream>
using namespace std;

void f(int N){
    if(N == 0) {
    cout<<endl;
    }else{
        cout<<N;
        f(N - 1);
        // f(5) => cetak 5 => f(4)
        // f(4) => cetak 4 => f(3)
        // f(3) => cetak 3 => f(2)
        // f(2) => cetak 2 => f(1)
        /// f(1) => cetak 1 => f(0)
        // f(0) => endl
    }
}

void g(int N){
    if(N == 0) {
    cout<<endl;
    }else{
        g(N - 1);
        cout<<N;
        // f(5) => f(4) <= cetak 5
        // f(4) => f(3) <= cetak 4
        // f(3) => f(2) <= cetak 3
        // f(2) => f(1) <= cetak 2
        // f(1) => f(0) => cetak endl <= cetak 1

    }
}

void h(int N){
    if(N == 0) {
        cout<<"";
    }else{
        h(N - 1);
        cout<<N;
        h(N - 1);
    }
}

int main(){
    int N;
    cin>>N;
    h(N);
    return 0;
}