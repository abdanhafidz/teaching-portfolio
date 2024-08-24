#include <iostream>
using namespace std;


int main(){
    int N;
    cin>>N;
    for(int i = 1; i<=N; i++){
        if(i%2){
            cout<<(i + 1) / 2;
        }else{
            cout<<(N + 1 - i / 2);
        }
    }
    return 0;
}