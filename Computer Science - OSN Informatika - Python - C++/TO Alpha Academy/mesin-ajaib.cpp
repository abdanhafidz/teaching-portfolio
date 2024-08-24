#include <bits/stdc++.h>
using namespace std;

int main(){
    int Q,N;
    cin>>Q>>N;
    stack <int> tumpuk;
    while(Q--){
        int X,Y;
        cin>>X>>Y;
        if(X > Y){
            tumpuk.push(X);
            tumpuk.push(Y);
        }else if(Y > X){
            tumpuk.push(Y);
            tumpuk.push(X);
        }else{
            tumpuk.push(X);
        }
    }
    int atas;
    while(N--){
        atas = tumpuk.top();
        cout<<atas<<endl;
        tumpuk.pop();
    }


    // Q = 5
    // Q = 4
    // Q = 3
    // Q = 2
    // Q = 1
    // Q = 0 -> False
    return 0;
}
