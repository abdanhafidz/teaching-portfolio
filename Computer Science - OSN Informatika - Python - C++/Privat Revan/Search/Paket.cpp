#include <bits/stdc++.h>

using namespace std;
int LowerBound(int arr[], int x, int n)
{
    int low = 0;
    sort(arr,arr + n);
    int high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        // Check if x is present at mid
        if (arr[mid] <= x)
            return mid;
        // If x greater, ignore left half
        if (x > arr[mid]){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
        // If x is smaller, ignore right half
    }

    // If we reach here, then element was not present
    // High Level -> Library , STL, 
    // Low Level -> From Scratch Bikin Program / Algoritmik.
    // dataCari = x , dataCari >= x, dataCari <=x, dataCari = x^2, dataCari += x
    // Algoritma Sieve E. -> Bilangan Prima , Analisis Kompleksitas, O(sqrt(N))
    // for (1 <= i <= sqrt(N)) , i * i <= N
    return -1;
}
int main(){
    long long N;
    cin>>N;
    long long B[N];
    vector <long long> paket(N);
    // B[i] = ...

    for(int  i = 0 ; i<N ; i ++){
        cin>>B[i];
        paket.push_back(B[i]);
    }
    for(int i=0; i<N ;i++){
        LowerBound()
    }
    // Dynamic -> push, pop, add, insert
}