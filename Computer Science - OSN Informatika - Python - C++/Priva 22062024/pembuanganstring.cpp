#include <iostream>
using namespace std;

int main(){
    string S, T;
    cin>>S>>T;
    // T.length() = 4
    while(S.find(T) != -1){
        cout<<S<<endl;
        S.erase(S.find(T), T.length());
        // "Sabunmas" Cari si keras S.find(kera) = -1
        // S.erase(-1,4)
    }
    return 0;
}