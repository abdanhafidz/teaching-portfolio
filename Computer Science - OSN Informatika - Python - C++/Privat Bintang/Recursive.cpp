#include <iostream>
#include <string>
using namespace std;
// Kita punya string S, cetaklah karakter S dari Paling kanan sampai karakter ke-x
// karakter ke-2 , indeks ke-1
// Urutan != Indeks
// Indeks = Urutan - 1
// S = "abcde", x = 2 , cetak 4 sampe (karakter ke-2) indeks 1 -> edcb
// r = 4
// l = 4
// l = 3
// l = 2
// l = 1 -> (2 - 1) (x - 1)
string f(string S,int x, int l){
    if(l < x - 1){
        return "";
    }else{
        cout<<S[l];
        return f(S,x, l - 1);
    }
}

int main(){
    string S;
    int x;
    cin>>S>>x;
    cout<<f(S,x,S.size() - 1);
    return 0;
}