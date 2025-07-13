#include <iostream>
using namespace std;
bool isPrime(int n){
    int cnt = 0;
    if (n <= 1)
        return false;
    else {

        // Count the divisors of n
        for (int i = 1; i <= n; i++) {
            if (n % i == 0)
                cnt++;
        }

        // If n is divisible by more than 2 
        // numbers then it is not prime
        if (cnt > 2)
            return false;

        // else it is prime
        else
            return true;
    }
}
int main(){
    // Bilangan unik adalah bilangan yang memenuhi salah satu ketentuan
    // Yaitu bilangan prima atau bilangan ganjil
    int bilangan;
    cin>>bilangan;
    bool isGanjil = (bilangan % 2 == 1);
    bool isPrima = isPrime(bilangan);
    bool isUnik = isPrima ^ isGanjil;

    if(isUnik){
        cout<<"Bilangan tersebut unik!"<<endl;
    }else{
        cout<<"Bilangan tidak unik :("<<endl;
    }
}