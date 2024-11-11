#include <iostream>
using namespace std;
// f(x,y) = xCy

int f(int x, int y){
    if(y == 1){
        return x;
    }else if(y == x){
        return 1;
    }else{
        return f(x - 1, y - 1) + f(x - 1, y);
    }
}

int main(){
    int x,y;
    cin>>x>>y;
    cout<<f(x,y)<<endl;
    return 0;
}