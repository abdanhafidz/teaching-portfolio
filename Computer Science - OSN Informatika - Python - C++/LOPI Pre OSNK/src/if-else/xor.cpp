#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n <= 1)
        return false;

    // Check divisibility from 2 to n-1
    for (int i = 2; i < n; i++)
        {
            if (n % i == 0) return false;
        }

    return true;
}
int main(){
    int bilangan;
    cin>>bilangan;
    // Bilangan ajaib adalah bilangan yang hanya memenuhi
    // salah satu ketentuan (either)
    // Bilangan genap atau bilangan prima
    if((bilangan % 2 == 0) ^ isPrime(bilangan) ){
        cout <<" Wow Bilangan Ajaib " <<endl;
    }else{
        cout << "Bukan Ajaib" <<endl;
    }
    
    return 0;
}
