#include <iostream>
using namespace std;
int P(int n, int r){
    if(r == 0) return 1;
    if(r == 1) return n;
    else return n * P(n - 1, r - 1);
}


int main(){

}