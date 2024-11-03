#include <iostream>
using namespace std;
int duapangkat(int n){
    // Base case 2^1 = 2
    // duapangkat(1) = 2, ketika n = 1, return 2
    if(n == 1) {
        return 2; // Base case
    }else{
        //Recurrence
        return 2*duapangkat(n - 1);
    }
}
// f(n) = 2f(n-1)
// f(5) = 2f(4) = 2 * 16 = 32
// f(4) = 2f(3) = 2 * 8 = 16
// f(3) = 2f(2) = 2 * 4 = 8
// f(2) = 2f(1)
// f(2) = 2.2 = 4
// f(1) = 2
int main(){
    cout<<"2 pangkat 2 = "<<duapangkat(2)<<endl;
    cout<<"2 pangkat 10 ="<<duapangkat(10)<<endl;
    return 0;
}