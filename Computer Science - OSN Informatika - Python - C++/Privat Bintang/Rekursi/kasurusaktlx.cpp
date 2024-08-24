#include <bits/stdc++.h>
using namespace std;
string cek2(string S, int pos){
    int mid = S.size() / 2;
    if(S.size() % 2 == 0){
        mid--;
    }
    if(pos > mid){
        return S[pos] + cek2(S,pos - 1);
    }
        return "" ;
}
bool cek(string S){
    int mid = S.size() / 2;
        string SFromLeft = S.substr(0, mid);
        string SFromRight = cek2(S,S.size() - 1);
        if(SFromLeft == SFromRight){
            return true;
        }else{
            return false;
        }
}

int main(){
    string S;
    cin>>S;
    if(cek(S)){
        cout<<"YA";
    }else{
        cout<<"BUKAN";
    }
    return 0;
}