#include <iostream>
using namespace std;


int main(){
    bool benerga = (3 < 2);
    // Disuruh beli anggur dan apel -> And (Konjungsi)
    cout<<benerga<<endl;
    bool beliApel = true;
    bool beliAnggur = false;
    benerga = beliApel && beliAnggur;
    cout<<benerga<<endl;
    // Disuruh beli anggur atau apel -> or (Disjungsi)
    benerga = beliApel || beliAnggur;
    cout<<benerga<<endl;
    // Disuruh salah satunya beli anggur atau apel -> xor (Disjungsi Eksklusif)
    // P xor Q -> 
    // P = 1, Q = 1 -> 0
    // P = 1, Q = 0 -> 1
    // P = 0, Q = 1 -> 1
    // P = 0, Q = 0 -> 0
    // Not
    // NOt True = False
    // Not False = True
    benerga = (beliApel && !beliAnggur) || (beliAnggur && !beliApel);
    cout<<benerga<<endl;
}