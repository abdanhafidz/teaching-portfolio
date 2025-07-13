#include <iostream>
using namespace std;


int main(){
    int nilai;
    cin >> nilai;
    char predikat;
    if(nilai >= 75 && nilai <= 80){ // >= 75 dan <= 80 (75 -- 80)
            predikat = 'C';
    }else if(nilai <= 90){ // 81 -- 90 (> 80 dan <= 90)
                predikat = 'B';
    }else if(nilai <= 100){
                predikat = 'A';  // 91 -- 100 (>90)
    }else{
        predikat = 'D';
    }


}