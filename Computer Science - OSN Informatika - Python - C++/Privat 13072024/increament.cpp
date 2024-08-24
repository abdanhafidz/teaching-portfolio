#include <iostream>
using namespace std;

int main(){
int x = 1;
// Update nilai x menjadi 2;
x = 2;
// Nilai x bertambah 1;
// x = 2 + 1 = 3
// x baru = x sebelumnya + 1
// x = x + 1 -> x += 1 -> x++
x++;
// Nilai x bertambah sebesar k
// x = x + k -> x += k
x += 2;
// Nilai x berkurang sebesar 3
x -= 3;
// Nilai x sekarang menjadi x dibagi k
//  x sekarang = x sebelumnya dibagi k -> x = x / k -> x /= k
x /= 2;
// Nilai x sekarang menjadi x dikali k
//  x sekarang = x sebelumnya dikali k -> x = x * k -> x *= k
x *= 2;
// Nilai x sekarang menjadi x dimodulo k
//  x sekarang = x sebelumnya dimodulo k -> x = x % k -> x %= k
// x %= 2;

cout<<x<<endl;
return 0;
}