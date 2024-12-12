#include <iostream>
using namespace std;

void draw(int x, int y){
    if(x == y){
        for(int i=1; i<=x; i++){
            cout<<"*";
        }
        cout<<endl;
    }else{
        for(int i=1; i<=x; i++){
            cout<<"*";
        }
        cout<<endl;
        draw(x + 1, y);
    }
}

int main(){
    int N;
    cin>>N;
    draw(1,N);
    return 0;
}