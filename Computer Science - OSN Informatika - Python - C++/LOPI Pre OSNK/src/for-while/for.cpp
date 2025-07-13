#include <iostream>
using namespace std;


int main(){
    int ret = 0;
    for(int i = 1; i<=1000; i++){
        if(i % 2 == 0) ret++;
        if(i % 3 == 0) ret++;
    }
    cout<<ret<<endl;
    return 0;
}