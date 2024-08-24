#include <bits/stdc++.h>
#include <string>
using namespace std;


int main(){
    // operasi string
    string S = "Hafidzon";
    cout<<S.size()<<endl;
    cout<<S[0]<<endl;
    S.insert(8,"K");
    // string.erase(N)
    // hapus dari kanan ke kiri semua elemennya sampai tersisa sebanyak N elemen
    S.erase(2);
    cout<<S<<endl;
    S.replace(0,1,"b");
    cout<<S<<endl;
    string angka ="12345";
    int sum = 0;
    for(int i = 0; i<angka.size(); i++){
        char karakter_skrg = angka[i];
        int digit = stoi(&karakter_skrg);
        sum+= digit;
    }
    cout<<sum<<endl;
}