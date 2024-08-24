#include <iostream>
#include <string>
using namespace std;

int main(){
    string S;
    cin>>S;
    string SFromRight = "";
    for(int i = S.size() - 1; i >= 0 ; i--){
        SFromRight += S[i];
    } //Reverse

    // S = "abcba"
    // Kanan ke kiri -> S[4], S[3], S[2], S[1], S[0]
    // O(N)
    if(SFromRight == S){
        cout<<"YA"<<endl;
    }else{
        cout<<"TIDAK"<<endl;
    }
    return 0;
}