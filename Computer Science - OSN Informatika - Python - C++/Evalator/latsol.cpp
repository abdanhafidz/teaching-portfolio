#include <iostream>
using namespace std;

int main(){
    // SOAL 1
    // n = 100
    int ret = 0, n;
    cin>>n;
    for(int i = 1; i<=n; i++){
        if(n % i == 0){
            ret ++;
        }
    }
    cout<<ret<<endl;
    // Banyak faktor dari 100 = 9

    // SOAL 2
    int N = 100;
    while(N /= 2){
        cout<<"*";
    }
    // N = 100
    // N = 50 -> cout <<"*"
    // N = 25 -> cout <<"*"
    // N = 12 -> cout <<"*"
    // N = 6 -> cout <<"*"
    // N = 3 -> cout <<"*"
    // N = 1 -> cout <<"*"
    // N = 0 -> 0 = False, STOP

}