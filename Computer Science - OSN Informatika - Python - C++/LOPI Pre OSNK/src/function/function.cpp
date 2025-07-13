#include <iostream>
using namespace std;

// f(x) = x + 3, x:Domain = int, x + 3 : Range = int

int f(int x){
    return x + 3;
}

double luas_segitiga(double alas, double tinggi){
    double luas = alas * tinggi * 0.5;
    return luas;
}

int recur(int n){
    if(n == 0) return 1; // Base case
    else return 2 * recur(n - 1); // rekurens

}




int main(){
    int hasil = f(5);
    cout << hasil << endl;

    cout << recur(5) << endl;
}