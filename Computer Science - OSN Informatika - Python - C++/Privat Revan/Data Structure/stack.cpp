#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[4] = {1,1,2,3};
    stack<int> tumpuk;
    cout<<"Isi Array :"<<endl;
    for(auto isi:arr){
        cout<<isi<<endl;
        tumpuk.push(isi);
        tumpuk.
    }

    cout<<"Isi Stack"<<endl;
    while(1){
        if(tumpuk.empty()){
            break;
        }else{
            cout<<tumpuk.top()<<endl;
            tumpuk.pop();
        }
    }
}