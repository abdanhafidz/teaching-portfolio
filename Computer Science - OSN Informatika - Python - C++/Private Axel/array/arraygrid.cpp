#include <iostream>

using namespace std;


int main(){
    int N,r,c;
    cin>>N>>r>>c;
    int duduk[r][c];
    int posisi_baris[N];
    int posisi_kolom[N];
    // Siswa duduk di posisi (i,j)
    // Di sebelah kanannya -> posisi (i,j + 1) baris kolom
    // Di sebelah kiri -> posisi (i, j - 1)
    // N = 5 , i = 0, i<=N -> i = {0,1,2,3,4,5} ada 6 baris
    // Diminta sebanyak N baris , N = 5 jumlah baris  = 5, bukan 6
    // index = urutan - 1
    // Mulai dari 0 -> index , mulai dari 1 -> urutan
    // Karena dari soal itu masih urutan, kita rubah ke index
    // index = urutan - 1
    // Urutan : (1<= i <= N) -> Index : (0 <= i <= N - 1 )
    // i <= N - 1 == i < N
    for(int i=0; i<N; i++){
        int x,a,b;
        cin>>x>>a>>b;
        duduk[a-1][b-1] = x;
        posisi_baris[x - 1] = a - 1;
        posisi_kolom[x - 1] = b - 1;
    }

    for(int i = 0; i<N; i++){
        int duduk_baris = posisi_baris[i];
        int duduk_kolom = posisi_kolom[i];
        if(duduk[duduk_baris][duduk_kolom + 1] > 0 && (duduk_kolom + 1) < c) {
            // cout<<"baris & kolom"<<duduk_baris<<duduk_kolom<<endl;
            cout<<duduk[duduk_baris][duduk_kolom + 1]<<endl;
        }else if(duduk[duduk_baris][duduk_kolom - 1] > 0 && (duduk_kolom - 1) >= 0){
            cout<<duduk[duduk_baris][duduk_kolom - 1]<<endl;
        }else{
            cout<<0<<endl;
        }

    }

    return 0;
}