#include <iostream>
#include <string>
using namespace std;

int main(){
    string S;
    cin>>S;
    int mid = S.size() / 2;
    string SFromRight = "", SFromLeft;
    if(S.size() % 2){
        SFromLeft = S.substr(0,mid + 1);
    }else{
        SFromLeft = S.substr(0, mid);
    }
    for(int i = S.size() - 1; i >= mid ; i--){
        SFromRight += S[i];
    } //Reverse
    // S = "abcba"
    // Kanan ke kiri -> S[4], S[3], S[2], S[1], S[0]
    // O(N/2)
    cout<<SFromLeft<<endl;
    cout<<SFromRight<<endl;
    if(SFromRight == SFromLeft){
        cout<<"YA"<<endl;
    }else{
        cout<<"TIDAK"<<endl;
    }
    return 0;
}