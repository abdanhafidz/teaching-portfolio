#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[4] = {1,1,2,3};
    queue<int> antri;
    cout<<"Isi Array :"<<endl;
    for(auto isi:arr){
        cout<<isi<<endl;
        antri.push(isi);
    }
    
    cout<<"Isi Queue"<<endl;
    while(1){
        if(antri.empty()){
            break;
        }else{
            cout<<antri.front()<<endl;
            antri.pop();
        }
    }
}