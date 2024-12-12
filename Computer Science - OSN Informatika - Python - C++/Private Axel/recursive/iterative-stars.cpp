#include <iostream>
using namespace std;
// *

// 

int main(){
    int N;
    cin>>N;
    for(int i = 1; i<=N; i++){
        for(int stars = 1; stars <= i; stars++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}