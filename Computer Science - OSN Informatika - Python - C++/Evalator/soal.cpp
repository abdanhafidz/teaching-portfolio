#include <iostream>
using namespace std;

int main(){
int A = 3*9 - 2 / 5;
int B = A;
B = B + 1;
bool C = A > B;
bool D = A * 2 > B / 2;
if(C){
 if(D && !C){
 cout<<1;
 }else{
 cout<<2;
 }
}else{
 if(D || C){
 cout<<3;
 }else{
 cout<<4;
}
}

    return 0;
}