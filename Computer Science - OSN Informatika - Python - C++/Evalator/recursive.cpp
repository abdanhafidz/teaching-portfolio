#include <iostream>
using namespace std;
int S(int n){
    // S(1) = 1
    
    if(n == 1){
        return 1;
    }else{
        return S(n - 1) + 1;
    }

}

int main(){
    cout<<"S2024 :"<<S(2024)<<endl;
}