#include <iostream>
using namespace std;
long long fac(long long x){ // Kompleksitas : O(x)
    if (x==1){
        return 1;
    }else{
        return x * fac(x-1);
    }
}
int main (){
    long long a,b; cin >> a;
    for (long long i =0; i <a; i++){ // O(a)
        cin >> b;
        cout << fac(b) << endl;
    }
    // O(a * b) , O(a) * O(X) untuk X = b
    // O(a * b) -> 10^7 * 10^3 = 10^10 > 10^8 (> 1 detik) . Gak Tembus.
}