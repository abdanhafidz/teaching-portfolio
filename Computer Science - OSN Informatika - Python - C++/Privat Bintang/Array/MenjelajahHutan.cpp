#include <iostream>
using namespace std;
int pos_i, pos_j, jumlah_emas;
int r,c,N;
bool stop;
int maze[100001][100001];

// Style OOP / Object Oriented Programming -> Coding Game
void gerak(char move){
    int tambah_i = 0, tambah_j = 0;
    if(move == 'L'){
        jumlah_emas -=2;
        tambah_j = -1;
    }else if(move == 'R'){
        jumlah_emas +=3;
        tambah_j = 1;
    }else if(move == 'D'){
        jumlah_emas -=2;
        tambah_i = 1;
    }else if(move == 'U'){
        jumlah_emas +=3;
        tambah_i = -1;
    }else{
        cout<<"Input Error";
        exit(0);
    }
    // end of movement -> Saat dia salah gerakan atau udah ga gerak lagi 5 --> 3 ada satu gerakan salah yang tetep terhitung (-2)
    if( (pos_i + tambah_i) > r || (pos_j + tambah_j) > c || (pos_i + tambah_i) < 0 || (pos_j + tambah_j) < 0){ // end of movement
        jumlah_emas += 2;
        // cout<<"Tambah ="<<tambah_i<<","<<tambah_j<<endl;
        // cout<<"Posisi ="<<pos_i<<","<<pos_j<<endl;
        stop = true;
        
    }else{
        pos_i += tambah_i;
        pos_j += tambah_j;
        // cout<<"Tambah ="<<tambah_i<<","<<tambah_j<<endl;
        // cout<<"Posisi ="<<pos_i<<","<<pos_j<<endl;
        jumlah_emas += maze[pos_i][pos_j];
    }
}
int main(){
    cin>>r>>c>>N;
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            cin>>maze[i][j];
        }
    }
    pos_i = 0, pos_j = 0, jumlah_emas = maze[0][0];
    stop = false;
    string S;
    cin>>S;
    for(int  i = 0; i<S.size(); i++){
        gerak(S[i]);
        if(i == (S.size() - 1) || stop ){
            cout<<jumlah_emas<<endl;
            if(stop){
                cout<<"gerakanmu salah bung!"<<endl;
            }
            break;
        }
    }
}