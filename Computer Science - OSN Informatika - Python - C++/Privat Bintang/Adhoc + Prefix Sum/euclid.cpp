#include <iostream>
using namespace std;
int gcd(int a, int b){
    if(b == 0) {
        return a;
    }else{
        return gcd(b, a % b);
    }
} // O log(min(a,b))
// Worst Complexity a = b - 1, b = b -> O(b)
int lcm(int a, int b){
    return a * b / gcd(a,b);
}
int main(){
    int a,b;
    cin>>a>>b;
    int i = lcm(a,b);
    int j = gcd(a,b);
    cout<<i * j - (i*j/a*b);
    return 0;
}