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
int main(){
    cout<<"2 pangkat 2 = "<<duapangkat(2)<<endl;
    cout<<"2 pangkat 10 ="<<duapangkat(10)<<endl;
    return 0;
}