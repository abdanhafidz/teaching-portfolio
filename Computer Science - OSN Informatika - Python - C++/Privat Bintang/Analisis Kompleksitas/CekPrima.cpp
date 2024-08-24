#include <iostream>
using namespace std;
void luv (){
    ios::sync_with_stdio(0);
    cin.tie(0);
}

int main (){
    // Semi Sieve E...
    luv();
    int a,n;
    cin >> a;
    for (int i = 1;i <=a; i++){ // Jumlah Loop (O(a))
        cin >> n;
        bool prime = true;
        if(n == 1){
            prime = false;
        }
        for (int j = 2; j*j <= n ;j++){ // Jumlah Loop (O(sqrt(N)))
            if (n%j==0){
                prime = false;
            }
        }
        if (prime){
            cout << "YA" << endl;
        }else{
            cout << "BUKAN" << endl;
        }
    }
    // O(a sqrt(N) )
    // a = 1000
    // N = 10^6
    // Jumlah Operasi : 1000 * 1.000.000 = 10^3 * 10^3 = 10^6 (<= 1 detik)
}