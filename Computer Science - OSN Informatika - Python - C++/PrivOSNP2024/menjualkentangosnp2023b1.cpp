#include <bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(0);cin.tie(NULL);
#define ll long long

int main(){
    int N,M;
    cin>>N>>M;
    int A[N + M + 1];
    int B[M];
    ll sumA = 0, sumB = 0;
    for(int i=0;i<N;i++){
        cin>>A[i];
        sumA+=A[i];
        
    }
    for(int i=0;i<M;i++){
        cin>>B[i];
        sumB+=B[i];
    }
    double rataA = sumA / N, rataB = sumB / M;
    // Pindahin elemen ke-i di B ke A
    // pindahin kentang di truk B dalam array B[5] pindahin ke A
    // pemindahan pertama berarti ukuran A mula mula N kentang
    // pindahin 1 kentang di truk A contains N + 1 masukin B[5] ke A[N+1]
    // masukin B[5] ke A[N+1], A[N+1] = B[5], B[5] = -
    // setiap pemindahan ke - i masukkan ke A[N+i], N++; M--;
    // i = 0,1,2,3,4
    // i = 4,3,2,1,0
    // N = 3
    // M = 5
    // for loop kentang B : 4,3,2,1,0
    // A[0], A[1], A[2]
    // A[0], A[1], A[2], A[3]
    // Ukuran 3, indeks maksimal 3 - 1 = 2
    // A[3+(5 - 4) - 1]
    int n = sizeof(B) / sizeof(B[0]);
    sort(B,B+n);
    int bobot=0;
    for(int i = M - 1; i>0 ; i--){
        cout<<rataA<<endl;
        cout<<rataB<<endl;
        cout<<B[i]<<endl;
                A[N - 1 +(M - i)] = B[i];
                bobot+=B[i];
                N++;
                M--;
            rataA = (sumA + bobot)/N;
            rataB = (sumB - bobot)/M;
        
        if(rataA > rataB){
            if(B[i] >= B[i - 1] && B[i] != -1){
            continue;
            }else{
            cout<<bobot<<endl;
            return 0;
            }
        }
    }
    
    if(rataA <= rataB){
        cout<<-1<<endl;
    }else{
        if(rataA > rataB){
            cout<<bobot<<endl;
        }
    }

}

// A : 2 5 5 5 -> 12/3 = 4
// B : 1     -> 6/2 = 3
// 10