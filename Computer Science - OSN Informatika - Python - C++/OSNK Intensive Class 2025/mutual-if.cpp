#include <iostream>
using namespace std;


int main(){
    int x;
    cin>>x;
    // Jika x bilangan genap maka cetak "ok"
    // Jika x bilangan kelipatan 3 maka cetak "hi"

    if(x % 2 == 0){
        cout<<"ok"<<endl;
    }else if(x % 3 == 0){
        cout<<"hi"<<endl;
    }

    
}