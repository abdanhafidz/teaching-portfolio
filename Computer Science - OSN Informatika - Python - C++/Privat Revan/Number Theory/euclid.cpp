#include <iostream>
using namespace std;

int gcd(int a, int b){
    if(a == 0) return b;
    return gcd(b%a, a);
}
// a < b;


int main(){

}