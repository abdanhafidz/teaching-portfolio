#include <iostream>
using namespace std;


int main(){
    int board[4][4] = {
        {1,0,1,0},
        {0,0,1,0},
        {1,0,1,0},
        {1,1,0,0}
    };
    int banyak_bidak_baris[4];
    for(int i = 0; i<4; i++){
        for(int j = 0; j<4 ; j++){
            if(board[i][j] == 1){
                banyak_bidak_baris[i] ++;
            }
        }
    }

    for(auto count:banyak_bidak_baris){
        cout<<count<<endl;
    }

}