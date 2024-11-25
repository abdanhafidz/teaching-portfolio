#include <iostream>
using namespace std;


int main(){
    int a=12, b=23, c=45, d=78, x = 0;
    if (a > b){
        if (a > c){
            if (d > a){
                x = d * d;
            }else{
                x = a * a;
            }
        }else{
            if (d > c){
                x = d * d;
            }else{
                x = c * c;
            }
        }
    }else{
        if (b > c){
            if (d > b){
                x = d * d;
            }else{
                x = b * b;
            }
        }else{
            if (d > c){
                x = d * d;
            }else{
                x = c * c;
            }
        }
    }

    return 0;
}