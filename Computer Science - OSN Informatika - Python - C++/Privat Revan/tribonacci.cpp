#include<bits/stdc++.h>
using namespace std;

long long memori[1000];
long long fibonacci (int n) {
    if (memori[n] != -1) { // mula mula di dalam memori kita tersimpan -1 semua menunjukkan bahwa kita belum menghitung apapun
        return memori[n];
    } else {
        return memori[n] = fibonacci(n-1) + fibonacci(n-3);
    }
}
// Notes Bahwa hasil function belum dihitung ditunjukkan oleh memo[i] = -1 (Kasus soal Kombinatoriks, DP)
// Kamu gaboleh bilang rekursifnya belum dihitung dari memo[i] = k untuk k nya itu menjadi nilai suatu hasil rekursif f(i) = k.
// f(i) = 0, i >= 1, memo[i] == 0 berarti belum dihitung, f(9) = 0 , memo[9] = 0, memo[9] == 0 itu berarti belum dihitung kontradiktif
// Kita harus cari memo[i] = k di mana k tidak menjadi hasil rekursif f(i) = k, 
// -1, 0, map / hash - table
// Dynamic Programming

int main ()
{
    // set nilai memo pada array semuanya -1
    memset(memori, -1, sizeof(memori));
    memori[0] = 0;
    memori[1] = 1;
    memori[2] = 0;
    long long n;
    cin >> n;
    cout << fibonacci(n);
}