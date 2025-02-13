#include <iostream>
using namespace std;

int asam(int x){ 
int y = 1/(x - 5); 
y *= x; 
y += x; 
return y + 3; 
} 
int manis(int x){ 
return asam(x + 1)- asam (x - 1) + x; 
} 

int main(){
    cout<<manis(2025)<<endl;
    return 0;
}