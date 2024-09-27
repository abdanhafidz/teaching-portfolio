#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> tumpuk;
    int arr[4] = {1,1,2,3};

    // Menampilkan data array
    for(auto x : arr){
        cout<<x<<endl;
        tumpuk.push(x);
    }
    cout<<endl;
    // Menampilkan data dengan stack
    while(1){
        if(tumpuk.empty()){
            break;
        }else{
            int atas = tumpuk.top();
            cout<<atas<<endl;
            tumpuk.pop();
        }
    }
}