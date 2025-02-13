#include <bits/stdc++.h>
using namespace std;
// binary(5) -> binary(2) -> binary(1) -> binary(0) -> 0
// 101
//  012
// Rules of thumb : 1<= n <= 10^12 -> 1 detik
// Time Complexity O(n)
// Space Complexity -> Memory
// TLE -> Time Limit Exceed
// MLE -> Memory Limit Exceed
void digitOneBinary(int n, int pos = 0){
    if(n == 0){
        cout<<"";
    }else if(n % 2 == 0 && n != 0){
        pos++;
        digitOneBinary(n / 2, pos);
        // Divide and Conquer
    }else{
        cout<<pos<<" ";
        pos++;
        digitOneBinary(n / 2, pos);
    }
}
int main(){
    int n;
    int arr[100];
    // arr[1] = 1, arr[2] = 3, arr[3] = 5, ... , arr[5] = 11
    cin>>n;
    digitOneBinary(n);
}
// ABCD -> 01234
// ACBD
// ADCB
// ...
// DCBA