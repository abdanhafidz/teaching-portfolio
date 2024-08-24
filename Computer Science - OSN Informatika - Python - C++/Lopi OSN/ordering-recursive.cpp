#include <iostream>
using namespace std;

void f(int n){
    if(n == 0) 
    { cout<<endl;
    }else{
    f(n - 1);
    cout<<n<<" ";
    f(n - 1);
    }
}

int main(){
    f(2);
    return 0;
}