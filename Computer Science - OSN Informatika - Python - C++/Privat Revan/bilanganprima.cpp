#include<bits/stdc++.h>
using namespace std;
void cekprima(long long bil){
    long long jmlFaktor = 0;
    for(int i = 1; i<=sqrt(bil); i++) { // O(sqrt(bil))
    if(bil % i == 0){
        jmlFaktor +=2;
    }
    }
    if(jmlFaktor <= 4){
        cout<<"YA"<<endl;
    }else{
        cout<<"BUKAN"<<endl;
    }
}
int main ()
{
    // Dikasih daftar N bilangan
    // Pada bilangan ke - i (Ai) cek apakah Ai itu prima atau ga
    long long N;
    cin>>N;
    long long bil;
    while(N--){ // O(N)
        cin>>bil;
        if(bil == 2){
            cout<<"YA"<<endl;
        }else{
            cekprima(bil);
        }; // O(sqrt(bil))
    }
    //Kompleksitas : O(Nsqrt(bil))
}