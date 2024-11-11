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

int bf(){
    int ret = 0;
    for(int x1 = 0; x1<=10; x1++){
        for(int x2 = 0; x2<=10; x2++){
            for(int x3=0; x3<=10; x3++){
                if(x1 + x2 + x3 == 10){
                    ret ++;
                }
            }
        }
    }
    return ret;
}
int main(){
    int n,r;
    n = 3, r = 10;
    cout<<"Stars and Bars: "<<f(n+r-1,r)<<endl;
    cout<<"Brute Force :"<<bf()<<endl;
    return 0;
}