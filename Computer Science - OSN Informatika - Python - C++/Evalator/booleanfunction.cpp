#include <iostream>
using namespace std;
bool isGanjil(int N){
    return (N % 2 != 0);
}

bool isGenap(int N){
    return !isGanjil(N);
}
int main(){
   int N;
   cin>>N;
   if(isGanjil(N)){
        cout<<N<<" adalah ganjil";
   }else if(isGenap(N)){
        cout<<N<<" adalah genap";
   }
    return 0;
}