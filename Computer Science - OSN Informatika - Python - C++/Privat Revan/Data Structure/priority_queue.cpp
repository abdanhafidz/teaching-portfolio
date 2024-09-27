#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {0,3,1,2,5};
    priority_queue<int> antri;
    cout<<"Isi Array :"<<endl;
    for(auto isi:arr){
        cout<<isi<<endl;
        antri.push(isi);
    }
    
    cout<<"Isi P-Queue"<<endl;
    while(1){
        if(antri.empty()){
            break;
        }else{
            cout<<antri.top()<<endl;
            antri.pop();
        }
    }
}