#include <iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    if(x > 0){
        if(x % 2 == 0){
            cout<<"hi";
        }else{
            cout<<"ho";
        }
    }
    
    if(x < 0){
        if(x%2 == 0){
            cout<<"ha";
        }else{
            cout<<"he";
        }
    }
    return 0;
}