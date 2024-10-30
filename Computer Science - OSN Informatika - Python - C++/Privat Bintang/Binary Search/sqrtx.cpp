#include <iostream>
using namespace std;
int mysqrt(int x){
    for(int i = 1; i <= x; i++){
        if(i * i == x){
            return i;
        }
    }
}
int main(){
    cout<<mysqrt(16)<<endl;
}