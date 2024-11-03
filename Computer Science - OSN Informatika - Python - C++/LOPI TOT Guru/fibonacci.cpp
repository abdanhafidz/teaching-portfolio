#include <iostream>
using namespace std;
int f(int n){
    if(n == 1 || n == 2){
        return 1;
    }else{
        return f(n - 1) + f(n - 2);
    }
}
// f(1) = 1, f(2) = 1
// f(3) = f(3 - 1) + f(3 - 2) = f(2) + f(1) = 1 + 1 = 2
// f(4) = f(3) + f(2) = 2 + 1 = 3
// f(5) = 5
int main(){
    for(int i = 1; i<=10; i++){
        cout<<f(i)<<" ";
    }

    cout<<endl;
    return 0;
}