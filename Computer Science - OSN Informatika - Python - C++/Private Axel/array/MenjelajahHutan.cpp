#include <iostream>
using namespace std;


int main(){
    int r, c, N, jumlahEmas = 0;
    cin>>r>>c>>N;
    int gold[r][c];
    for(int i = 0; i < r ; i++){
        for(int j = 0; j < c; j++){
            cin>>gold[i][j];
        }
    }
    string gerakan;
    cin>>gerakan;
    bool GerakanSalah = false;
    int pos_i = 0, pos_j = 0;
    jumlahEmas += gold[pos_i][pos_j];
    for(int i = 0 ; i<gerakan.size(); i++){
        cout<<gerakan[i]<<endl;
        if(pos_i > (r - 1) or pos_j > (c - 1) or pos_i < 0 or pos_j < 0){
            GerakanSalah = true;
            break;
        }
        if(gerakan[i] == 'L'){
            pos_j -= 1;
            jumlahEmas -= 2;
        }else if(gerakan[i] == 'D'){
            pos_i += 1;
            jumlahEmas -= 2;
        }else if(gerakan[i] == 'R'){
            pos_j += 1;
            jumlahEmas += 3;
        }else if(gerakan[i] == 'U'){
            pos_i -= 1;
            jumlahEmas +=3;
        }
        cout<<pos_i<<" "<<pos_j<<" "<<jumlahEmas<<endl;
        jumlahEmas += gold[pos_i][pos_j];
    }
    cout<<jumlahEmas<<endl;
    if(GerakanSalah){
        cout<<"gerakanmu salah bung!"<<endl;
    }
    return 0;
}