#include <iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    // Pola : pada baris ke -i akan ada bintang sebanyak i
    // 
    for(int i = 1; i<=N; i++){
        for(int j = 1 ; j<= i; j ++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}