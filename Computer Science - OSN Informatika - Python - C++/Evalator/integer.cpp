#include <iostream>
using namespace std;

int main(){
   int a = 1, b = 2;
   int c = a / b; // karena integer (bilangan bulat) -> maka dipaksa jadi bulat (pembulatan ke bawah), 
   // floor : floor(0.5) -> 0 , floor(1.3) -> 1, floor(2.5) -> 2
   cout<<c<<endl;
    return 0;
}